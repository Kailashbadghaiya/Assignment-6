#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,fact=1 ;

    printf("Enter a natural number :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        fact=fact*i ;
    {
        printf("\n factorial of %d is %d",n,fact);
    }
    return 0;
}
