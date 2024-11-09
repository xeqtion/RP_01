#include <stdio.h>
#include <math.h>

double calculatePi(double precision)
{
    double Pi = 0, value;
    int i = 0;
    do
    {
        value = 4.0 * pow(-1, i) / (2 * i + 1);
        Pi += value;
        i++;
    } while (fabs(value) >= precision);
    return Pi;
}

int main()
{
    double precision;
    printf("正在为您计算 π 值,请输入精度(大于0且小于等于1):");
    scanf("%lf",&precision);
    if (precision<=0||precision>1)
    {
        printf("请输入正确的精度!\n");
    }
    else
    {
        double Pi=calculatePi(precision);
        printf("计算得出 π 的值为: %.10lf\n",Pi);
    }
    return 0;
}