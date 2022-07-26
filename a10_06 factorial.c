/*function to calculate the factorial of a number*/
#include<stdio.h>
#include<conio.h>

int factorial(int);
int main()
{
    int a;
    printf("Enter a number to calculate its factorial.\n");
    scanf("%d",&a);
    a=factorial(a);
    printf("The factorial is %d",a);
    getch();
    return 0;
}

int factorial(int x)
{
    int i, s=1;
    for(i=1; i<=x; i++)
        s*=i;
    return s;
}
