#include "TXLib.h"

//Ðèñîâàíèå ñòîéêè áàðà âåðõíå
void drawBar()
{
    txSetColour(TX_GREEN);

    txLine(600, 100, 600, 50);
    txLine(600, 50, 750,  50);
    txLine(750, 100, 750, 50);
    txLine(600, 100, 750, 100);
    txLine(638, 50,  638, 2);
    txLine(710, 50,  710, 2);

    txSetColour(RGB(random(255),random(255),random(255)));
    txSelectFont ("Comic Sans MS", 80) ;
    txTextOut (625, 33, "BAR");
    txSleep(100);
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
    txLine(650, 560, 670, 470);
    txLine(700, 560, 670, 470);
    // Òåëî
    txLine(670, 470, 670, 400);
    txLine(660, 390, 670, 400);
    txCircle(660, 376, 14);
    // Ðó÷êè
    txLine(670, 400, 650, 415);
    txLine(650, 415, 630, 405);

    txLine(670, 400, 685, 430);
    txLine(685, 430, 685, 470);
}

void drawShkaff(int x, int y)
{
    txSetColour(TX_BROWN);
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
void nuzhnoe()
{

    drawStoika(1000, 550);
    drawBomj(670, 400);
    drawShkaff(10, 200);
    drawBar();
    poyavlenieButylok(100);
}

int main()
{
    txCreateWindow(1000, 800);
    nuzhnoe();
    for (int i = 3; i <= 40; i++) {
        txSetFillColour(TX_BLACK);
        txClear();

        poyavlenieButylok(0);
        drawSudar(320+10*i, 400, 40 - 80*(i%2));
        drawShkaff(10, 200);
        drawBomj(670, 400);SS
        drawBar();

        txSleep(30);
    }

    return 0;
}
