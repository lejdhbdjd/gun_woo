#include <stdio.h>
#include <conio.h>
#include <windows.h>
void GotoXY(COORD pos)
{
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

int main(void) 
{
  COORD pos={20,4};
  for(int i=1;i<=10;i++){
  	printf("%d",10 *i);
  	pos.X = pos.X+200;
  	Sleep(1000);
  	GotoXY(pos);
  }
return 0;
}
