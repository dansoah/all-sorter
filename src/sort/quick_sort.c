int * quickSort( int *arr , unsigned int len ){
    unsigned int    meio = len >> 1 , // divisão por 2
                    antes = 0,
                    depois = len -1 ;
    int temp;

    while( antes < depois ){
        while( arr[antes] < arr[meio] ) antes++;
        while( arr[depois] > arr[meio] ) depois--;
        if( antes < depois ){
            temp = arr[antes];
            arr[antes] = arr[depois];
            arr[depois] = temp;
            antes++;
            depois--;
        }
        if( antes < len-1 ) quickSort( &(arr[antes]), len-antes );
        if( depois > 0 ) quickSort( arr, depois );
    }

    return arr;
}
