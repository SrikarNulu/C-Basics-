#include <stdio.h>
#include <conio.h>
int main()
{
  int age , salary;
  printf(" enter age & salary\n");
  scanf("%d %d",&age,&salary);
  if (age>50)
  {
  	if (salary<60000)
  	{ salary=salary+10000;
	   printf("%d\n",salary); 
  	 }
  	 else 
  	 {salary=salary+5000;
  	 	printf("%d\n",salary); 
	   }
  }
  else 
  {
  salary=salary+2000;
  printf("%d\n",salary); 
  }
     printf("i am srikar");}   
