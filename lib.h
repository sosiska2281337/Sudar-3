void shkaf()
{
    txSetColour(TX_BROWN);
    txLine(10, 300, 400, 300);
    txLine(10, 250, 400, 250);
    txLine(10, 200, 400, 200);
    txLine(10, 150, 400, 150);
    txLine(10, 350, 10,  150);
    txLine(400, 350, 400,150);
}
void stand()
{
    while (true)
    {
        txSetColour(TX_GREEN);
        // �������
        txLine(600, 100, 600, 50);
        txLine(600, 50, 750,  50);
        txLine(750, 100, 750, 50);
        txLine(600, 100, 750, 100);
        txLine(638, 50,  638, 2);
        txLine(710, 50,  710, 2);
        // �e��� � �������
        txSetColour(RGB(random(255),random(255),random(255)));
        txSelectFont ("Comic Sans MS", 80) ;
        txTextOut (625, 33, "BAR");
        txSleep(100);
    }
}
void butulki(int x, int y)
{
    // �������
    txSetColour(TX_RED);
    txLine(x-20, y+30,x-20, y);
    txLine(x, y,      x-20, y);
    txLine(x, y,      x, y+30);
    txLine(x-20,y+30, x, y+30);
    txLine(x-13,y,    x-13, y-10);
    txLine(x-6, y-10, x-13, y-10);
    txLine(x-6, y-10, x-6, y);
    txSelectFont ("Times New Roman", 10) ;
    txTextOut (x-15, y+15, "DN");
}
void drawStoika(int x, int y)
{
    // ������
    txSetColour(TX_BLUE);
    txLine(x-990, y-200, x, y-200);
    txLine(x-998,  y-130,  x, y-130);
    txLine(x-998,  y, x, y);
}
void chelovechek(int x, int y)
{
    // ��������� 1
    txLine(1, 2,3,4);
    // ����
    txSetColour(TX_RED, 5);
    txLine(x, y+160, x+30, y+70);
    txLine(x+50, y+160, x+30, y+70);
    // ����
    txLine(x+30, y, x+30, y+70);
    txLine(x+30, y, x+30, y+40);
    txCircle(x+30, y-20, 14);
    // �����
    txLine(x+10, y+60, x+30, y);
    txLine(x+60, y+35, x+30, y);
}

void chelovechek2(int x, int y)
{
    // ������� 2
    // ����
    txSetColour(TX_GREEN, 5);
    txLine(x-20, y+160, x, y+70);
    txLine(x+30, y+160, x, y+70);
    // ����
    txLine(x, y+70, x, y);
    txLine(x+10, y-10, x, y);
    txCircle(x-10, y-15, 14);
    // �����
    txLine(x, y, x+15,      y+30);
    txLine(x+15, y+60, x-15, y+30);
    // 2
    txLine(x-20, y+15, x, y);
    txLine(x-20, y+15, x-40, y+5);

}
