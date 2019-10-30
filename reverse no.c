#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,d,rev=0;
    printf("enter the number\n");
    scanf("%d", &n);
    while(n>0)
    {
        d=n%10;
        rev = rev*10 +d;
        n/=10;
    }
    printf("reverse of the number is %d",rev);
    return 0;
}
