#include "D:\Инженерка\TX\TXLib.h"

int dx = 500;
int dy = 20;
int vragX = 500;
int vragY = 560;
int Px = 40;
int Py = 40;
int ox = 2;
int oy = 300;

void ikran (int *x, int *y, int granicaPoY)
{
    if (*x > txGetExtentX()) {
        *x = txGetExtentX();
    }
    if (*y > granicaPoY - 40) {
        *y = granicaPoY - 40;
    }

    if (*x < 20) {
        *x = 20;
    }
    if (*y < 0) {
        *y = 0;
    }

}
void ograda(int ox, int oy)
{
    txLine(ox,oy,ox+998,oy);
}
void DNN (int dx, int dy)
{
    txSetColour(RGB(random(255),random(255),random(255)));
    txSetColour(TX_RED);
    txLine(dx-13,dy+30,    dx-13, dy+40);
    txLine(dx-6, dy+40, dx-13, dy+40);
    txLine(dx-6, dy+40, dx-6, dy+30);

    txLine(dx-20, dy+30,dx-20, dy);
    txLine(dx, dy,      dx-20, dy);
    txLine(dx, dy,      dx, dy+30);
    txLine(dx-20,dy+30, dx, dy+30);


    txSetColour(RGB(random(255),random(255),random(255)));
    txSelectFont ("Times New Roman", 10) ;
    txTextOut (dx-15, dy+15, "DN");


}

void ZloyDN (int vragX, int vragY)
{
    txLine(vragX-20, vragY+30,vragX-20, vragY);
    txLine(vragX, vragY,      vragX-20, vragY);
    txLine(vragX, vragY,      vragX, vragY+30);
    txLine(vragX-20,vragY+30, vragX, vragY+30);
    txLine(vragX-13,vragY,    vragX-13, vragY-10);
    txLine(vragX-6, vragY-10, vragX-13, vragY-10);
    txLine(vragX-6, vragY-10, vragX-6, vragY);
    txSetColour(RGB(random(255),random(255),random(255)));
    txSelectFont ("Times New Roman", 10) ;
    txTextOut (vragX-15, vragY+15, "DN");

}
void pechen(int Px, int Py)
{
 txSetColour(TX_RED);
 txLine(Px, Py, Px, Py+40);
 txLine(Px, Py, Px+20, Py);
 txLine(Px+20, Py+40, Px+20, Py);
}
int main()
{
    txCreateWindow(1000, 600);

    txSetColor(TX_RED, 4);
    while (1)
    {
        txClear();

        if (GetAsyncKeyState(VK_LEFT))
        {
            dx = dx - 10;
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            dx = dx + 10;
        }
        if (GetAsyncKeyState(VK_UP))
        {
            dy = dy - 10;
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            dy = dy + 10;
        }

        if (GetAsyncKeyState(VK_NUMPAD4))
        {
            vragX = vragX - 10;
        }
        if (GetAsyncKeyState(VK_NUMPAD6))
        {
            vragX = vragX + 10;
        }
        if (GetAsyncKeyState(VK_NUMPAD8))
        {
            vragY = vragY - 10;
        }
        if (GetAsyncKeyState(VK_NUMPAD5))
        {
            vragY = vragY + 10;
        }

        ikran (&dx, &dy, 300);
        ikran (&vragX, &vragY, 300);

        ograda (2, 300);
        pechen (40, 40);
        DNN (dx, dy);
        ZloyDN (vragX, vragY);
        txSleep(10);
    }
return 0;
}
