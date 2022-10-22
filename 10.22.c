#include <stdio.h>
#include  <string.h>

struct a {
  char name[10];
  int age;
  double height;
};

int main()
{
  struct a m1;
  struct a m2 = {"몰루",13,159.9};
  struct a m3;
  scanf("%s",m3.name);
  scanf("%d",&m3.age);
  scanf("%lf",&m3.height);
  
  strcpy(m1.name,"허균");
  m1.age = 19;
  m1.height = 168.34;

  printf("(%s %d,%lf)\n",m1.name,m1.age,m1.height);
  printf("(%s %d,%lf)\n",m2.name,m2.age,m2.height);
  printf("(%s %d,%lf)\n",m3.name,m3.age,m3.height);
}






#include <stdio.h>
#include  <string.h>

struct a {
double r;
double s;
double l;
};

int main()
{
  struct a c;
  scanf("%lf",&c.r);
  c.s=3.14*c.r*c.r;
  c.l=2*3.14*c.r;

  printf("넒이:%lf\n",c.s);
  printf("둘레:%lf\n",c.l);    
}



#include <stdio.h>
#include  <string.h>

struct l {
  int x;
  int y;
};
struct a {
  struct l cen;
  double r;
};

int main()
{
  struct a c1;
  c1.cen.x=5;
  c1.cen.y=10;
  c1.r=4.0;
  struct a c2 ={{4,5},12.4};
  struct a c3;
  scanf("%lf",&c3.r);
  printf("(%d %d %lf)\n",c1.cen.x,c1.cen.y,c1.r);
  printf("(%d %d %lf)\n",c2.cen.x,c2.cen.y,c2.r);
  printf("(%d %d %lf)\n",c3.cen.x,c3.cen.y,c3.r);
}
