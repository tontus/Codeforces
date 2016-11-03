#include <stdio.h>
#include <string.h>
#define MAXSIZE 100
int main()
{
    int n,i;
    char s[MAXSIZE];
    scanf("%d\n",&n);

        for (i =0; i<n; i++){
                gets(s);

                if (strlen(s) >10){
                        printf("%c%d%c\n",s[0],strlen(s)-2,s[strlen(s)-1]);
                }else{
                    puts(s);
                };
        };

    return 0;
}
