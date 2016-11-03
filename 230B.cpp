#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <iostream>

using namespace std;

int main ()
{
    long long int n,i,m,j;
    int flag;
    scanf("%I64d",&n);
    long long int a[n];
    for (i=0; i<n; i++)
        scanf("%I64d",&a[i]);
    for (i=0; i<n; i++)
    {
        flag =0;
        if (a[i]<=3)
        {
            printf("NO\n");
            continue;
        }
        else
        {
            m = (int)sqrt(a[i]);
            if (a[i]== m*m)
            {
                if (m==2)
                {
                    printf("YES\n");
                    continue;
                }
                else if (m%2==0)
                {
                    printf("NO\n");
                    continue;
                }
                else
                {
                    for (j=3; j<=(int)sqrt(m); j=j+2)
                    {
                        if (m%j ==0)
                        {
                            printf("NO\n");
                            flag++;
                            break;
                        }
                    }
                    if (flag ==0)
                        printf("YES\n");

                }
            }
            else if (a[i]!=m*m)
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}
