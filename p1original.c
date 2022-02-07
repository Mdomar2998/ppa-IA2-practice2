#include<stdio.h>

void input (float *base,float *height )
{ 
  
  printf("enter the value of base of the triangle\n");
  scanf("%f",base);
printf("enter the value of height in the triangle\n");
  scanf("%f",height);
}
void find_area(float base,float height,float *area)
{ 

  *area=0.5*(base*height);
}
void output(float base,float height ,float area)
{
printf("area of triangle with base %f and height %f is %f",base,height,area);
}
  int main()
  {
  float b,h,a;
  input(&b,&h);
  find_area(b,h,&a);
  output(b,h,a);
  return 0;
}
  

