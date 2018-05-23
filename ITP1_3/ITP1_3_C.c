#include<stdio.h>
int main()
{
  int a,b=1,c;
  while( 1 ){
    scanf( "%d%d\n",&a,&b );
    if( a==0 && b==0 ){break;}
    else if(a>b)printf( "%d %d\n",b,a );
    else printf( "%d %d\n",a,b );
    
  }
  return 0;
}