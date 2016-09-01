#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	float area;
	while(1)
	{
	    scanf("%d",&n);
	    if(n==0)
	    break;
	    area=(n*n)/(3.1415926*2);
	    printf("%.2f\n",area);
	}
	return 0;
}

