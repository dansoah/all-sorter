#include <stdio.h>
#ifdef _WIN32
    #include <windows.h>
#endif
#include "src/element.c"

#define DEFAULT_COLOR 15
#define SELECTED_COLOR 127

//Sorting
#include "src/sort/bubble_sort.c"
#include "src/sort/heap_sort.c"
#include "src/sort/insertion_sort.c"
#include "src/sort/quick_sort.c"
#include "src/sort/selection_sort.c"
#include "src/sort/shell_sort.c"
//System Dependent
#ifdef _WIN32
    #include "src/utils/lib_win.c"
#elif _linux_
    #include "src/utils/lib_linux.c"
#else
    #ERROR "OS not suported! :("
#endif
//Style
#include "src/style/writing.c"
//Parts
#include "src/parts/header.c"
#include "src/parts/main_menu.c"
#include "src/parts/operation_menu.c"
#include "src/parts/manual_menu.c"
#include "src/parts/sort_result_menu.c"
#include "src/parts/auto_create_result_menu.c"

int main(){

    srand (time(NULL));

    int exit = 0;

    do{
        clearScreen();
        free(elements);
        count_elements = 0;
        int number_generation = mainMenu();

        if(number_generation == 3){
            return 0;
        }

        int element_create_count;
        int i;
        int element;
        switch(number_generation){
            case 1:

                element_create_count = rand();
                while(element_create_count > 100){
                    element_create_count = rand();
                }

                color(DEFAULT_COLOR);
                for(i = 0; i<=element_create_count-1;i++){
                    element = rand();
                    addElement(element);
                }
                autoCreateResultMenu(elements);
                break;
            case 2:

                 manualMenu();
                 break;

        }

        int method = operationMenu();

        switch(method){
            case 1:
                 elements = bubbleSort(elements);
                break;
            case 2:
                 elements = heapSort(elements);
                break;
            case 3:
                 elements = insertionSort(elements);
                break;
            case 4:
                 elements = quickSort(elements,getElementCount());
                break;
            case 5:
                 elements = selectionSort(elements);
                break;
            case 6:
                 shellSort(elements,getElementCount());
                break;
            case 7:
                break;

        }

        sortResultMenu(elements);

    }while(exit == 0);

    return 0;

}
