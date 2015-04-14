#include <stdio.h>
#include "src/element.c"
#include "src/sort/bubble_sort.c"
#include "src/sort/heap_sort.c"
#include "src/sort/insertion_sort.c"
#include "src/sort/quick_sort.c"
#include "src/sort/selection_sort.c"
#include "src/sort/shell_sort.c"


void createElements();
int assertEquals(int * elements, int * expected);

int main(){
    int expected[] = {0,1,2,3,7,9850,108548};

    //Is bubble sort working?
    createElements();
    elements = bubbleSort(elements);
    if(assertEquals(elements,expected) == 0)
        return 1;

    //Is heap sort working?
    createElements();
    elements = heapSort(elements);
    if(assertEquals(elements,expected) == 0)
        return 2;

    //Is insertion sort working?
    createElements();
    elements = insertionSort(elements);
    if(assertEquals(elements,expected) == 0)
        return 3;

    //Is quick sort working?
    createElements();
    elements = quickSort(elements,getElementCount());
    if(assertEquals(elements,expected) == 0)
        return 4;

    //Is selection sort working?
    createElements();
    elements = selectionSort(elements);
    if(assertEquals(elements,expected) == 0)
        return 5;

    //Is shell sort working?
    createElements();
    shellSort(elements,getElementCount());
    if(assertEquals(elements,expected) == 0)
        return 6;

	return 0;
}

void createElements(){

    free(elements);
    count_elements = 0;

    addElement(1);
    addElement(7);
    addElement(3);
    addElement(9850);
    addElement(108548);
    addElement(2);
    addElement(0);

}

int assertEquals(int * elements, int * expected){

    int size = sizeof(elements) / 4;
    int i = 0;

    for(i=0;i<=size;i++){
        if(!(elements[i] == expected[i])){
            return 0;
        }
    }

    return 1;
}
