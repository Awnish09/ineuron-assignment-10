/*function to the number is odd or ever*/
#include<stdio.h>
#include<conio.h>

int oddeven(int);
int main()
{
    int a;
    printf("Enter a number.\n");
    scanf("%d",&a);
    a=oddeven(a);
    if(a==1)
        printf("The number is even.");
    else
        printf("The number is odd.");
    getch();
    return 0;
}

int oddeven(int x)
{
    //int s;
    if(x%2)
        return 0;
    else
        return 1;
    //return s;
}
