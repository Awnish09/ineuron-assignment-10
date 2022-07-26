/*function to print 1st n natural numbers*/
#include<stdio.h>
#include<conio.h>

void firstnnn(int);
int main()
{
    int a;
    printf("Enter a how many 1st natural number you want to print.\n");
    scanf("%d",&a);
    firstnnn(a);
    getch();
    return 0;
}

void firstnnn(int x)
{
    int i;
    for(i=1; i<=x; i++)
        printf("%d ",i);
}
