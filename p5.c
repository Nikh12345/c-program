#include<stdio.h>
int main()
{
int n,a[20],i,j,temp,last,first,mid,key;
printf("enter value of n:");
scanf("%d",&n);
printf("enter %d no of elements\n",n);
for(i=0; i<n; i++)
{
scanf("%d",&a[i]);
}
for(i=0; i<n-1;i++)
{
for(j=0; j<n-1-i;j++)
{
if(a[j]>a[j+1])
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("sorted elements are:\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
first=0;
last=n-1;
printf("enter key element");
scanf("%d",&key);
while(first<=last)
{
mid=(first+last)/2;
if(key==a[mid])
{
printf("element %d found at %d",key,mid);
return(0);
}
else if(key<a[mid])
{
last=mid-1;
}
else
first=mid+1;
}
printf("element %d not found",key);
return(1);
}

