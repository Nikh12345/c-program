#include<stdio.h>
#include<math.h>
#define PI 3.142857
int main()
{
float x,degree,nume,deno,term,sum;
int i;
printf("enter degree:\n");
scanf("%f",&degree);
x=degree*(PI/180);
sum=0;
nume=x;
deno=1.0;
i=1;
do
{
term=nume/deno;
sum=sum+term;
i=i+2;
// compute next term 
nume=-nume*x*x;
deno=deno*i*(i-1);
}
while(fabs(term)>=0.00001);

printf("computed value of sin(%f)=%f\n",degree,sum);
printf("value from library function is sin(%f)=%f\n",degree,sin(x));
return 0;
}
