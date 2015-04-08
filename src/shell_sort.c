

void shellSort( int *arr, unsigned int len ){
    int    pulo = 1,
           x, y ;
    int temp;
    while( pulo < len ) pulo = 3*pulo+1;
    while( pulo > 1 ){
        pulo /= 3;
        x = pulo;
        while( x < len ){
            temp = arr[x];
            y = x - pulo;
            while( y >= 0 && temp < arr[y] ){
                arr[ y + pulo ] = arr[y];
                y -= pulo;
            }
            arr[ y + pulo ] = temp ;
            x++;
        }
    }
    
}
