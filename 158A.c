#include <stdio.h>
#include <string.h>
#define M 50

int main()
{
    int a[M], n, k, i, j,l;
    scanf("%d %d",&n, &k);
    for (i=0; i<n; i++)
        scanf("%d ",&a[i]);
    l=k;
    for (j = 0; j<n; j++)
    {
        if (a[l-1] == a[l] && a[l] != 0){
            l++;
        }else if(a[l-1]==0){
            l--;
        }else if(l==0) {
            break;
        }else{
            break;
        };
    };
    printf("%d",l);
    return 0;

}
