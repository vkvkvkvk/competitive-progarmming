#include <stdio.h>
void diversity(int g, int b)
{
    int ans;
    if(b==0 && g==0)
    {
        printf("0\n");
        return;
    }
    if(b==g)
    {
        printf("1\n");
        return;
    }
    if(b>g)
    {
        ans=b/(g+1);
        if(b%(g+1)!=0)
        ans++;
        printf("%d\n",ans);
        return;
    }
    else
    {
        ans=g/(b+1);
        if(g%(b+1)!=0)
        ans++;
        printf("%d\n",ans);
        return;
    }
}
int main(void) {
	// your code goes here
	int b,g;
	while(1)
	{
	  scanf("%d",&g);
	  scanf("%d",&b);
	  if(g==-1 && b==-1)
	  break;
	  diversity(g,b);
	}
	return 0;
}

