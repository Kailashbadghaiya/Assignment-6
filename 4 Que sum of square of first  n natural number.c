#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,sum=0 ;

    printf("Enter a natural number :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    sum=sum+i*i ;
    {
        printf("sum is %d\n",sum);
    }
    return 0;

}
