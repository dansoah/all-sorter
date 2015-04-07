int * bubbleSort(int * elements){

    int i;
    int j;
    int lowest_element;
    int total_elements = getElementCount();

    for(i=total_elements -1; i>=1;i--){

        for(j=0;j<=1;j++){

            if(elements[j] > elements[j+1]){

                elements = elementRevertPos(elements, i, (j+1));

            }

        }

    }

    return elements;

}
