#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,j=0;
    char code[4];
    scanf("%d\n",&n);
    for(i=0; i<n; i++){

        scanf("%s",code);
        if (code[1]=='+')
            {j++;}
        else{ j--;}
    };
    printf("%d",j);
    return 0;
}
