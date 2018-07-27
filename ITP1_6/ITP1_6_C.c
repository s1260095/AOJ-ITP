#include<stdio.h>

int main()

{

  int n;
  int i, j, k;
  int b, f, r, v;
  int box[4][3][10];

  for(i = 0; i < 4; i++)
    {
      for(j = 0; j < 3; j++)
	{
	  for(k = 0; k < 10; k++)
	    {
	      box[i][j][k] = 0;
	    }
	}
    }

  scanf("%d", &n);

  for(i = 0; i < n; i++)
    {

      scanf("%d %d %d %d", &b, &f, &r, &v);


      box[b - 1][f - 1][r - 1] += v;
    }

  for(i = 0; i < 4; i++)
    {
      for(j = 0; j < 3; j++)
	{
	  for(k = 0; k < 10; k++)
	    {
	      printf(" %d", box[i][j][k]);
	    }
	  printf("\n");
	}
      if(i != 3) printf("####################\n");
    }

  return 0;
}
