#include<stdio.h>
int main()
{
  int a,b,c,x,y;
  y=0;
  scanf( "%d%d%d",&a,&b,&c );
  for( x=a;x<=b;x++ ){
    if( c%x==0 ){ y=y+1; }
    else{ y=y; }
  }
  printf( "%d\n",y );
  return 0;
}