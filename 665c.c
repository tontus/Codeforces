#include <stdio.h>
#include <string.h>
int main()
{
    char s[50], temp;
    int n,i,j;
    scanf("%s",&s);
    n = strlen(s);
    s[n]='\0';
    for(i=0; i<n; i++)
    {

            if(s[i]==s[i+1])
            {
                temp= s[i+1];
                s[i+1]=s[i+2];
                s[i+2]=temp;
            }

    };
    printf("%s", s);
}
