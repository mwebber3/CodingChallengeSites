#include <stdio.h>
#include <math.h>

int main()
{
    double pi = 3.1415926535897932384626433; // pi from wiki
    
    while (1) {
        double d, v;
        scanf("%lf %lf", &d, &v);
        
        if (d == 0 && v == 0) 
            break;
       
        printf("%.9f \n", pow((pow(d, 3) * pi / 6 - v) / (pi / 6), (1.0 / 3)));
    } 
}