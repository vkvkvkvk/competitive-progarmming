#include <stdio.h>
long int table[110][110];
int cost[110][110];
int input[110];
void count(int n)
{
    int i,j,k,l,q;
    for(i=1;i<=n;i++)
    {
    table[i][i]=0;
    cost[i][i]=input[i];
    }
    for(l=2;l<=n;l++)
    {
       for(i=1;i<=n-l+1;i++)
       {  
           j=i+l-1;
           table[i][j]=1000000000;
           for(k=i;k<=j-1;k++)
           {
              q=table[i][k]+table[k+1][j]+cost[i][k]*cost[k+1][j];
              if(q<table[i][j])
              {
                  table[i][j]=q;
                  cost[i][j]=(cost[i][k]+cost[k+1][j])%100;
              }
           }
       }
    }
    printf("%d\n",table[1][n]);
    return;
}
int main()
{
    int n,i;
    while(scanf("%d",&n)>0)
    {
    for(i=1;i<=n;i++)
    scanf("%d",&input[i]);
    count(n);
}
    return 0;
}
