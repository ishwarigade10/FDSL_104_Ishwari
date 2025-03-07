#include<stdio.h>
int main()
{ 
    int n,i,j;
    printf("enter no. of array elements you want") ;
    scanf("%d",&n);
    int a[n],temp,k;
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[j]>a[i])
            {
                temp=a[i];
            
              for(k=i;k>j;k--)
              {
             a[k]=a[k-1];
               }
               a[j]=temp;
               
           }
              
        }
        
        
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}