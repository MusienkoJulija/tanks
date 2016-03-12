#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);

enum TANK_DIRECTION {
   SOUTH = 0,
   NORTH,
   EAST,
   WEST
};

const int LEFT = 75;
const int RIGHT = 77;
const int UP = 72;
const int DOWN = 80;



void drawTankForDirection() {
    COORD drawPos = {0,0};

   SetConsoleCursorPosition(hCon,drawPos);
   printf("  %c  \n",220);
   drawPos.Y++;
   SetConsoleCursorPosition(hCon,drawPos);
   printf("  %c  \n",186);
   drawPos.Y++;
   SetConsoleCursorPosition(hCon,drawPos);
   if(drawPos.Y % 2 == 0)
   {
       printf("%c%c%c%c%c\n",178,178,202,178,178);
   }else{
       printf("%c%c%c%c%c\n",176,176,202,176,176);
   }
   drawPos.Y++;
   SetConsoleCursorPosition(hCon,drawPos);
   if(drawPos.Y % 2 == 0)
   {
       printf("%c%c %c%c\n",178,178,178,178);
   }else{
       printf("%c%c %c%c\n",176,176,176,176);
   }
   drawPos.Y++;
   SetConsoleCursorPosition(hCon,drawPos);
   if(drawPos.Y % 2 == 0)
   {
       printf("%c%c %c%c\n",178,178,178,178);
   }else{
       printf("%c%c %c%c\n",176,176,176,176);
   }
   drawPos.Y++;
   SetConsoleCursorPosition(hCon,drawPos);
   if(drawPos.Y % 2 == 0)
   {
       printf("%c%c%c%c%c\n",178,178,205,178,178);
   }else{
       printf("%c%c%c%c%c\n",176,176,205,176,176);
   }
}

int main()
{
   system("mode con cols=165 lines=65");
   CONSOLE_CURSOR_INFO curInfo;

   curInfo.bVisible = false;
   curInfo.dwSize = 1;
   SetConsoleCursorInfo(hCon, &curInfo);

   while(true)
   {
       int ch = getch();
       switch(ch)
       {
           case DOWN: //down

               break;
           case UP: //up
           drawTankForDirection();
               break;
           case RIGHT://right

               break;
           case LEFT://left

               break;
           case 32://shot

               break;
           case 27://exit
           return 0;
       }

   }

   return 0;
}
