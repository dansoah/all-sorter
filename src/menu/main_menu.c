int menu_inicial(){

    int main_color = 15;
    int auto_color = 15;
    int manual_color = 15;
    int exit = 0;
    int selected = 1;
    int key = 0;

    do{
        header();

        if(selected == 1){
            auto_color = SELECTED_COLOR;
            manual_color = DEFAULT_COLOR;
        }

        if(selected == 2){
            manual_color = SELECTED_COLOR;
            auto_color = DEFAULT_COLOR;
        }

        echo(" ===================\n",main_color);
        echo("|   GERAR NUMEROS   |\n",main_color);
        echo("|===================|\n",main_color);
        echo("|  AUTOMATICAMENTE  |\n",auto_color);
        echo("|===================|\n",main_color);
        echo("|    MANUALMENTE    |\n",manual_color);
        echo("|===================|\n",main_color);

        key = getch();

        switch(key){
            case 13: //enter
                exit = 1;
                break;
            case 72: // up arrow key
                if(selected == 1){

                    selected = 2;

                }else{

                    selected = 1;

                }
                break;
            case 80: //down arrow key
                if(selected == 2){

                    selected = 1;

                }else{

                    selected = 2;

                }
                break;


        }

        system("CLS");

    }while(exit == 0);

    return selected;

}
