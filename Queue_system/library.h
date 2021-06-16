#include<windows.h>
#include <iostream>

using namespace std;
void gotoxy(int x, int y){
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void color (int color){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}
void setCenterConsole(int x, int y){
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(consoleHandle, &info);
	//Get the window console handle(isn't the right code but works for these sample
	HWND ConsoleWindow;
	ConsoleWindow=GetForegroundWindow();

	//Getting the desktop hadle and rectangule
	HWND   hwndScreen;
	RECT   rectScreen;
	hwndScreen=GetDesktopWindow ();
	GetWindowRect(hwndScreen,&rectScreen);

	//Set windows size(see the width problem)
	SetWindowPos (ConsoleWindow,NULL,0,0,x,y, SWP_SHOWWINDOW);

	// Get the current width and height of the console
	RECT rConsole;
	GetWindowRect (ConsoleWindow,&rConsole);
	int Width = rConsole.right - rConsole.left;
	int Height = rConsole.bottom - rConsole.top;

	//caculate the window console to center of the screen
	int ConsolePosX;
	int ConsolePosY;
	ConsolePosX = ((rectScreen.right-rectScreen.left)/2-Width/2 );
	ConsolePosY = ((rectScreen.bottom-rectScreen.top)/2- Height/2 );
	SetWindowPos(ConsoleWindow,NULL,ConsolePosX,ConsolePosY, Width, Height, SWP_SHOWWINDOW || SWP_NOSIZE);

	//_getch();
	//return 0;
}
void window_Size(int x, int y){
  HWND console = GetConsoleWindow();
  RECT r;
  GetWindowRect(console, &r);
  MoveWindow(console, r.left, r.top, x, y, TRUE);

}
void background(int x){
    int h = 35;
    for(int i=1; i<=(x/2); i++){
        for(int j=1; j<=36; j++){
            if(j%2==0){
                if(j%2==0){
                    color(11);
                } else {
                    color(2);
                }
                cout<<" \xC4";
            } else {
                if(j%2!=0){
                    color(2);
                } else {
                    color(11);
                }
                cout<<" \x5C";
            }
        }
    }
}
void backgroundLarge(int x){
    int h = 35;
    for(int i=1; i<=(x/2); i++){
        for(int j=1; j<=36; j++){
            if(j%2==0){
                if(j%2==0){
                    color(2);
                } else {
                    color(11);
                }
                cout<<"\xB0";
            } else {
                if(j%2!=0){
                    color(11);
                } else {
                    color(2);
                }
                cout<<"\xB0";
            }
        }
    }gotoxy(0,0);
}
void animate(string str){
    for (auto ch : str){
        cout << ch;
        Sleep(40);
    }
}
