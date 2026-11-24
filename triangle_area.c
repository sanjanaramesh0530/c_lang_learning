#include <stdio.h>
#include <math.h>
float distance(int x1,int y1,int x2,int y2)
{
float side; 
side=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
return side;
}
float area(float a,float b,float c,float s)
{
  float result;
  result=sqrt(s*(s-a)*(s-b)*(s-c));
  return result;
}
int main()
{ 
  float area_tri;
  int a;
  int b;
  int c;
  int s;
  int r=0;
  int x1,x2,x3,y1,y2,y3;
  printf("enter the coordinates 1 ");
    scanf("%d %d", &x1, &y1);
  printf("enter the coordinates 2 ");
    scanf("%d %d", &x2, &y2);
  printf("enter the coordinates 3 ");
    scanf("%d %d", &x3, &y3);
    a= distance( x1,y1,x2,y2);
    b= distance( x2,y2,x3,y3);
    c= distance( x3,y3,x1,y1);
  s=(a+b+c)/2;
  if(s-a<=0||s-b<=0||s-c<=0)
  {
    printf("triangle can't be formed\n");
    
  }
  else
  {
    printf("triangle can be formed\n");
    r++;
  }
  if(r)
  { float area_tri= area(a,b,c,s);
  printf("%f",area_tri);
  }
return 0;  
}
