#include <stdio.h>
#define N 50
int main()
{
    int a[N][N],b[N][N],c[N][N],i,j,k,sum,m,n,p,q;
    printf("\nenter the rows and columns of first matrix values\n");
    scanf("%d %d",&m,&n);
    printf("\nenter the first matrix\n");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    printf("\nenter the rows and columns of second matrix values\n");
    scanf("%d %d",&p,&q);
    printf("\nenter the second matrix\n");
    for(i=0;i<p;i++)
    {
      for(j=0;j<q;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    printf("\nfirst matrix is\n");

    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {

        printf("%d\t",a[i][j]);

      }
      printf("\n");
    }
    
    printf("\nsecond matrix is\n");
    for(i=0;i<p;i++)
    {
      for(j=0;j<q;j++)
      {
        printf("%d\t",a[i][j]);
      }
      printf("\n");
    }
    if (n!=p)
    {
      printf("cannot multiply");
    }
     else 
    {
        for(i=0;i<m;i++)
      {
        for(j=0;j<q;j++)
      {
         sum=0;
         for(k=0;k<m;k++)
        {
          sum=sum+a[i][k]*b[k][j];
        }
         c[i][j]=sum;
      }
      
      }
      printf("multiplication is\n");
      for(i=0;i<m;i++)
      {
        for(j=0;j<q;j++)
        {
          printf("%d",c[i][j]);
        }
        printf("\n");
      }
   }
   
}
