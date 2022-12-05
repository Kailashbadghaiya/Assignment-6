#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n ;

    //prime or not prime

    printf("Enter number :");
    scanf("%d",&n);

    for(i=2;i<=n-1;i++)
        if(n%i==0)
        break ;
    if(i==n)
        printf("prime number is %d",n);
    else
        printf("not prime number is %d",n);
    return 0;
}
