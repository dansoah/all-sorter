void color(int color ){

    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(console, color);

}

void echo( char * text, int c){
    color(c);
    printf("%s",text);
    color(0);
}
