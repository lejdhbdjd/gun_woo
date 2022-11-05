#include <stdio.h>

int main(void) {
  int a,b;

  a=12;
  b=20;
  printf("a=%d,b=%d",a,b);
  {
    int a,c;

    a=40;
    c=50;
    printf("a=%d,b=%d,c=%d\n",a,b,c);

    a = 90;
    b= 45;
    c =75;
  }
  printf("a=%d,b=%d",a,b);
  return 0;
}


#include "M.h"
#include <stdio.h>
#define ERROR "d입력오류\n"

int main() {
  int menu = 0;
  int subm = 0;
  double subn = 0;
  while (menu != 3) {
    menu = M();
    switch (menu) {
    case 1:
      subm = IntMenu();
      break;
    case 2:
      subn = DouMenu();
      printf("%lf", subm);
      break;
    }
  }
}
