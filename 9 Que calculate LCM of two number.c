#include<stdio.h>
#include<conio.h>
int main()
{
    int i,x,y ;

    printf("Enter number 1 :");
    scanf("%d",&x);

    printf("Enter number 2 :");
    scanf("%d",&y);

    for(i=1;i<=x*y;i++)
        if((i%x==0) && (i%y==0))
        break ;
    {
        printf("LCM  number of %d is %d and %d",x,y,i);
    }
    return 0;
}
