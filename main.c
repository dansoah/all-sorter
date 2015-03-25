#include <stdio.h>
#include "src/element.c"
#include "src/selection_sort.c"

int main(){

    srand (time(NULL));

    int element_create_count = rand();
    int i;
    int element;

    for(i = 0; i<=element_create_count-1;i++){
        element = rand();
        addElement(element);
    }

    printElements();
    printf("total: %i\n\n",element_create_count);
    
    return 0;
}
