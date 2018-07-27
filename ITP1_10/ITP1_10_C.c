#include<stdio.h>
#include<math.h>


int main(void){

  int n, s, i;
  double sum1, sum2, ans;

  while(scanf("%d", &n), n)

    {

      sum1=0;
      sum2=0;

      for(i=0;i<n;i++)
	{

	  scanf("%d", &s);

	  sum1+=s;
	  sum2+=s*s;

	}

      sum1/=n;
      ans=sum2/n-sum1*sum1;

      printf("%f\n", sqrt(ans));

    }

  return 0;

}
