#include<stdio.h>

int main(){
 
  int n, m;
  int box1[100][100];
  int box2[100];
  int i, j;
  int input;
  int box3[100];
  int sum;
  
  
  scanf("%d %d", &n, &m);
  for(i = 0; i < n; i++)
  {
    for(j = 0; j < m; j++)
    {
     
      scanf("%d", &input);
    
      box1[i][j] = input;
      
    
    }
  
  }
  
  for(i = 0; i < m; i++)
  {
   
    scanf("%d", &input);
   
    box2[i] = input;
  
      
  }

  for(i = 0; i < n; i++)

  {

    sum = 0;
    
    for(j = 0; j < m; j++)
    
    {
      sum += box1[i][j] * box2[j];
    }
    
    box3[i] = sum;

  }

  for(i = 0; i < n; i++)
  
  {
    printf("%d\n", box3[i]);
  }
  
  return 0;
}