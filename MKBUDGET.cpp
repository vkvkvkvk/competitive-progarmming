#include <bits/stdc++.h>
using namespace std;
int arr[25];
int s;
int h;
int f;
int n;
int dp[25][305];
int solve(int i, int w)
{
    if(i==n+1)
    return 0;
    if(dp[i][w]!=0)
    return dp[i][w];
    if(w==arr[i])
    return dp[i][w]=solve(i+1, w) +w*s;
    if(w<arr[i])
    return dp[i][w]=solve(i+1,arr[i])+arr[i]*s+(arr[i]-w)*h;
    if(w>arr[i])
    {
        int min=99999999;
        int j;
        int x;
        for(j=arr[i];j<=w;j++)
        {
            x=solve(i+1,j)+j*s+(w-j)*f;
            if(x<min)
            min=x;
        }
        return dp[i][w]=min;
    }
}
int main()
{
    int i,j,k;
    j=0;
    while(true)
    {
        j++;
        cin>>n;
        if(n==0)
        break;
        cin>>h;
        cin>>s;
        cin>>f;
        for(i=1;i<=n;i++)
        cin>>arr[i];
        for(i=0;i<25;i++)
        for(k=0;k<=301;k++)
        dp[i][k]=0;
        cout<<"Case "<<j<<", "<<"cost = $"<<solve(1,0)<<endl;
    }
}
