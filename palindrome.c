#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,sum=0;
    printf("enter the no!\n");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        int d = n%10;
        sum=(sum*10)+d;
        n=n/10;
    }
    if(sum==m)
        printf("%d is a palindrome number  \n",m);
    else
        printf("%d is not a palindrome number  \n",m);
    return 0;
}
