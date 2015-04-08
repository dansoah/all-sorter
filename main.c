#include <stdio.h>
#include <windows.h>
#include "src/sort/element.c"
//Sorting
#include "src/sort/bubble_sort.c"
#include "src/sort/heap_sort.c"
#include "src/sort/insertion_sort.c"
#include "src/sort/quick_sort.c"
#include "src/sort/selection_sort.c"

#define DEFAULT_COLOR 15
#define SELECTED_COLOR 127


int main(){

    srand (time(NULL));

    int element_create_count = 15;//rand();
    int i;
    int element;

    for(i = 0; i<=element_create_count-1;i++){
        element = rand();
        addElement(element);
    }

    printf("Before:\r\n");
    printElements();

    printf("\n\nAfter:\r\n");
    elements = bubbleSort(elements);
    printElements();
    return 0;
}
