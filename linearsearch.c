#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,flag=0,count=0;
    char a[10][11],key[10];
    printf("enter n");
    scanf("%d",&n);
    printf("enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%s",&a[i]);
    }
    printf("enter the key");
    scanf("%s",key);
    for(i=0;i<n;i++)
    {
        if(strcmp(a[i],key)==0)
        {
         flag=1; 
         printf("the element%s present at %d\n",a[i],i);
         count++;
        }
        
    }
    if(flag==1)
    {
        printf("yes found\n");
        count+=1;
        printf("the no. of times the element found:%d\n",count-1);
    }
    else
    {
        printf("not found");
        printf("the number of times the element found is 0");
    }
    

    return 0;
}