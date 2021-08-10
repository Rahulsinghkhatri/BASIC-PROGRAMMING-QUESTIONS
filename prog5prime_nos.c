//WAP to check prime numbers

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,m,flag=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    m=n/2;
    
    for(int i=2;i<=m;i++)
    {
        if(n%2==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Given number is prime\n");
    }
    else
        printf("Given number is not prime\n");
    return 0;
}
