#include <stdio.h>

int main()
{
    int sub(int x, int n);
    int x, n;
    printf("enter values");
    scanf("%d%d",&x,&n);
    printf("sum = %d",sub(x,n));
    return 0;
}
int sub (int x, int n)
{
     return(x-n);
}