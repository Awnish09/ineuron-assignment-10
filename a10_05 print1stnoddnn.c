/*function to print 1st n odd natural numbers*/
#include<stdio.h>
#include<conio.h>

void firstnoddnn(int);
int main()
{
    int a;
    printf("Enter a how many 1st natural odd number you want to print.\n");
    scanf("%d",&a);
    firstnoddnn(a);
    getch();
    return 0;
}

void firstnoddnn(int x)
{
    int i;
    for(i=1; i<=x; i++)
        printf("%d ",i*2-1);
}
