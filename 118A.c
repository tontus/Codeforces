#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
int main()
{
    char str1[MAX];
    int i=0,len,j=0;
    gets(str1);
    len = strlen(str1);
    char str2[len], str3[MAX];
    for (i =0; i<len; i++)
    {
        str2[i]= tolower (str1[i]);
    };
    for (i = 0; i<len; i++)
    {
        switch (str2[i])
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'y':
                continue;
            default:
                str3[j]=str2[i];
                j++;
        };

    };
    str3[j]='\0';
    int len2 = strlen(str3), k =1;
    char str4[len2];
    for (i = 0; i< len2; i++)
    {
        str4[k]= str3[i];
        str4[k-1]= '.';
        k= k+2;
    };
    str4[k-1]='\0';
    puts(str4);
    return 0;
}
