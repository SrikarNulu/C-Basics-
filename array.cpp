#include <stdio.h>
int main()
{
    int a[5],i;
    printf("enter the elements");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(i=0;i<5;i++)
    printf("\nthe arrry is %d: %d",i,a[i]);
   for(i=4;i>=0;i--)    
   printf("\nthe array is %d: %d",i,a[i]);
    
}
