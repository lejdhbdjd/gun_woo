#include <stdio.h>

int main(void) {
  for(int i = 6; i>=1;--i){
    for(int j=1;j<8;++j){
      printf("%d학년 %d반\n",i,j);
    }
  }
  return 0;
}
