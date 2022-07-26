#include<stdio.h>
#include<conio.h>

float simpleintrest(float, float, int);
int main()
{
    int t;
    float p, r, SI;
    printf("Enter the principle amount, rate of interest and time in year.\n");
    scanf("%f %f %d",&p, &r, &t);
    SI=simpleintrest(p, r, t);
    printf("The simple interest is %f.",SI);
    getch();
    return 0;
}

float simpleintrest(float a, float b, int x)
{
    float s;
    s= a*b*x/100;
    return s;
}
