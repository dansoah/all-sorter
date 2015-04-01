int * selectionSort(int * elements){

    int i;
    int j;
    int lowest_element;
    int aux;
    int total_elements = getElementCount();

    for(i=0;i<=total_elements-1;i++){
        lowest_element = i;
        for(j=(i+1);j<total_elements;j++){
            if(elements[j] < elements[lowest_element]){

                lowest_element = j;

            }//who's bigger?

            //Something changed?
            if(lowest_element != i){
                elements = elementRevertPos(elements, i, lowest_element);
            }

        }//for(j=i+1;j<getElementCount();j++)

    }//for(i=0;i<=getElementCount()-1;i++)

    return elements;

}
