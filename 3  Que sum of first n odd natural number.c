#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,sum=0 ;

    printf("Enter a natural number :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        sum=sum+2*i-1 ;
    i++ ;
    {
        printf("sum is %d",sum);
    }
    return 0;
}
