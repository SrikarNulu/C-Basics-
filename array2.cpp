#include<stdio.h>
int main()
{
	int i;
	int marks[5];
	
	float sum=0.0,avg;
	
     	for(i=0;i<5;i++)
	{
	   scanf("%d",&marks[i]);
	}
	    for(i=0;i<5;i++)
   {     
		sum=sum+marks[i];
   }
	avg=sum/5;
	printf("sum=%f",sum);
	printf("\navg=%f",avg);
}
