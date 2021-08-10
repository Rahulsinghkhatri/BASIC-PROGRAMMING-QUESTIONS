//WAP to print factorial of a number without using recursion

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,fact=1;
    printf("Enter the number\n");
    scanf("%d",&n);
    if(n==0)
       printf("Factorial of the given number is :%d",n);
    else
    {
       for(int i=1;i<=n;i++)
       {
          fact=fact*i;
       }
       printf("The factorial of the given number is :%d ",fact);
    }
    return 0;
}
