int * heapSort(int *arr){
	int filho, idx, temp, len=getElementCount();

    while(len > 0){
        idx = len / 2;
        for(; idx >= 0; idx-- ){
			filho = idx * 2;

			if( filho >= len ) continue; // filho da esquerda
			if( arr[idx] < arr[filho] ){
				temp = arr[idx];
				arr[idx] = arr[filho];
				arr[filho] = temp;
			}

			filho++; // filho da direita
			if( filho >= len ) continue;
			if( arr[idx] < arr[filho] ){
				temp = arr[idx];
				arr[idx] = arr[filho];
				arr[filho] = temp;
			}
        }
        // coloca o maior no ultimo, e diminui o tamanho do vetor
        temp = arr[len-1];
        arr[len-1] = arr[0];
        arr[0] = temp;
        len--;
    }

    return arr;
}
