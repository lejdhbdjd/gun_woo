#include <stdio.h>

int main(void) {
  int ar[] = {10,20,30,40,50,60,70,80,90,100};
  int br[10] ={100,200,300,400};
  int i;
  int temp;

  printf("%d\n",sizeof(ar));
  printf("%d\n",sizeof(ar[0]));
  printf("%d\n",sizeof(ar)/sizeof(ar[0]));
  for(i=0;i<10;i++){
    temp = ar[i];
    ar[i]=br[i];
    br[i] = temp;
  }
    for(i=0;i<10;i++){
    printf("%d ",ar[i]);
  }
  printf("\n");
    for(i=0;i<10;i++){
    printf("%d ",br[i]);
  }

  
}


#include <stdio.h>

int main(void) {
  int ar[10];
  int br[]={1,2,3,4,5};
  double dr[20];
  printf("%d %d %d",sizeof(ar), sizeof(br),sizeof(dr) );
}
