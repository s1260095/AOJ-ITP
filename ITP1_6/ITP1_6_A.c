
#include<stdio.h>

int main()

{

  int n;
  int box[100];
  int input;
  int i, j;

  scanf("%d", &n);
  for(i = 0; i < n; i++)
    {

      scanf("%d", &input);
      box[i] = input;

    }

  for(j = i - 1; j >= 0; j--)
    {

      printf("%d", box[j]);

      if(j != 0) printf(" ");

    }

  printf("\n");
  
  return 0;
}
