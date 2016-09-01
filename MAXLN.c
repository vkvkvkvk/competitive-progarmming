#include <stdio.h>
int main(void) {
	// your code goes here
	int t,i;
	double n;
	double s;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%lf",&n);
	    s=(n*n*4)+0.25;
	    printf("Case %d: %.2f\n",i+1,s);
	}
	return 0;
}

