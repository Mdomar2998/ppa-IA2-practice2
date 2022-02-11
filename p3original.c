#include<stdio.h>
int input_number()
{
  int a;
  printf("enter the value");
  scanf("%d",&a);
}
int is_composite(int n)
{ 
    int i;
  for(int i=2;i<=2;i++);
  {
    if(n % i==0)
      return 1;
  }
  return 0;
}
void output(int n,int composite)
{
  if(is_composite==0)
  printf("it is not composite");
  else
  printf("it is composite");
}
int main()
{
  int a,b;
  a=input_number();
  b=is_composite(a);
  output(a,b);
  return 0;
  
}