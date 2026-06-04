#include<stdio.h>
#include<math.h>

int main() {
    double x1, x2, y1, y2;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    double calc1 = (x1 - x2) * (x1 - x2);
    double calc2 = (y1 - y2) * (y1 - y2);
    double calc = calc1 + calc2;
    double distance = sqrt(calc);

    printf("%lf\n" , distance);
    return 0;
}