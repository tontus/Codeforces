#include <stdio.h>
int main()
{
    int w;
    while (1<=(scanf("%d",&w))<=100)
    {
        ((w % 2 == 0 && w != 2) ? printf("YES\n") : printf("NO\n"));
        /**if (w%2==0){
            if ((w/2)%2==0){
                printf("YES");
            }else{
                printf("NO");
            }
        }else{
            printf("NO");
        }**/

        break;
    };
    return 0;
}
