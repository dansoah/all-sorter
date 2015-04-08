#include <stdio.h>
#include <windows.h>
#include "src/element.c"

#define DEFAULT_COLOR 15
#define SELECTED_COLOR 127


//Sorting
#include "src/sort/bubble_sort.c"
#include "src/sort/heap_sort.c"
#include "src/sort/insertion_sort.c"
#include "src/sort/quick_sort.c"
#include "src/sort/selection_sort.c"
//Style
#include "src/style/colors_win.c"
//Parts
#include "src/parts/header.c"
#include "src/parts/main_menu.c"

void itemMenu(){

    system("CLS");


}



int main(){
    srand (time(NULL));

    int exit = 0;

    do{
        int number_generation = mainMenu();

        if(number_generation == 3){
            return 0;
        }
int element_create_count = rand();
                int i;
                int element;
        switch(number_generation){
            case 1:


                for(i = 0; i<=element_create_count-1;i++){
                    element = rand();
                    addElement(element);
                }
                break;
            case 2:

                itemMenu();
                break;

        }

        operationMenu();
    }while(exit == 0);

    return 0;

}
