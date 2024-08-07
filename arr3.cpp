#include <stdio.h>
int main()
{
	int i;
	int a[10];
	int even=0,odd=0;{
	printf("enter the array elements");}
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		even++;
		else
		odd++;
		
	}
	printf("\n the even elements are=%d",even);
		printf("\n the odd elements are=%d",odd);
	
}
