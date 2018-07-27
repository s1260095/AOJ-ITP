#include<stdio.h>
int main()

{
  int m,f,r,score;
  for(;;)

    {

      scanf("%d%d%d",&m,&f,&r);
      score=m+f;

      if(m+f+r==-3)return 0;
      if(m==-1||f==-1) printf("F\n");

      else if(score>=80) printf("A\n");
      else if(score>=65) printf("B\n");
      else if(score>=50||r>=50) printf("C\n");
      else if(score>=30) printf("D\n");
      else puts("F");

    }

  return 0;

}
