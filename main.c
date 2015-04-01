#include <stdio.h>
#include "src/element.c"
#include "src/selection_sort.c"

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
    selectionSort(elements);
    printElements();
    return 0;
}
