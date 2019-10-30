#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d,num,n,sum=0;
    printf("enter the no!\n");
    scanf("%d",&n);
    num=n;
    while(n>0)
    {
        d=n%10;
        sum+=(d*d*d);
        n/=10;
    }
    if(sum==num)
        printf("%d is an armstrong no",num);
    else
        printf("%d is not an armstrong no",num);
    return 0;
}
