#include <stdio.h>
int main()
{
    int i,j,a[4][5],sum=0;
    printf("enter the array elements");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
       for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d\t",a[i][j]);
            sum=sum+a[i][j];
        }
        printf("\n");
    } 
    printf("sum=%d",sum);
}
