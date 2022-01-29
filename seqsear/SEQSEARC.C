#include<stdio.h>
#include<conio.h>
void main()
{
int arr[20],n,i,item;
printf("how many element you want to enter in the array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the element %d",i+1);
scanf("%d",&arr[i]);
}
printf("enter the element to be searched");
scanf("%d",&item);
for(i=0;i<n;i++)
{
if(item==arr[i])
{
printf("%d found at %d \n",item,i+1);
break;
}
}
if(i==n)
printf("not found");
getch();
}

