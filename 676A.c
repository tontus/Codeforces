#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main ()
{
    int n, a[100],i;
    int max=0,maxp;
    int min=999999, minp;
    int p1, p2,dis;
    scanf("%d",&n);
    for (i = 1; i<=n; i++)
    {
        scanf("%d",&a[i-1]);
        if (max<a[i-1])
        {
            max = a[i-1];
            maxp =i;
        }

    }
    for (i =1; i<=n; i++)
    {
        if (min>a[i-1])
        {
            min = a[i-1];
            minp = i;
        }
    }
    if (minp<maxp)
    {
        p1 = minp-1;
        p2 = n-maxp;
    }else {
        p1 =maxp-1;
        p2=n-minp;
    }

    if (abs(minp-maxp)== n-1)
        dis = n-1;

    else if (p1<p2)
        dis = abs(n-p1-1);
    else if (p2<p1)
        dis = abs(n-p2-1);
    else if (p1==p2)
        dis = abs(n-p1-1);

    printf ("%d",dis);
    return 0;

}
