void autoCreateResultMenu(int * elements){

    clearScreen();
    header();

    echo("\nSua lista:\n",DEFAULT_COLOR);
    color(DEFAULT_COLOR);
    printElements();

    echo("\nPRESSIONE QUALQUER TECLA PARA PROSSEGUIR",DEFAULT_COLOR);
    getche();
}
