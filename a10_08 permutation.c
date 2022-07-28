/*function to calculate the number of permutation*/

#include<stdio.h>
#include<conio.h>

int permutation(int, int);
int main()
{
    int n, r, perm;
    printf("Enter the value for number of object and number of selected object from the set.\n");
    scanf("%d %d",&n,&r);
    perm=permutation(n,r);
    printf("Number of pemutation are %d.",perm);
    getch();
    return 0;
}

int factorial(int);
int permutation(int x, int y)
{
    int c;
    c=factorial(x)/factorial(x-y);
    return c;
}

int factorial(int x)
{
    int i, s=1;
    for(i=1; i<=x; i++)
        s*=i;
    return s;
}
