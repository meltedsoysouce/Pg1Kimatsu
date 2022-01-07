#include <stdio.h>

/*-------------------------------------------------------------------
    CalcSumSquare
    ====
    実数xとyのそれぞれ2乗の和をとる
---------------------------------------------------------------------*/
double CalcSumSquare(double x, double y)
{
    return (x*x) + (y*y);
}

int main(void)
{
    double x=0.0, y=0.0;

    printf("x -> ");
    scanf("%lf", &x);
    
    printf("y -> ");
    scanf("%lf", &y);

    printf("x^2 + y^2 = %f\n", CalcSumSquare(x, y));

    return 0;
}