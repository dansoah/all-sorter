#include <windows.h>
void clearScreen(){

    system("CLS");
     
}
void color(int color ){

    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(console, color);

}
