#include "D:\Инженерка\TX\TXLib.h"

void butulki(int x, int y);
void chelovechek(int x, int y);
void drawStoika(int x, int y);
void chelovechek2(int x, int y);

int main()
{
    txCreateWindow(1000, 800);
    butulki(50, 320);
    butulki(100, 320);
    butulki(150, 320);
    butulki(200, 320);
    drawStoika( 1000, 550);
    chelovechek(320, 400);
    chelovechek2(670, 400);
//Фон
//шкаф
    txSetColour(TX_BROWN);
    txLine(10, 300, 400, 300);
    txLine(10, 250, 400, 250);
    txLine(10, 200, 400, 200);
    txLine(10, 150, 400, 150);
    txLine(10, 350, 10,  150);
    txLine(400, 350, 400,150);
//вывеска
    txLine(600, 100, 600, 50);
    txLine(600, 50, 750,  50);
    txLine(750, 100, 750, 50);
    txLine(600, 100, 750, 100);
    txLine(638, 50,  638, 2);
    txLine(710, 50,  710, 2);
//тeкст с вывески
    txSelectFont ("Comic Sans MS", 80) ;
    txTextOut (625, 33, "BAR");
    return 0;

}
void butulki(int x, int y)
{
//бутылки
    txSetColour(TX_RED);
    txLine(x-20, y+30,x-20, y);
    txLine(x, y,      x-20, y);
    txLine(x, y,      x, y+30);
    txLine(x-20,y+30, x, y+30);
    txLine(x-13,y,    x-13, y-10);
    txLine(x-6, y-10, x-13, y-10);
    txLine(x-6, y-10, x-6, y);
}
void drawStoika(int x, int y)
{
//стойка
    txSetColour(TX_BLUE);
    txLine(x-990, y-200, x, y-200);
    txLine(x-998,  y-130,  x, y-130);
    txLine(x-998,  y, x, y);
}
void chelovechek(int x, int y)
{
//человечек 1
    txLine(1, 2,3,4);
//ноги
    txSetColour(TX_RED, 5);
    txLine(x, y+160, x+30, y+70);
    txLine(x+50, y+160, x+30, y+70);
//тело
    txLine(x+30, y, x+30, y+70);
    txLine(x+30, y, x+30, y+40);
    txCircle(x+30, y-20, 14);
//ручки
    txLine(x+10, y+60, x+30, y);
    txLine(x+60, y+35, x+30, y);
}

void chelovechek2(int x, int y)
{
//человек2
//ноги
    txSetColour(TX_GREEN, 5);
    txLine(x-20, y+160, x, y+70);
    txLine(x+30, y+160, x, y+70);
//тело
    txLine(x, y+70, x, y);
    txLine(x+10, y-10, x, y);
    txCircle(x-10, y-15, 14);
//ручки
    txLine(x, y, x+15,      y+30);
    txLine(x+15, y+60, x-15, y+30);
//2
    txLine(x-20, y+15, x, y);
    txLine(x-20, y+15, x-40, y+5);

}
