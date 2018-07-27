#include <stdio.h>

int main()

{

  int n,m,l;
  int i,j,k;
  int box1[100][100]={{0}};
  int box2[100][100]={{0}};

  long box3[100][100]={{0}};
    
  scanf("%d%d%d",&n,&m,&l);
    
  for(i=0; i<n; i++)
    {
      for(j=0; j<m; j++)
	{
	  scanf("%d",&box1[i][j]);
        }
    }
    
  for(i=0; i<m; i++)
    {
      for(j=0; j<l; j++)
	{
	  scanf("%d",&box2[i][j]);
        }
    }
    
  for(i=0; i<n; i++)
    {
      for(j=0; j<l; j++)
	{
	  for(k=0; k<m; k++)
	    {
	      box3[i][j] += box1[i][k]*box2[k][j];
            }
        }
    }
    
  for(i=0; i<n; i++)
    {
      for(j=0; j<l; j++)
	{

	  printf("%ld",box3[i][j]);

	  if(j == l-1)  printf("\n");

	  else  printf(" ");
        }
    }
    
  return 0;
}
