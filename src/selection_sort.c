int * selectionSort(int * elements){

    int i;
    int j;
    int lowest_element;
    int aux;

    for(i=0;i<=getElementCount()-1;i++){

        lowest_element = i;
        for(j=i+1;j<getElementCount();j++){
            if(elements[lowest_element] > elements[j]){

                lowest_element = j;

            }//who's bigger?

            //Something changed?
            if(lowest_element != i){
                elementRevertPos(&elements, i, lowest_element);
            }

        }//for(j=i+1;j<getElementCount();j++)

    }//for(i=0;i<=getElementCount()-1;i++)

    return elements;

}
