#include <bits/stdc++.h>
using namespace std;
unsigned int INF=3147483647;
int arr[10001][3];
int N;
unsigned int dp[10001][5010];
unsigned int min1(unsigned int a, unsigned int b)
{
    if(a<b)
    return a;
    return b;
}
unsigned int solve(int i, int n)
{
    if(i==N+1&& n==N/2)
    return 0;
    if(i==N+1)
    return INF;
    if(dp[i][n]!=0)
    return dp[i][n];
    unsigned int x=INF;
    unsigned int y=INF;
    if(n<N/2 && i!=N)
    x=solve(i+1,n+1)+arr[i][2];
    if(i-n<n+1 && i!=1)
    y=solve(i+1,n)+arr[i][1];
    return dp[i][n]=min1(x,y);
}
int main()
{
    int i,j;
    cin>>N;
    for(i=1;i<=N;i++)
    for(j=1;j<=2;j++)
    cin>>arr[i][j];
    cout<<solve(1,0)<<endl;
}
