#include <stdio.h>
#include <math.h>

int main(void)

{
  int x,y,z;

  double S,L;

  scanf("%d",&x);
  scanf("%d",&y);
  scanf("%d",&z);

  S=x*y*sin(z*M_PI/180)/2;

  L=sqrt(pow(x,2)+pow(y,2)-2*x*y*cos(z*M_PI/180))+x+y;

  printf("%lf\n",S);
  printf("%lf\n",L);
  printf("%lf\n",2*S/x);

  return 0;
}
