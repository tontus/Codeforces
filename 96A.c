#include <stdio.h>
#include <string.h>
#define M 100
int main()

{
    char player[M];
    scanf("%s",player);
    int size = strlen (player),i,one=0,zero=0,flag=0;
    for (i=0; i<size; i++)
    {
        if (player[i]=='0')
            {
                zero++;
                one=0;
            }
        else
        {
            one++;
            zero=0;
            }
        if (one==7 || zero ==7)
        {
            flag =1;
            break;
        }

    }
    if (flag==0)
        printf("NO");
    else printf("YES");
    return 0;
}
