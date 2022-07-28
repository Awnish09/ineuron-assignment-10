/*function to check whether a given number contains a given digit or not.*/

#include<stdio.h>
#include<conio.h>

int dgtchk(int, int);
int main()
{
    int num, dgt, a;
    printf("Enter a number and a digit.\n");
    scanf("%d %d",&num, &dgt);
    a=dgtchk(num, dgt);
    if(a==1)
        printf("The number contains the digit.");
    else
        printf("The number does not contain the digit.");
    getch();
    return 0;
}

//int main()
int dgtchk(int x, int y)
{
    int i, k;
    k=x;
    for(i=0; x; i++)
    {
        k=x%10;
        if(k==y)
            break;
        x/=10;
    }
    if(k==y)
        return 1;
    else
        return 0;
}
