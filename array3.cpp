#include <stdio.h>


int main()
{
	
	int array1[5],array2[5],sumarray[5],i;
      {
		printf("\nenter the first array elements"); 
		}
	for(i=0;i<5;i++)
      {
		scanf("%d",&array1[i]);
		}
	printf("\nenter the second array elements");
	for(i=0;i<5;i++)
	{
       scanf("%d",&array2[i]);
	   }
	for(i=0;i<5;i++)
   {
		sumarray[i]=array1[i]+array2[i];
		printf(" \nindex %d=%d",i,sumarray[i]);
		}
	
	
}
