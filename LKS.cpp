#include <iostream>
#include <stdio.h>
using namespace std;
int arr[510][3];
int s[2][2000010];
int main()
{
    int n,i,j,k;
    scanf("%d",&k);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    for(j=1;j<=2;j++)
    scanf("%d",&arr[i][j]);
    for(i=1;i<=n;i++)
    s[i][0]=0;
    for(i=0;i<=k;i++)
    s[0][i]=0;
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=k;j++)
    {
        if(i%2!=0)
        {
        s[1][j]=s[0][j];
        if(j-arr[i][2]>=0 && s[0][j-arr[i][2]]+arr[i][1]>s[1][j])
        s[1][j]=s[0][j-arr[i][2]]+arr[i][1];
        }
        else
        {
            s[0][j]=s[1][j];
            if(j-arr[i][2]>=0 && s[1][j-arr[i][2]]+arr[i][1]>s[0][j])
            s[0][j]=s[1][j-arr[i][2]]+arr[i][1];
        }
    }
    }
    if(n%2!=0)
    cout<<s[1][k]<<endl;
    else
    cout<<s[0][k]<<endl;
}
