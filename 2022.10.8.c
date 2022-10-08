#include <stdio.h>

int main(void) {
  int ar2[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  int i, j;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      printf("%d ", ar2[i][j]);
    }
    printf("\n");
  }
}

#include <stdio.h>

int main(void) {
  int ar2[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  int i, j;

i=0;j=0;
  do{
    do{
        printf("%d",ar2[i][j]);
      j++;
      }while(j<4);
  printf("\n");
  i++;
    j=0;
  }while (i<3);
}
#include <stdio.h>

int main(void) {
  int i,j;
  #include <stdio.h>

int main(void) {
  int i, j;
  int ar[6][9] = {
      {0, 0, 0, 1, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 2, 0},
      {0, 0, 0, 0, 1, 0, 0, 0, 0}, {0, 2, 0, 1, 0, 0, 1, 0, 0},
      {0, 0, 0, 1, 0, 0, 0, 0, 0}, {0, 0, 1, 0, 0, 0, 1, 0, 0},
  };
  int count = 0;
  for (i = 0; i < 6; i++) {
    for (j = 0; j < 9; j++) {
      printf("%d ", ar[i][j]);
      if (ar[i][j] == 1) {
        count++;
      }
    }
    printf("\n");
  }
  printf("%d", count);
}
#include <stdio.h>

int main(void) {
  int i,j;
  int ar[6][9]={{0,0,0,1,0,0,0,0,0},
                {0,0,0,0,0,0,0,2,0},
                {0,0,0,0,1,0,0,0,0},
                {0,2,0,1,0,0,1,0,0},
                {0,0,0,1,0,0,0,0,0},
                {0,0,1,0,0,0,1,0,0},
  };
  for(i = 0;i<6;i++) {
    for(j=0;j<9;j++){
      if(ar[i][j]==0){
         ar[i][j]=1;
        
      }
      else{
        ar[i][j]=0;
      }
    }
  }
   for(i=0;i<6;i++){
       for(j=0;j<9;j++){
          printf("%d ",ar[i][j]); 
          }
     printf("\n");
     }
 }
 #include <stdio.h>

int main(void) {
  int i,j;
  int ar[3][5]={{23,22,27,21,24},
                {21,22,25,24,23},
                {20,23,22,21,24},

  };
  scanf("%d",&i);
    for(j=0;j<5;j++){
      printf("%d ",ar[i][j]);
    }
  }#include <stdio.h>

int main(void) {
  int i,j;
  int ar[3][5]={{23,22,27,21,24},
                {21,22,25,24,23},
                {20,23,22,21,24},

  };
  scanf("%d",&i);
    for(j=0;j<5;j++){
      printf("%d ",ar[i][j]);
    }
  }#include <stdio.h>

int main(void) {
  int i,j;
  int ar[3][5]={{23,22,27,21,24},
                {21,22,25,24,23},
                {20,23,22,21,24},

  };
  scanf("%d",&i);
    for(j=0;j<5;j++){
      printf("%d ",ar[i][j]);
    }
  }
  int ar[6][9]={{0,0,0,1,0,0,0,0,0},
                {0,0,0,0,0,0,0,2,0},
                {0,0,0,0,1,0,0,0,0},
                {0,2,0,1,0,0,1,0,0},
                {0,0,0,1,0,0,0,0,0},
                {0,0,1,0,0,0,1,0,0},
  
};
  printf("%d",ar[i][j]);
  }
