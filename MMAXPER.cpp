#include <bits/stdc++.h>
using namespace std;
int arr[1010][3];
int n;
int dp[1010][3];
int max1(int a, int b)
{
    if(a>b)
    return a;
    return b;
}
int solve(int i, int r)
{
    if(i==n+1)
    return 0;
    if(i==1)
    {
        return max(solve(i+1,2)+arr[i][1],solve(i+1,1)+arr[i][2]);
    }
    if(dp[i][r]!=0)
    return dp[i][r];
    int x=solve(i+1,2)+arr[i][1]+abs(arr[i][2]-arr[i-1][r]);
    int y=solve(i+1,1)+arr[i][2]+abs(arr[i][1]-arr[i-1][r]);
    return dp[i][r]=max(x,y);
}
int main()
{
    int i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    for(j=1;j<=2;j++)
    cin>>arr[i][j];
    cout<<solve(1,1)<<endl;
    return 0;
}
