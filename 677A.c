#include <stdio.h>

int main ()
{
    int n,h,i,c[1000],d=0,f=0;
    scanf("%d",&n);
    scanf("%d",&h);
    for(i=0; i<n; i++)
    {
        scanf("%d",&c[i]);
        if (c[i]<=h ){
            f=1;
        }
        else
        {
            f=2;
        }
        d=d+f;

    };
    printf("%d",d);
    return 0;

}
