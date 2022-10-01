#include <stdio.h>

int main(void) {
  int a; double b; char c;
  int *pa; double *pb; char *pc;

  a=153;b=12.7;c='j';
  pa=&a;pb=&b;pc=&c;
  printf ("pa = %x pb = %x pc= %x\n",pa,pb,pc);
  printf ("&a = %p &b = %x &c= %p\n",&a,&b,&c);

    printf ("a = %d b = %1f c= %c\n",a,b,c);
  printf ("*pa = %d *pb = %1f *pc= %c\n",*pa,*pb,*pc);
  return 0;
}

#include <stdio.h>

int main(void) {
  int a,b;
  int add, sub ,mul,div;
  int *pa,*pb;
  pa=&a;
  pb=&b;
  a=30;
  b=55;
  add=*pa+*pb;
  printf("add = %d\n",add);
  *pa=9;
  *pa=7;
  sub = *pa - *pb;
  printf("sub=%d\n",sub);
  a=12;
  b=3;
  sub=*pa * *pb;
  printf("add = %d\n",add);
  a=45;
  b=5;
  div=*pa / *pb;
  printf("add = %d\n",add);
  
    
  return 0;
}
#include <stdio.h>

void getChar(char *cp);
void printChar(char *cp);

int main(void) {
  char ch1,ch2;
  char *cp1,*cp2;

  cp1 = &ch1;
  cp2 = &ch2;
  printf("문자1 입력 : ");
  ch1=getchar();
  getchar();
  printf("문자2 입력 : ");
  scanf("%c",&ch2);
  getchar();
  printf("%c",*cp1);
  putchar(*cp2);

  getChar(&ch1);
  printf(cp1);
  return 0;
}
void getChar (char *cp)
{
  printf("문자1 입력 : ");
  *cp=getchar();
  getchar(); 
}
void printfChar (char *cp)
{
  printf("%c",*cp);
}

#include <stdio.h>
void AddNum(int,int);
void Subnum(int*,int*);
void Mulnum(int*,int*);
void Divnum(int,int);


int main(void) {
  int n,m;
  int *pa=&n,*pb=&m;

  printf("정수입력:");
  scanf("%d %d",&n,pb);
  
   AddNum(a,b);
   Subnum(&a. &b);
   Mulnum(pa,pb);
   Divnum(*pa,*pb);
  
  
  return 0;
}
void AddNum(int a,int b);
{
  
}
