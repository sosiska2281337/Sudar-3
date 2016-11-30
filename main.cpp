#include "TXLib.h"

/*
АЗАЗАЗАЗАЗАЗАЗАЗЗААЗАЗЗАЗАЗАЗАЗАЗАЗЗАЗАЗАЗАЗАЗАЗАЗААЗАЗАЗАЗАЗЗАЗАЗАЗАЗАЗАЗАЗАЗАЗАЗАЗЗАЗАЗАЗАЗАЗАЗАЗАЗАЗАЗАЗАЗАЗАЗАЗАЗАЗАЗАЗАЗАЗА
*/
//Ðèñîâàíèå ñòîéêè áàðà âåðõíå
void drawBar(int x, int y)
{
    txSetColour(TX_GREEN);

    txLine(x,   y, x, y-50);
    txLine(x,   y-50,  x+150, y-50);
    txLine(x+150, y, x+150, y-50);
    txLine(x,   y, x+150, y);
    txLine(x+38, y-50,  x+38, y-598);
    txLine(x+110, y-50, x+110 , y-598);

    txSetColour(RGB(random(255),random(255),random(255)));
    txSelectFont ("Comic Sans MS", 80) ;
    txTextOut (625, 33, "BAR");
    //txSleep(100);
}

void butulki(int x, int y)
{
    txSetColour(TX_RED);
    txLine(x-20, y+30,x-20, y);
    txLine(x, y,      x-20, y);
    txLine(x, y,      x, y+30);
    txLine(x-20,y+30, x, y+30);
    txLine(x-13,y,    x-13, y-10);
    txLine(x-6, y-10, x-13, y-10);
    txLine(x-6, y-10, x-6, y);
    txSetColour(RGB(random(255),random(255),random(255)));
    txSelectFont ("Times New Roman", 10) ;
    txTextOut (x-15, y+15, "DN");
}

void drawStoika(int x, int y)
{
    txSetColour(TX_BLUE);
    txLine(x-990, y-200, x, y-200);
    txLine(x-998,  y-130,  x, y-130);
    txLine(x-998,  y, x, y);
}

void drawSudar(int x, int y, int polojenie_nogi)
{
    txSetColour(TX_RED, 5);
    // Íîãè
    txLine(x+30, y+160, x+30, y+70);
    txLine(x+30+polojenie_nogi, y+160, x+30, y+70);
    // Òåëî
    txLine(x+30, y, x+30, y+70);
    txLine(x+30, y, x+30, y+40);
    txCircle(x+30, y-20, 14);
    // Ðó÷êè
    txLine(x+10, y+60, x+30, y);
    txLine(x+60, y+35, x+30, y);
}

/*
Äîáàâèòü çàâèñèìîñòü îò x, y
Äîáàâèòü ïàðàìåòð - íàëè÷èå áóòûëêè â ðóêå
*/
void drawBomj (int x, int y)
{
    // ×åëîâåê 2
    // Íîãè
    txSetColour(TX_GREEN, 5);
    txLine(x-20, y+160, x, y+70);
    txLine(x+100, y+160, x, y+70);
    // Òåëî
    txLine(x, y+70, x, y);
    txLine(x-10, y-10, x, y);
    txCircle(x-10, y-24, 14);
    // Ðó÷êè
    txLine(x, y, x-20, y+15);
    txLine(x-20, y+15, x-40, y+5);

    txLine(x, y,     x+15, y+30);
    txLine(x+15, y+30, x+15, y+70);
}

void drawShkaff(int x, int y)
{
    txSetColour(TX_WHITE);
    txLine(x,  y+150, x,     y- 50);
    txLine(x,  y+100, x+390, y+100);
    txLine(x,  y+ 50, x+390, y+ 50);
    txLine(x,  y,     x+390, y);
    txLine(x,  y- 50, x+390, y- 50);
    txLine(x+390,y+150,x+390,y- 50);
}

void poyavlenieButylok (int zaderjka)
{
    for (int ryad = 1; ryad <= 4; ryad++) {
        for (int pos = 1; pos <= 8; pos++) {
            butulki(50*pos, 370-50*ryad);

            if (zaderjka > 0) {
                txSleep(zaderjka);
            }
        }
    }
}


int main()
{
    txCreateWindow(1000, 800);

    int i=1;
    for (i = 1; i <= 22; i++) {
        txSetFillColour(TX_BLACK);
        txClear();

        poyavlenieButylok(0);
        drawSudar(320+10*i, 400, 40 - 80*(i%2));
        drawShkaff(10, 200);
        drawBomj(670, 400);
        drawBar(600, 100);
        drawStoika(1000, 550);

        txSleep(30);
    }
    //you are
    for (i = 3; i <= 22; i++) {
        txSetFillColour(TX_BLACK);
        txClear();

        poyavlenieButylok(0);
        drawBomj(670, 400);
        drawBar(600, 100);
        drawStoika(1000, 550);
        drawSudar(540, 400, - 40);
        drawShkaff(10, 200);

        txSetColour(TX_YELLOW);
        txSelectFont ("Times New Roman", 20) ;
        txTextOut (600, 300, "You are ");
        txSleep(30);

    }

   //idiot
    txSetFillColour(TX_BLACK);
    txClear();

    poyavlenieButylok(0);
    drawBomj(670, 400);
    drawBar(600, 100);
    drawStoika(1000, 550);
    drawSudar(540, 400, 40);
    drawShkaff(10, 200);

    txSetColour(TX_YELLOW);
    txSelectFont ("Times New Roman", 40) ;
    txTextOut (700, 300, "IDIOT!");

    return 0;
}


