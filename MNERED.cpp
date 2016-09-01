#include <bits/stdc++.h>
using namespace std;
int arr[101][101];
int s[101][101];
int main()
{
    int n,m,i,j,x,y,p,ans;
    cin>>n;
    cin>>m;
    for(i=1;i<=m;i++)
    {
        cin>>x;
        cin>>y;
        arr[x][y]=1;
    }
    for(i=1;i<=n;i++)
    s[i][0]=0;
    for(i=0;i<=n;i++)
    s[0][i]=0;
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+arr[i][j];
    ans=0;
    int temp;
    for(p=1;p*p<=m;p++)
    {
     if(m%p==0)
     {
         x=p;
         y=m/p;
         for(i=1;i+x-1<=n;i++)
         {
             for(j=1;j+y-1<=n;j++)
             {
                 temp=s[i+x-1][j+y-1]-s[i-1][j+y-1]-s[i+x-1][j-1]+s[i-1][j-1];
                 if(temp>ans)
                 ans=temp;
             }
         }
         if(x!=y)
         {
             for(i=1;i+y-1<=n;i++)
             {
                 for(j=1;j+x-1<=n;j++)
                 {
                     temp=s[i+y-1][j+x-1]-s[i-1][j+x-1]-s[i+y-1][j-1]+s[i-1][j-1];
                     if(temp>ans)
                     ans=temp;
                 }
             }
         }
     }
    }
    cout<<m-ans<<endl;
}
