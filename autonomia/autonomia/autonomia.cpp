#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

void gotoxy(int x, int y)
{
    COORD c;
    c.X = x - 1;
    c.Y = y - 1;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void glowny_bohater(int x, int y) {

    gotoxy(x + 1, y);
    cout << "O";
    gotoxy(x, y + 1);
    cout << "/|\\";
    gotoxy(x, y + 2);
    cout << "/ \\";
}

int main()
{
    system("chcp 1250 && cls");

    HWND console = GetConsoleWindow();
    RECT r;
    GetWindowRect(console, &r);
    MoveWindow(console, r.left, r.top, 800, 100, TRUE);

    glowny_bohater(30, 2);

}

