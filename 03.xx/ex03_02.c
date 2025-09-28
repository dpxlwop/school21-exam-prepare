#include <stdio.h>
#include <math.h>

int main(){
    double grad_in_rad = 57.29;
    double grad, rad;
    if (scanf("%lf", &rad) != 1) return printf("n/a");
    grad = rad * grad_in_rad;
    printf("%0.f", round(grad));
    return 0;
}