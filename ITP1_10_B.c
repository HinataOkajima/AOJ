#include<stdio.h>
#include<math.h>

int main() {
    double a, b, C;
    scanf("%lf %lf %lf", &a, &b, &C);

    C = C * M_PI / 180.0;

    double S = 0.5 * a * b * sin(C);
    double c = sqrt(a*a + b*b - 2*a*b*cos(C));
    double L = a + b + c;
    double h = 2 * S / a;

    printf("%.8lf %.8lf %.8lf\n", S, L, h);
    return 0 ;
}