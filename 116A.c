#include <stdio.h>

int main()
{
    int b,i,c,d;
    int cap=0,pas,r=0;
    scanf("%d",&b);
    for (i=0; i<b; i++)
    {
        scanf("%d %d",&c,&d);
        if (i==0)
        {
            cap= d;
        }else if(i==(b-1))
        {
            continue;
        }else
        {
            cap= cap-c;
            cap= cap+d;
        }
        pas=cap;

            if(pas>r)
                r=pas;
    }
    printf("%d",r);
    return 0;
}
