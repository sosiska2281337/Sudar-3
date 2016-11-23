#include "TXLib.h"

//Рисование стойки бара верхней
void stand()
{
    while (true)
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
    // Ноги
    txLine(x+30, y+160, x+30, y+70);
    txLine(x+30+polojenie_nogi, y+160, x+30, y+70);
    // Тело
    txLine(x+30, y, x+30, y+70);
    txLine(x+30, y, x+30, y+40);
    txCircle(x+30, y-20, 14);
    // Ручки
    txLine(x+10, y+60, x+30, y);
    txLine(x+60, y+35, x+30, y);
}

/*
Добавить зависимость от x, y
Добавить параметр - наличие бутылки в руке
*/
void drawBomj(int x, int y)
{
    // Человек 2
    // Ноги
    txSetColour(TX_GREEN, 5);
    txLine(650, 560, 670, 470);
    txLine(700, 560, 670, 470);
    // Тело
    txLine(670, 470, 670, 400);
    txLine(660, 390, 670, 400);
    txCircle(660, 376, 14);
    // Ручки
    txLine(670, 400, 650, 415);
    txLine(650, 415, 630, 405);

    txLine(670, 400, 685, 430);
    txLine(685, 430, 685, 470);

}

int main()
{
    txCreateWindow(1000, 800);
    drawStoika(1000, 550);

    /*Создать отдельную функцию появления бутылок*/
    for (int ryad = 1; ryad <= 4; ryad++) {
        for (int pos = 1; pos <= 8; pos++) {
            butulki(50*pos, 370-50*ryad);
            txSleep(100);
        }
    }

    for (int i = 1; i <= 40; i++) {
        txSetFillColour(TX_BLACK);
        txClear();

        for (int ryad = 1; ryad <= 4; ryad++) {
            for (int pos = 1; pos <= 8; pos++) {
                butulki(50*pos, 370-50*ryad);
            }
        }
        //i%2 = 0 для четных, 1 для нечетных
        //40 и -40 поэтому 40-80*(i%2)
        drawSudar(320+10*i, 400, 40 - 80*(i%2));

        drawBomj(670, 400);
        // Шкаф

        /*Создать отдельную функцию рисования шкафа, сделать цикл*/
        txSetColour(TX_BROWN);
        txLine(10, 350, 10,  150);
        txLine(10, 300, 400, 300);
        txLine(10, 250, 400, 250);
        txLine(10, 200, 400, 200);
        txLine(10, 150, 400, 150);
        txLine(400, 350,400,150);

        txSleep(100);
    }

    stand();
    return 0;
}

