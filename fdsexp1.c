#include<stdio.h>
#include<string.h>
struct book
{
    char bname[10];
    int bno;

};
int main()
{
     
    struct book b[10];
    int n,ch,i,pos,old_bno;
    printf("enter the number of books information you want");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the book no %d details\n ",i+1);
        printf("enter the book name\nenter the book no\n\n");
        scanf("%s%d",b[i].bname,&b[i].bno);
    }
    while(1)
    {
    printf("1.Insertion\n2.Deletion\n3.Updation\n4.Display\n5.Exit\n");
    printf("\nenter your choice");
    scanf("%d",&ch);
    switch(ch)
    {

    case 1:
    printf("enter the position you want to insert from(1 to %d)",n);
    scanf("%d",&pos);
    if(pos<1||pos>n)
    {
        printf("invalid position");
        return 1;
    }
    for(i=n;i>=pos;i--)
    {
        b[i]=b[i-1];
    }
    printf("enter a new book data\n");
    printf("enter the name and book no.\n");
    scanf("%s%d",b[pos-1].bname,&b[pos-1].bno);
    printf("updated book list is\n\n");
    for(i=0;i<n+1;i++)
    {
        printf("the name of book%d is%s\nthe no. of book is %d\n",i+1,b[i].bname,b[i].bno);
       
    }
    n++;
  break;
case 2:
printf("enter the position that you want to delete from (1 to %d)",n);
scanf("%d",&pos);
if(pos<1||pos>n)
{
    printf("invalid position");
    return 1;
}
for(i=pos-1;i<n-1;i++)
   {
     b[i]=b[i+1];
    }

for(i=0;i<n-1;i++)
{
    printf("the name of book%d is%s\nthe no. of book is %d\n",i+1,b[i].bname,b[i].bno);  
}
n--;
break;
case 3:
printf("enter the book no you want to update\n");
scanf("%d",&old_bno);
int flag=0;
for(i=0;i<n;i++)
{
if(b[i].bno==old_bno)
{
    printf("enter the data that you want to update\n");
    printf("enter new book no.");
    scanf("%d",&b[i].bno);
    flag=1;
    break;
}
}
if(flag==0)
{
    printf("book no.not found\n");
}
else
{
    for(i=0;i<n;i++)
    {
        printf("the name of book%d is%s\nthe no. of book is %d\n",i+1,b[i].bname,b[i].bno); 
    } 
} 
break;
case 4:
printf("Display the data:\n");
for(i=0;i<n;i++)
{
    printf("the name of book%d is%s\nthe no. of book is %d\n",i+1,b[i].bname,b[i].bno);   
}
break;
case 5:printf("Exit");

return 0;
 default:printf("Wrong choice");
}
    }
    return 0;
}