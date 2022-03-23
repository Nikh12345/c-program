#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,D,x1,x2,real,img;
printf("enter coefficients:");
scanf("%f%f%f",&a,&b,&c);
if(a==0)
{
printf("it's a linear eq can't find roots\n");
return -1;
}
D=b*b-(4*a*c);
if(D==0)
{
x1=x2=-b/2.0*a;
printf("roots are real &equal\n");
printf("x1=x2=%.2f\n",x1);
}
else if(D>0)
{
x1=(-b+sqrt(D))/(2.0*a);
x2=(-b-sqrt(D))/(2.0*a);
printf("roots are real & unequal\n");
printf("x1=%.2f\n x2=%.2f\n",x1,x2);
}
else
{
real=-b/(2.0*a);
img=sqrt(-D)/(2.0*a);
printf("x1=%.2f+i%.2f\n",real,img);
printf("x2=%.2f-i%.2f\n",real,img);
}
return 0;
}
