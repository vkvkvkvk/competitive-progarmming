#include <stdio.h>
#include <math.h>
void factorial(int n)
{
    int a[200];
    int i,j,x,m;
    m=0;
    a[0]=1;
    for(i=2;i<=n;i++)
    {
    int temp=0;
    for(j=0;j<=m;j++)
    {
        x=a[j]*i+temp;
        a[j]=x%10;
        temp=x/10;
    }
    while(temp!=0)
    {
        m++;
        a[m]=temp%10;
        temp=temp/10;
    }
}
for(i=m;i>=0;i--)
{
    printf("%d",a[i]);
}
printf("\n");
return;
}
int main(void) {
	// your code goes here
	int t,n,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d",&n);
	   factorial(n);
	}
	return 0;
}

