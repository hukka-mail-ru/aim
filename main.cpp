#include <graphics.h>

// ��� ������ � ������ �������� �����:
void onMouseMove(int x, int y)
{
    cleardevice(); // �������� �����
    readimagefile("simpson.bmp", x, y, x + 250, y + 250);  // ������� �� ����� �������� �� ����� "simpson.bmp"
}


// ��� ������ � ������ ������� �����:
void onMousePress(int x, int y)
{
    // ������ �����:
    setcolor(BLACK);
    setlinestyle(SOLID_LINE, 0, 3);
    circle(x + 134, y + 91, 10);  // ������ ����
    circle(x + 177, y + 118, 10); // ������ ����
} 


// ��� ������ � ������ ���������� �����:
void onMouseRelease(int x, int y)
{
    onMouseMove(x, y); // �� �� , ��� � � ������ �������� �����
}


int WIN_MAIN() //  main() ��� Windows 
{
    initwindow(500, 500);
    setbkcolor(WHITE); // ��� ������ �����

    // �������� �����:
    registermousehandler(WM_MOUSEMOVE, onMouseMove);    // ���� ������ ���� ���������, �� �������� ������� onMouseMove()
    registermousehandler(WM_LBUTTONDOWN, onMousePress); // ���� ������ ���� ������, �� �������� ������� onMousePress()
    registermousehandler(WM_LBUTTONUP, onMouseRelease); // ���� ������ ���� ��������, �� �������� ������� onMouseRelease()

    getch(); // ���������, ���� �� �� ������� ����
}