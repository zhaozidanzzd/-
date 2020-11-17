#include<stdio.h>
int main()
{
  int a,b,d;
  char c;
  printf("input:");
  scanf("%i%c%i",&a,&c,&b);
  switch(c)
    {
  case'+':d=a+b;break;
  case'-':d=a-b;break;
  case'*':d=a*b;break;
  case'/':d=a/b;break;
  }
  printf("%d\n",d);
}
