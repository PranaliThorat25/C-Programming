#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 int x[20],y[30],i,j,k,count,n;
 printf("Enter the frame length: ");
 scanf("%d",&n);
 printf("Enter the input frame (0's & 1's only): ");
 for(i=0;i<n;i++)
 scanf("%d",&x[i]);
 i=0; count=1; j=0;
while(i<n)
{
 if(x[i]==1)
{
 y[j]=x[i];
 for(k=i+1;x[k]==1 && k<n && count<5;k++)
{
 j++;
 y[j]=x[k];
 count++;
if(count==5)
{
 j++;
 y[j]=0;
}
 i=k;
}}
else
{
 y[j]=x[i];
}
 i++;
 j++;
}
 printf("After stuffing the frame is: ");
 for(i=0;i<j;i++)
 printf("%d",x[i]);
getch();
}
