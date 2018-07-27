#include<stdio.h>

int main(){
  int n;
  char p, dummy;
  int input;
  int box[4][13];
  int i, j;

  for(i = 0; i < 4; i++){

    for(j = 0; j < 13; j++){

      box[i][j] = 0;

    }

  }

  scanf("%d", &n);

  for(i = 0; i < n; i++)

    {

    scanf("%c", &dummy);

    scanf("%c %d", &p, &input);

    switch(p){

    case 'S':
	box[0][input - 1] = 1;
	break;

    case 'H':
	box[1][input - 1] = 1;
	break;

    case 'C':
	box[2][input - 1] = 1;
	break;

    case 'D':
	box[3][input - 1] = 1;
	break;

    }

  }
  

  for(i = 0; i < 4; i++){

    for(j = 0; j < 13; j++){

      if(box[i][j] == 0){

	switch(i){

	case 0:
            printf("S %d\n", j + 1);
            break;

	case 1:
            printf("H %d\n", j + 1);
            break;

	case 2:
            printf("C %d\n", j + 1);
            break;

	case 3:
            printf("D %d\n", j + 1);
            break;

	}

      }

    }

  }
  
  return 0;

}
