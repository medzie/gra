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

void tytul() {

    gotoxy(40, 1);
    cout << " _ " << endl;
    gotoxy(40, 2);
    cout << "(_)" << endl;
    gotoxy(40, 3);
    cout << " _ " << endl;
    gotoxy(40, 4);
    cout << "| |" << endl;
    gotoxy(40, 5);
    cout << "| |" << endl;
    gotoxy(40, 6);
    cout << "|_|" << endl;
    Sleep(300);

    gotoxy(43, 3);
    cout << "  _ __  " << endl;
    gotoxy(43, 4);
    cout << " | '_ \\" << endl;
    gotoxy(43, 5);
    cout << " | | | |" << endl;
    gotoxy(43, 6);
    cout << " |_| |_|" << endl;
    Sleep(300);

    gotoxy(52, 1);
    cout << "     _ " << endl;
    gotoxy(52, 2);
    cout << "    | |" << endl;
    gotoxy(52, 3);
    cout << "  __| |" << endl;
    gotoxy(52, 4);
    cout << " / _` |" << endl;
    gotoxy(52, 5);
    cout << "| (_| |" << endl;
    gotoxy(52, 6);
    cout << " \\__,_|" << endl;
    Sleep(300);

    gotoxy(60, 3);
    cout << "  ___ " << endl;
    gotoxy(60, 4);
    cout << " / _ \\" << endl;
    gotoxy(60, 5);
    cout << "|  __/" << endl;
    gotoxy(60, 6);
    cout << " \\___|" << endl;
    Sleep(300);

    gotoxy(67, 3);
    cout << " _ __ " << endl;
    gotoxy(67, 4);
    cout << "| '_ \\" << endl;
    gotoxy(67, 5);
    cout << "| __/ |" << endl;
    gotoxy(67, 6);
    cout << "| .__/" << endl;
    gotoxy(67, 7);
    cout << "| |" << endl;
    gotoxy(67, 8);
    cout << "|_|" << endl;
    Sleep(300);

    gotoxy(75, 3);
    cout << "  ___ " << endl;
    gotoxy(75, 4);
    cout << " / _ \\" << endl;
    gotoxy(75, 5);
    cout << "|  __/" << endl;
    gotoxy(75, 6);
    cout << " \\___|" << endl;
    Sleep(300);

    gotoxy(82, 3);
    cout << "  _ __  " << endl;
    gotoxy(82, 4);
    cout << " | '_ \\" << endl;
    gotoxy(82, 5);
    cout << " | | | |" << endl;
    gotoxy(82, 6);
    cout << " |_| |_|" << endl;
    Sleep(300);

    gotoxy(91, 1);
    cout << "     _ " << endl;
    gotoxy(91, 2);
    cout << "    | |" << endl;
    gotoxy(91, 3);
    cout << "  __| |" << endl;
    gotoxy(91, 4);
    cout << " / _` |" << endl;
    gotoxy(91, 5);
    cout << "| (_| |" << endl;
    gotoxy(91, 6);
    cout << " \\__,_|" << endl;
    Sleep(300);
}

int main()
{
    system("chcp 1250 && cls");

    HWND console = GetConsoleWindow();
    RECT r;
    GetWindowRect(console, &r);
    MoveWindow(console, r.left, r.top, 1200, 600, TRUE);

    //glowny_bohater(1, 2);

    tytul();

    gotoxy(1, 20);
    system("PAUSE");
}

