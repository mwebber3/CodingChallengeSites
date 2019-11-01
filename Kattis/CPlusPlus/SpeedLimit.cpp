#include <iostream>

void DistanceTraveled (int);

int main()
{
   int loop; 	
    
   while (true) {
   	std::cin >> loop;
   	
   	if (loop == -1) {
   		break;
   	}
   	
   	DistanceTraveled(loop);
    }
    return 0;
}

void DistanceTraveled (int loop) {
	int mph[loop];
	int hours[loop];
	int total;
	
	for (int i = 0; i < loop; i++) {
		std::cin >> mph[i] >> hours[i];
	}
	
	total = (mph[0] * hours[0]);
	
	for (int i = 1; i < loop; i++) {
		total += ((hours[i] - hours[i - 1]) * (mph[i]));
    }
    
    std::cout << total << " miles" << std::endl;
}
