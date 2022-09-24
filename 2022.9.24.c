#include <stdio.h>

int main(void) {
  char ch1, ch2;

  ch1 = 'A';
  ch2='a';
  printf("%c %c\n",ch1+32,ch2-32);
  
  return 0;
}

#include <stdio.h>

int main(void) {
  char ch1, ch2;

  ch1 = '3';
  int val;
  val = ch1 -48;
  ch2=val + 48;
  printf("%c ",ch2);
  
  return 0;
}

#include <stdio.h>

int main(void) {
  char ch;
  printf("문자를입력하세요 :");
  ch=getchar();
  putchar(ch);
  printf("%c %d\n",ch,ch);
  

  return 0;
}

#include <stdio.h>

int main(void) {
char str1[15]={"Coding is fun"};
char str2[]={"Coding is fun"};

printf("%s\n",str1);
printf("%s\n",str2);
  return 0;
}

#include <stdio.h>

int main(void) {
  char word[20];

  printf("");
  scanf("%s",word);
  printf("%s",word);
  return 0;
  
  #include <stdio.h>

int main(void) {
  char ch [15] = {'H','i',' ','c','3','c','o','d','i','n','g','\0'};
  int a;
  
  a=0;
  while (ch[a] != '\0') {
    printf("%c",ch[a]);
    a++;
  }
  
  #include <stdio.h>

int main(void) {
  char ch[100];
  int i = 0;
  
  scanf("%s", ch);
    while (ch[i]!= '\0') {
      printf("%c",ch[i]-32);
      i++;
  }

}


    
  
  
  }


    
}
