#include <stdio.h>
int main()
{
	int i,a,sum=0;
	for(i=1;1<=10;i++)
	{
		printf("enter a number");
		scanf("%d",&a);
		if (a<0)
		break;
	    sum=sum+a;
	}
	printf("sum=%d",sum);
}
