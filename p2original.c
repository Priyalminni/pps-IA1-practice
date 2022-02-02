#include<stdio.h>
int input()
{
  int s;
  printf("entre the value:\n");
  scanf("%d",&s);
  return s;
}
int cmp(int a,int b, int c)
{

if(a>b&&a>c)
  {  
  return a;
  }
  else if(b>c)
  {
    return b;
  }
  else
  {
    return c;
  }
}
 void output(int a,int b,int c,int large)
 {
   printf("among %d,%d,%d is %d",a,b,c,large);
 }
 int main()
{
  int n1,n2,n3,large;
  n1=input();
  n2=input();
  n3=input();
  large=cmp(n1,n2,n3);
  output(n1,n2,n3,large);
  return 0;
}

