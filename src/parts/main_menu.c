int mainMenu(){
    int main_color = DEFAULT_COLOR;
    int auto_color = DEFAULT_COLOR;
    int manual_color = DEFAULT_COLOR;
    int exit_color = DEFAULT_COLOR;
    int exit = 0;
    int selected = 1;
    int key = 0;

    do{
        header();

        if(selected == 1){
            auto_color = SELECTED_COLOR;
            exit_color = DEFAULT_COLOR;
            manual_color = DEFAULT_COLOR;
        }

        if(selected == 2){
            manual_color = SELECTED_COLOR;
            exit_color = DEFAULT_COLOR;
            auto_color = DEFAULT_COLOR;
        }

        if(selected == 3){


            exit_color = SELECTED_COLOR;
             manual_color = DEFAULT_COLOR;
            auto_color = DEFAULT_COLOR;

        }

        echo(" ===================\n",main_color);
        echo("|   GERAR NUMEROS   |\n",main_color);
        echo("|===================|\n",main_color);
        echo("|  AUTOMATICAMENTE  |\n",auto_color);
        echo("|===================|\n",main_color);
        echo("|    MANUALMENTE    |\n",manual_color);
        echo("|===================|\n",main_color);
        echo("|       SAIR        |\n",exit_color);
        echo("|===================|\n",main_color);

        key = getch();

        switch(key){
            case 13: //enter
                exit = 1;
                break;
            case 72: // up arrow key
                selected --;
                break;
            case 80: //down arrow key
                selected ++;
                break;
        }

        if(selected < 1){
            selected = 3;
        }

        if(selected > 3){
            selected = 1;
        }

        system("CLS");

    }while(exit == 0);

    return selected;

}
