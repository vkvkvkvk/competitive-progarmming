#include <stdio.h>
#include <stdlib.h>
int graph[110][110];
void floyed_warshel(int n,int timer, int end)
{
    int i,j,k;
    int sum;
    int count=1;
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    {
        if(graph[i][j]==0)
        graph[i][j]=10000;
    }
    for(k=1;k<=n;k++)
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    {
        sum=graph[i][k]+graph[k][j];
        if(sum<graph[i][j])
            graph[i][j]=sum;
    }
    for(i=1;i<=n;i++)
    {
        if(graph[i][end]<=timer)
        count++;
        //printf("%d  ",graph[i][j]);
    }
    printf("%d\n",count);
}
int main()
{
    int n,e,t,m;
    scanf("%d",&n);
    scanf("%d",&e);
    scanf("%d",&t);
    scanf("%d",&m);
    int i,j;
    int x,y,w;
    while(m--)
    {
       scanf("%d",&x);
       scanf("%d",&y);
       scanf("%d",&w);
       graph[x][y]=w;
    }
    floyed_warshel(n,t,e);
    return 0;
}
