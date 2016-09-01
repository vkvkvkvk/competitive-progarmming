#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n1,n2,i,j,k;
	int a,b;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{  
	    int max1=-1;
     	int max2=-1;
	    scanf("%d",&n1);
	    scanf("%d",&n2);
	    for(j=0;j<n1;j++)
	    {
	        scanf("%d",&a);
	        if(a>max1)
	        max1=a;
	    }
	    for(k=0;k<n2;k++)
	    {
	        scanf("%d",&b);
	        if(b>max2)
	        max2=b;
	    }
	    if(max2>max1)
	    printf("MechaGodzilla\n");
	    else
	    printf("Godzilla\n");
	}
	return 0;
}

