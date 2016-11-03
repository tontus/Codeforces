#include <stdio.h>
#include <string.h>
#define M 100
int main()
{
    char s[100];
    int n, a[M],i,j=0,key;
    scanf("%s",s);
    n = strlen(s);
    for (i=0; i<n; i=i+2)
    {
        a[j]= s[i]-'0';
        j++;
    }
    n= j;
   for (i=1;i<n;i++)
    {
        key = a[i];
        j=i-1;
        while (a[j]>key && j>=0)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1]=key;
    }
    for (i=0; i<n;i++)
    {
        printf("%d",a[i]);
        if(i!= (n-1))
        {
            printf("+");
        }
    }
    return 0;
}
