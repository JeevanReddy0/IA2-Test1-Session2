#include<stdio.h>
typedef struct _triangle
{
float base,altitude,area;
} Triangle;
int input_n()
{
  int n;
  printf("enter the number of triangles:\n");
  scanf("%d",&n);
  return n;
}
Triangle input_triangle()
{
  Triangle a;
  printf("enter the base and altitude of triangle\n");
  scanf("%f%f",&a.base,&a.altitude);
  return
}
