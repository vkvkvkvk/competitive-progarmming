#include <stdio.h>
#include <math.h>
int rec(int n)
{
    int i;
    int sum=1;
    for(i=2;i<=(int)sqrt(n);i++)
    {
       if(n%i==0)
       sum++;
    }
    return sum;
}
int main(void) {
	// your code goes here
	int n,i;
	int total=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    total=total+rec(i);
	}
	printf("%d\n",total);
	return 0;
}

