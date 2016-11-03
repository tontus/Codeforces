#include <stdio.h>
int main()
{
    int n , i ,j, l, m,o,p=0;
    scanf("%d",&n);
    for (i =0 ; i<n; i++)
    {
        scanf("%d %d %d", &l,&m,&o);
        if ((l+m+o)>1)
            p++;

    };
    printf("%d",p);
    return 0;
}
