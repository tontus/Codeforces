
#include <stdio.h>
int main()
{int arr[4],t,dif,i,j,number=0;
printf("Enter your number of test cases:");
scanf("%d",&t);

for(i=0;i<t;i++)
{printf("Input your a1,a2,a3 and limit:");

for(j=0;j<4;j++)
{scanf("%d",&arr[i]);
number=arr[0];//cause we have to assign the first element in number
}
    if((arr[0]-arr[1])==(arr[1]-arr[2]))
{dif=arr[1]-arr[0];

    for(j=0;j<(arr[3]-1);j++)
{number=dif+number;

}
printf("case %d: %d\n",i+1,number);
}


}
return 0;
}
