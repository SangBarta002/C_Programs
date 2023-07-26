#include<stdio.h>
#include<limits.h>

int matrixChainorder(int p[],int i,int j)
{
    int k;
    int min =   INT_MAX;
    int count;
    if (i==j)
    return 0;
     
   for (k =i; k<j ; k++)
   {
         count =matrixChainorder(p, i, k)+
                matrixChainorder(p, k+1, j)+
                p[i-1]*p[k]*p[j];
         if (count< min)
             min= count;         
   } 
   return min;

}
int main()
{
    int arr[] ={1,2,3,4,5};  /*{5,4,6,2,7};*/
    int n= sizeof(arr)/sizeof(arr[0]);
    printf("minimum number of multiplication is %d", matrixChainorder(arr, 1, n-1));
    return 0;
}