#include <stdio.h>

int main(void) {
	// your code goes here
	int a1,a2,a3;
	int d1,d2,r1,r2;
	while(1)
	{
	    scanf("%d",&a1);
	    scanf("%d",&a2);
	    scanf("%d",&a3);
	    if(a1==0 && a2==0 && a3==0)
	    break;
	    d1=a2-a1;
	    d2=a3-a2;
	    if(d1==d2){
	    printf("AP %d\n",a3+d1);
	    continue;
	    }
	    r1=a2/a1;
	    r2=a3/a2;
	    if(r1==r2)
	    printf("GP %d\n",a3*r1);
	}
	return 0;
}

