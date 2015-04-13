 void manualMenu(){
     
     int finish = 0;
     int number_total = 0;
     int number = 0;
     char confirmation = 'n';
     int i = 0;
     
     do{
         
         clearScreen();
         header();   
         
         echo("Quantos numeros serao inseridos?\n:",DEFAULT_COLOR);
         color(DEFAULT_COLOR);
         scanf("%d",&number_total);
         echo("\n",DEFAULT_COLOR);
         
         
         
         for(i = 1;i<=number_total;i++){
             
             color(DEFAULT_COLOR);
             printf("Insira o numero #%i: ",i);
             scanf("%d",&number);
             addElement(number);       
                 
         }
         
         do{
             clearScreen();
             header();
             color(DEFAULT_COLOR);
             printElements();
             echo("A lista está correta? [S/N]",DEFAULT_COLOR);
             color(DEFAULT_COLOR);
             scanf("%c", &confirmation);
             
         }while(confirmation != 'S' && confirmation != 'N');
         
         if(confirmation == 'S')
             finish = 1;
     
     }while(finish == 0);
     
     

}
