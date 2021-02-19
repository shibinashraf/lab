#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,n,j,temp;
printf("\n\n\t\tSELECTION SORT");
 printf("\n\t\t_____\n\n");
printf("\n\n\tEnter the limit:");
scanf("%d",&n);
printf("\n\n\tEnter the elements:");
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
printf("\n\n\tThe sorted array is:");
for(i=0;i<n;i++)
{
printf("\t%d",a[i]);
}
getch();
}