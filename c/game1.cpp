#include<iostream>
#include<conio.h>
#include<cwchar>
#include<windows.h>
using namespace std;
void setconsolesize(int f_size)
{
    CONSOLE_FONT_INFOEX cfi;
    cfi.cbSize=sizeof(cfi);
    cfi.nFont=0;
    cfi.dwFontSize.X=0;
    cfi.dwFontSize.Y=f_size;
    cfi.FontFamily=FF_DONTCARE;
    cfi.FontWeight=FW_NORMAL;
    std::wcscpy(cfi.FaceName,L"calibri");
    SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE),FALSE,&cfi);
}
void printInputMatrix();
void printBoard();
int addMark();
int check();

int pcolors={247,247,247,247,247,247,247,247,247};
HANDLE console=GetStdHandle(STD_OUTPUT_HANDLE);
char board[3][3]={'1','2','3',
                  '4','5','6',
                  '7','8','9'};
int turn=1;
char mark='0';
int input;
int main()
{
    setconsolesize(30);
    SetConsoleTextAttribute(console,BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_RED|BACKGROUND_INTENSITY);
    int won=0,end1,pcolors;
    int validInput=0;
    for(int i=0;i<9;i++)
    {
        system("cls");
        printBoard();
        if(turn)
        {
            SetConsoleTextAttribute(console,242);
            cout<<"0 - player 1:"<<end1;
        }
        else{
            SetConsoleTextAttribute(console,242);
            cout<<"X-player 2:"<<end1;
        }
        cin>>input;
        while(input<0||input>9){
            cout<<"Invalid Input please Re-Enter Input:";
            cin>>input;
        }
        if(turn) pColors[input-1]=242;
        else pColors[input-1]=252;
        

    }
}                  