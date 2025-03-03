#include<stdio.h>
#include<string.h>
int main()
{
    int ch,n,a[10],i,j,temp;
    char arr[10][11];
    char tempc[10];
    while(1)
    {
    printf("\n1.sorting of integer\n2.sorting of string\n3.exit\n");
    printf("enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
   printf("enter the no of array elements ");
   scanf("%d",&n);
   printf("enter the array elements");

   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   for(i=0;i<n-1;i++)
   {
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        }
    }
}
printf("the array in asscending order is\n");
for(i=0;i<n;i++)
{

 printf("%d\t",a[i]);
}
break;
case 2:
    printf("enter the no. of string");
    scanf("%d",&n);
    printf("enter the strings");
    for(i=0;i<n;i++)
    {
      scanf(" %s",arr[i]);

    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(arr[i],arr[j])>0)
            {
                
                strcpy(tempc,arr[i]);
                strcpy(arr[i],arr[j]);
                strcpy(arr[j],tempc);
            }
        }
    }
    printf("the strings in ascending order:");
    for(i=0;i<n;i++)
    {
        printf("%s \t",arr[i]);
    }
    break;
    case 3:
    printf("exit");
    return 0;
    default :
    printf("wrong choice\n");
    break;
    }
}
 return 0;
}