#include "../headers/element.h"

int count_elements = 0;
int * elements;

void addElementAtEnd(int element){
    int i;
    int * aux_element;
    aux_element = (int*) malloc(getElementCount() * sizeof(int));
    if(aux_element == NULL){
        printf("There's not enough space to add \"%i\"!",element);
    }

    for(i = 0 ; i<=getElementCount()-1;i++){

        aux_element[i] = elements[i];

    }

    free(elements);
    elements = (int*) malloc((getElementCount() +1) * sizeof(int));
    if(elements == NULL){
        printf("There's not enough space to add \"%i\"!",element);
    }

    for(i = 0 ; i<=getElementCount()-1;i++){

        elements[i] = aux_element[i];

    }


    elements[getElementCount()] = element;
    count_elements++;
}

void addFirstElement(int element){

    elements = (int*) malloc(sizeof(int));

    if(elements == NULL){
        printf("There's not enough space to add \"%i\"!",element);
    }

    elements[0] = element;
    count_elements++;
    return;

}

void addElement(int element){

    if(getElementCount() == 0){

        addFirstElement(element);
        return;

    }


    addElementAtEnd(element);
    return;
}

int getElementCount(){

    return count_elements;

}

void printElements(){
    int i;
    for(i=0;i<=count_elements-1;i++){

        printf("%i\n",elements[i]);
    }

}

int * elementRevertPos(int* elements,int pos_1, int pos_2){

    int aux = elements[pos_1];
    elements[pos_1] = elements[pos_2];
    elements[pos_2] = aux;

}
