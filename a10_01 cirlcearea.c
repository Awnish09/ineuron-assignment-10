#include<stdio.h>
#include<conio.h>

float circlearea(int);
int main()
{
    int r;
    float a;
    printf("Enter the radius of the circle.\n");
    scanf("%d",&r);
    a=circlearea(r);
    printf("The area of a circle is %f.",a);
    getch();
    return 0;
}

float circlearea(int x)
{
    float p =3.14, y;
    y= x*x*p;
    return y;
}
