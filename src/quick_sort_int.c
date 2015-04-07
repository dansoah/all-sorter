#include <stdio.h>
#include <stdlib.h>

void quickSort( int *arr , unsigned int len ){
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
}


//===============  Teste  =============
int main(){
    int a1[] = { 4, -32, 53, 12, 55, 67, 22, 10 };
    int a2[] = { 32, 111, -43, 4, 675, 23, -76, 33, 124, 64, 23, -767, 22 };
    int a3[] = { -12, 44, -65, 23, 88, 34, -87, 45, 76, 33 };
    int x = 0;
    
    for(x = 0; x < sizeof(a1)/sizeof(int) ; x++ )
        printf("%4d, ", a1[x] );
    printf("\n");
    quickSort( a1 , sizeof(a1)/sizeof(int) );
    for(x = 0; x < sizeof(a1)/sizeof(int) ; x++ )
        printf("%4d, ", a1[x] );
    printf("\n\n");
    
    for(x = 0; x < sizeof(a2)/sizeof(int) ; x++ )
        printf("%4d, ", a2[x] );
    printf("\n");
    quickSort( a2 , sizeof(a2)/sizeof(int) );
    for(x = 0; x < sizeof(a2)/sizeof(int) ; x++ )
        printf("%4d, ", a2[x] );
    printf("\n\n");
    
    for(x = 0; x < sizeof(a3)/sizeof(int) ; x++ )
        printf("%4d, ", a3[x] );
    printf("\n");
    quickSort( a3 , sizeof(a3)/sizeof(int) );
    for(x = 0; x < sizeof(a3)/sizeof(int) ; x++ )
        printf("%4d, ", a3[x] );
    printf("\n\n");
    
}
