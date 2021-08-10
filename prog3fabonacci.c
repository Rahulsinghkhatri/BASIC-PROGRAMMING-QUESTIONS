//WAP to print fabonacci series

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,a=0,b=1,temp;
    printf("Enter no. of terms offabonacci series to be printed\n ");
    scanf("%d",&n);
    printf("Fabonacci series is :");
    printf("%d\t%d",a,b);
    for(int i=1;i<=n;i++)
    {
        printf("\t%d",a+b);
        temp=a; //error
        a=b;    //error
        b=a+b;  //error
    }
    return 0;
}