#include <stdio.h>
#include <math.h>

int main(){
    double v, r;
    int p = 21500;
    if (scanf("%lf", &r) != 1) return printf("n/a");
    v = (4.0 / 3) * M_PI * pow(r, 3);
    printf("%.0lf", p * v);
    return 0;
}