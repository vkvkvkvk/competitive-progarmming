#include <stdio.h>
void moves(int a[], int n)
{
    int avg,i;
    int m=0;
    long int sum=0;
    for(i=0;i<n;i++)
    {
      sum=sum+a[i];  
    }
    avg=sum/n;
    if(sum%n!=0)
    {
        printf("%d\n",-1);
        return;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<avg)
        m=m+(avg-a[i]);
    }
    printf("%d\n",m);
    return;
}
int main(void) {
	int n,i;
	int a[10001];
	while(1)
	{
	    scanf("%d",&n);
	    if(n==-1)
	    break;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	moves(a,n);
	}
	return 0;
}

