#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *fp = fopen("datafile.txt","w");
  if ( fp == NULL)
  {
    printf("파일없음");
    exit(1);
  }

  fclose(fp);
  return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *in = fopen("StringFile.txt","r");
  char str1[30];
  char str2[30];
  char str3[30];
  if ( in == NULL)
  {
    printf("파일없음\n");
    exit(1);
  }
  fgets(str1, sizeof(str1), in);
  fgets(str2, sizeof(str2), in);
  fgets(str3, sizeof(str3), in);

  puts(str1);
  printf( "%s",str2);

  fputs(str3,stdout);
  fclose(in);
  
  return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *in = fopen("NumberFile.txt","r");
  int n,m;
  double d1, d2;
  
  if ( in == NULL)
  {
    printf("파일없음\n");
    exit(1);
  }
  printf("정수를 두개 입력하세요: ");
  scanf(in,"%d %d",&n ,&m);
  printf("실수를 두개 입력하세요: ");
  scanf(in,"%lf %lf",&d1 ,&d2);

  printf("\n입력 받은 수들을 모두 출력합니다.\n");
  scanf("%d %d",&n ,&m);
  scanf("%lf %lf",&d1 ,&d2);
  printf(">>>>>>>>>>\n");
  printf("어디서 입력 받았을까?");

  fclose(in);
  
  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n,num;
  char *res, str[20];

  printf("문자 입력:");
  n = getchar();
  printf("n = %d\n",n);

  printf("문자열 입력:");
  res = gets(str);
  printf("res = %d\n",res);
  
  printf("형식 입력:");
  n = scanf("%d",num);
  printf("n = %d",n);
  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *in, *out;
  char data = 'A';
  char val;
  
  out =fopen("s.txt","w");

  if ( out == NULL)
  {
    printf("파일없음");
    exit(1);
  }
  fputc(data,out);
  fclose(out);

  in =fopen("s.txt","w");

  if ( in == NULL)
  {
    printf("파일없음");
    exit(1);
  }
  val = fgetc(in);
  fclose(in);
  printf("%c",val);
  return 0;
}

