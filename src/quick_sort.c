
#define quickSort( x, y ) _quickSort( x, sizeof( y[0] ), y, y+ ((sizeof( y )/sizeof( y[0] ))-1) );
/*
    Interface:
        char hook( void* objA, void* objB );
        - O valor de retorno deve ser um número.
        Quando o retorno for 2 , então objA é menor que objB
        Quando o retorno for 1 , então objA é maior que objB
        Quando o retorno for zero (ex.:  0), então objA é igual a objB
*/
void _quickSort( char (*hook)(void*,void*), int size, void* inicio, void* fim){
    void	*p1 = inicio,
			*p2 = fim,
            *pivo = ((fim+size -inicio)/size/2)*size + inicio;
	char	temp[ size ] ;

    while( p1 < p2 ){
		while( hook( p1, pivo ) == 2 ) p1+= size;
		while( hook( p2, pivo ) == 1 ) p2-= size;
        if( p1 <= p2 ){
            memcpy( temp, p1, size );
            memcpy( p1, p2, size );
            memcpy( p2, temp, size );
            p1+= size;
            p2-= size;
        }
    }
	if( p1 < fim ) _quickSort( hook, size, p1, fim );
	if( p2 > inicio ) _quickSort( hook, size, inicio, p2 );
}
//==============================================================================

