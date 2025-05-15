#include<stdio.h>
int main()
{
    int n,i,a[10],key,low=0,high,mid,flag=0;
    printf("enter number of elements ");
    scanf("%d",&n);
    high=n-1;
    printf("enter elements in ascending order");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter key");
    scanf("%d",&key);
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
        flag=1;
        break;
    }
    else if(a[mid]>key)
    {
        high=mid-1;
    }
    else{
        low=mid+1;
    }
}

if(flag==1)
{
    printf("element present at %d position",mid);
}
else{
    printf("key not found");
}
return 0;
}