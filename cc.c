#include <stdio.h>

int main(void) {
  int a;
  scanf("%d",&a);
  for(int i = a; i>0;--i){
    for(int j=1;j<=i;++j){
      printf("%d",j);
    }
    printf("\n");
  }
}

#include <stdio.h>

int main(void) {
  int a;
  scanf("%d",&a);
  for(int i = a; i>0;--i){
    for(int j=i;j>0;--j){
      printf("%d",j);
    }
    printf("\n");
  }
}

#include <stdio.h>

int main(void) {
  int a;
  scanf("%d",&a);
  for(int i = a; i>0;--i){
    for(int j=i;j<=a;++j){
      printf("%d",j);
    }
    printf("\n");
  }
}
