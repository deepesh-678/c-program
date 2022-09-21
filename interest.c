#include<stdio.h>
#include<conio.h>

int main()
{
    float p, r, t, si;

    printf("enter the principal amount = ");
    scanf("%f", &p);
    printf("enter the rate of interest = ");
    scanf("%f", &r);
    printf("enter the time = ");
    scanf("%f", &t);

    si = (p*r*t)/100;

    printf("The simple Interest is %f", si);
    return 0;
}