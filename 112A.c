#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define M 100
int main()
{
    char a[M],b[M];
    int i, count=0,size,c,d;
    scanf("%s",a);
    scanf ("%s",b);
    size = strlen(a);
    for (i=0; i<size; i++)
    {
        if (toupper(a[i])> toupper (b[i]))
            {

                count=1;
                break;
            }
        else if (toupper(a[i])< toupper (b[i]))
        {
            count=(-1);
            break;

        }

    }
    printf("%d",count);
    return 0;
}
