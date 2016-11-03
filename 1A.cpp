
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{


    long long int n,m,a, temp1, temp2;

   cin >> n >> m >> a;

    temp1 = n/a;
    temp2 = m/a;

    if(n%a!=0)
        temp1++;
    if(m%a!=0)
        temp2++;

    cout << temp1*temp2;


    return 0;
}
