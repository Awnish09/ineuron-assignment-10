/*function to print all prime factors of a given number.*/

#include<stdio.h>
#include<conio.h>

void allprnum(int);
int main()
{
    int num;
    printf("Enter a number.\n");
    scanf("%d",&num);
    allprnum(num);
    getch();
    return 0;
}


void allprnum(int x)
{
    int i=2, a;
    do
    {
        if(x%i==0)
        {
            printf("%d ",i);
            x/=i;
        }
        else
        {
            while(i++)
            {
                for(a=2; a<=i; a++)
                {
                    if(i%a==0)
                        break;
                }
                if(i==a)
                    break;
                else
                    continue;
            }
        }

    }while(x>1);
}
