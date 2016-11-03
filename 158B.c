#include <stdio.h>
#define M 10000
int main ()
{
    int a[M],n,j,i,load=0, taxi=1,key,temp;
    scanf("%d",&n);
    for (i=0; i<n;i++)
        scanf("%d",&a[i]);
    for (i=1; i<n;i++)
    {
        key = a[i];
        j=i-1;
        while (a[j]>key && j>=0)
        {
            a[j+1]= a[j];
            j--;

        }
        a[j+1]=key;

    }
    for (i=0; i<n;i++)
        printf("%d ",a[i]);
        printf("\n");
    for (i=0;i<n; i++)
    {
        printf("%d ",taxi);
        if (load+a[i]== 4)
        {
            load =0;
            taxi++;
            continue;
        }
        if (load+a[i]>4)
        {
            load = a[i];
            taxi++;
            continue;
        }
        if (load+a[i]<4)
        {
            load= load+a[i];
            continue;
        }

    }
    printf("\n%d",taxi);

    return 0;
}
