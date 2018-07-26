#include<stdio.h>
main(){
  int a,b,c,rem;
  scanf("%d %d %d",&a,&b,&c);
  if(a>b){
    rem=a;
    a=b;
    b=rem;
  }
  if(b>c){
    rem=b;
    b=c;
    c=rem;
  }
  if(a>b){
    rem=a;
    a=b;
    b=rem;
  }
  printf("%d %d %d\n",a,b,c);
  return 0;
}
