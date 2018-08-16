#include <iostream>

int main() {
	double pi = 3.1415926535897932384626433;

	while (true) {
		double d, v, result;
		std::cin >> d >> v;

		if (d == 0 && v == 0)
			break;

		result = pow((pow(d, 3) * pi / 6 - v) / (pi / 6), (1.0 / 3));
		std::printf("%.9f \n", result);
	}
	return 0;
}