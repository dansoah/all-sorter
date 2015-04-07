int * insertionSort(int * elements){

    int i = 0;
    int j = 0;
    int lowest;
    int total_elements = getElementCount();

    for(i = 1; i<= total_elements; i++){

        lowest = elements[i];
        j = i - 1;

        while(j>=0 && lowest < elements[j]){
            elements[j+1] = elements[j];
            j--;
        }

        elements[j+1] = lowest;

    }

    return elements;
}

