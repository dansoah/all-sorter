int * bubbleSort(int * elements){

    int i;
    int j;
    int total_elements = getElementCount();

    for(i=0; i < (total_elements);i++){

        for(j=0;j < (total_elements - i - 1);j++){

            if(elements[j] > elements[j+1]){

                elements = elementRevertPos(elements, i, (j+1));

            }

        }

    }

    return elements;

}
