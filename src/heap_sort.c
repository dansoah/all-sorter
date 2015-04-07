#include <stdio.h>
#include <stdlib.h>

void heapSort(int *arr, int len){
	int filho, idx, temp;

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
}





//==================  Teste  =================
int main(){
	int v1[] = { 5, 11, 12, 32, 7, 47, 8, 23, 15, 16 };
	int v2[] = { 111, 34, 54, 66, 23, 324, 54, 23, 67, 56, 878, 8 };
	int v3[] = { 12, 43, 56, 22 };
	int x = 0;
	
	for( x = 0 ; x < sizeof(v1)/sizeof(int) ; x++ )
		printf(" %3d ,", v1[x] );
	printf("\n");
	heapSort( v1, sizeof(v1)/sizeof(int) );
	for( x = 0 ; x < sizeof(v1)/sizeof(int) ; x++ )
		printf(" %3d ,", v1[x] );
	printf("\n\n");
	
	for( x = 0 ; x < sizeof(v2)/sizeof(int) ; x++ )
		printf(" %3d ,", v2[x] );
	printf("\n");
	heapSort( v2, sizeof(v2)/sizeof(int) );
	for( x = 0 ; x < sizeof(v2)/sizeof(int) ; x++ )
		printf(" %3d ,", v2[x] );
	printf("\n\n");
	
	for( x = 0 ; x < sizeof(v3)/sizeof(int) ; x++ )
		printf(" %3d ,", v3[x] );
	printf("\n");
	heapSort( v3, sizeof(v3)/sizeof(int) );
	for( x = 0 ; x < sizeof(v3)/sizeof(int) ; x++ )
		printf(" %3d ,", v3[x] );
	printf("\n\n");
	
}
