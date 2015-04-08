void operationMenu(){
    int selected = 1;
    int exit = 0;
    do{
        int bubble_color = DEFAULT_COLOR;
        int heap_color = DEFAULT_COLOR;
        int insertion_color = DEFAULT_COLOR;
        int quick_color = DEFAULT_COLOR;
        int selection_color = DEFAULT_COLOR;
        int shell_color = DEFAULT_COLOR;
        int voltar_color = DEFAULT_COLOR;



        switch(selected){

        case 1:
            bubble_color = SELECTED_COLOR;
            break;
        case 2:
            heap_color = SELECTED_COLOR;
            break;
        case 3:
            insertion_color = SELECTED_COLOR;
            break;
        case 4:
            quick_color = SELECTED_COLOR;
            break;
        case 5:
            selection_color = SELECTED_COLOR;
            break;
        case 6:
            shell_color = SELECTED_COLOR;
            break;
        case 7:
            voltar_color = SELECTED_COLOR;
            break;

        }

        system("CLS");
        header();
        echo(" ===================\n",DEFAULT_COLOR);
        echo("|     ORDERNAR      |\n",DEFAULT_COLOR);
        echo("|===================|\n",DEFAULT_COLOR);
        echo("|    BUBBLE SORT    |\n",bubble_color);
        echo("|===================|\n",DEFAULT_COLOR);
        echo("|     HEAP SORT     |\n",heap_color);
        echo("|===================|\n",DEFAULT_COLOR);
        echo("|  INSERTION SORT   |\n",insertion_color);
        echo("|===================|\n",DEFAULT_COLOR);
        echo("|    QUICK SORT     |\n",quick_color);
        echo("|===================|\n",DEFAULT_COLOR);
        echo("|  SELECTION SORT   |\n",selection_color);
        echo("|===================|\n",DEFAULT_COLOR);
        echo("|     SHELL SORT    |\n",shell_color);
        echo("|===================|\n",DEFAULT_COLOR);
        echo("|      VOLTAR       |\n",voltar_color);
        echo("|===================|\n",DEFAULT_COLOR);

        int key = getch();

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
            selected = 7;
        }

        if(selected > 7){
            selected = 1;
        }
    }while(exit == 0);

    return selected;
}
