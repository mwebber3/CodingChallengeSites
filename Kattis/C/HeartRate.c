#include <stdio.h>

void reset(double b, double p, double minABPM, double calcBPM, double maxABPM) {
        b = 0.0;
        p = 0.0;
        minABPM = 0.0;
        maxABPM = 0.0;
        calcBPM = 0.0;
    }
    
int main()
{
    int i, cases;
    scanf("%i", &cases);
    double b, p, minABPM, maxABPM, calcBPM;
    
    for (i = 0; i < cases; i++) {
        scanf("%lf %lf", &b, &p);
        minABPM = (60.0 / (p / (b - 1)));
        maxABPM = (60.0 / (p / (b + 1)));
        calcBPM = ((60.0 * b) / p);
        printf("%.4f %.4f %.4f \n", minABPM, calcBPM, maxABPM);
        reset(b, p, minABPM, calcBPM, maxABPM);
    }
}
