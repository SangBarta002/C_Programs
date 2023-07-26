#include<stdio.h>
#include<conio.h>
#include<limits.h>
long m[10][10];
long matrixchainorder(long p[],long n){
long i,j,k,L,q;
for (i=1;i<=n-1;i++)
{
    m[i][i]=0;
}
for (L=2;L<=n-1;L++)
  {
      for (i=1;i<=n-L;i++)
      {
          j=i+L-1;
           m[i][j]=INT_MAX;
          for (k=i;k<j;k++)
          {
              q = m[i][k]+m[k+1][j]+(p[i-1]*p[k]*p[j]);
              if (q<m [i][j])
               {
                   m[i][j]=q;
               }
          }
      }

}
return m[1][n-1];
}
int main(){
    int i,j;
    long arr[]={1,2,3,4,5};//{5,4,6,2,7};
    long size =sizeof(arr)/sizeof(arr[0]);
    printf("total multiplication no:%d",matrixchainorder(arr,size));
    return 0;
}










