//WAP to reverse print the array

#include<stdio.h>
#include<conio.h>
int main()
{   
     int n,temp;
     printf("Enter the number of elements of the array :\n");
     scanf("%d",&n);
     int A[n];
     printf("Enter the elements of the array :\n");
     for(int i=0;i<n;i++);
     {
         scanf("%d",&A[i]);
     }
    
     printf("Elements of the array before reversing :\n");
     for(int i=0;i<n;i++);
     {
         printf("%d\t",&A[i]);
     }
     
     for(int i=0,j=n;i<n && j<=i;i++,j--)
     {
         temp=A[i];
         A[i]=A[j];
         A[j]=temp;
     }

     printf("Reversed array is:\n");

     for(int i=0;i<n;i++)
     {
         printf("%d\t",A[i]);
     }
      
     return 0;

}