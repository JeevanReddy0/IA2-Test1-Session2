
#include <stdio.h>
int input()
{
  int a;
  printf("Enter the number\n");
  scanf("%d",&a);
  return a;
}

int find_gcd(int a, int b)
{
  int r;
  for(int i=1;i<=a && i<=b;i++)
    {
      if(a%i==0 && b%i==0)
        r=i;
    }
  return r;
}

void output(int a, int b, int gcd)
{
  printf("The gcd of %d and %d is %d\n",a,b,gcd);
}

int main()
{
  int a, b, gcd;
  a = input();
  b = input();
  gcd = find_gcd(a,b);
  output(a,b,gcd);
  return 0;
}