/*function to calculate the number of combinations*/

#include<stdio.h>
#include<conio.h>

int combination(int, int);
int main()
{
    int n, r, comb;
    printf("Enter the value for number of object and number of choosing object from the set.\n");
    scanf("%d %d",&n,&r);
    comb=combination(n,r);
    printf("Number of combinations are %d.",comb);
    getch();
    return 0;
}

int factorial(int);
int combination(int x, int y)
{
    int c;
    c=factorial(x)/(factorial(y)*factorial(x-y));
    printf("%d\n",c);
    return c;
}

int factorial(int x)
{
    int i, s=1;
    for(i=1; i<=x; i++)
        s*=i;
    return s;
}
