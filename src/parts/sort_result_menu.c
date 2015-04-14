void sortResultMenu(int * elements){

    clearScreen();
    header();

    color(DEFAULT_COLOR);
    printElements();

    echo("\nPRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU INICIAL",DEFAULT_COLOR);
    getche();
}
