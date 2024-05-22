#include <cstdio>
#include <iostream>
#include <iomanip>
#include <cstring>

int main() {
    // Declaración de variables
    int digito1, digito2;
    double DINEROINGRESADO, r;
    //CONVERSION DE DOLARES
    double USDaEUR = 0.92; 
    double USDaJPY = 156.29;
    double USDaGBP = 0.79;
    //CONVERSION DE EUROS
    double EURaUSD = 1.09; 
    double EURaJPY = 169.65;
    double EURaGBP = 0.85;
     //CONVERSION DE yen japones
    double JPYaUSD = 0.0064; 
    double JPYaEUR = 0.0059;
    double JPYaGBP = 0.85;
    //CONVERSION DE libra estarlina
    double GBPaUSD = 1.27; 
    double GBPaEUR = 1.17;
    double GBPaJPY = 0.85;
    
    

    
    printf("\n                  BIENVENIDO AL CONVERTIDOR DE DINERO:\n ");
   
    printf("\nLA CONVERSION SE TOMARA EN CUENTA CON LOS VALORES DE LA SIGUIENTE TABLA:\n\n\n");
    // IMPIRMO LA TABLA DE LOS VALORES DEL VALOR...............................
    printf("%10s%10s%10s%10s%10s\n", "", "USD", "EUR", "JPY", "GBP");
    printf("%10s%10.2f%10.2f%10.2f%10.2f\n", "USD", 1.00, USDaEUR, USDaJPY, USDaGBP);
    printf("%10s%10.2f%10.2f%10.2f%10.2f\n", "EUR", EURaUSD, 1.00, EURaJPY, EURaGBP);
    printf("%10s%10.4f%10.4f%10.2f%10.2f\n", "JPY", JPYaUSD, JPYaEUR, 1.00, JPYaGBP);
    printf("%10s%10.2f%10.2f%10.2f%10.2f\n", "GBP", GBPaUSD, GBPaEUR, GBPaJPY, 1.00);
   
   
    // MENU
    printf("\n\n\nMENU:\n");
    printf("\n1. DOLAR ESTADOUNIDENSE\n2. EURO\n3. YEN JAPONES\n4. LIBRA ESTERLINA\n");
    // Solicitar eleccion
    printf("\ningrese una opcion: ");
    scanf("%d", &digito1);
    
    //conversion de DOLAR a .......
    if (digito1 == 1) {
    
               // Solicitar eleccion
                printf("\nDESEA CONVERTIR A:\n");
                printf("\n1. EURO\n2. YEN JAPONES\n3. LIBRA ESTERLINA\n");
                printf("\ningrese una opcion: ");
                scanf("%d", &digito2);  
                // INGRESARA LA CANTIDAD DE DINERO QUE DESEA CONVERTIR
                printf("\nINGRESE LA CANTIDAD DE DINERO QUE DESEA CONVERTIR:\n");
                scanf("%lf", &DINEROINGRESADO); // Cambio de %d a %lf para leer un double
                // USD A EUR
                if (digito2 == 1) {
                r = DINEROINGRESADO * USDaEUR;
                printf("\nEl VALOR EN EUROS ES: %.2f EUR\n", r);
                printf("\n>>>>>>>>>>ESPERO HABER SIDO DE UTILIDAD<<<<<<<<<<\n\n\n");
                } 
                // USD A  JPY
                else if (digito2 == 2) {
                r = DINEROINGRESADO * USDaJPY;
                printf("\nEl VALOR EN YEN JAPONES ES: %.2f JPY\n", r);
                printf("\n>>>>>>>>>>ESPERO HABER SIDO DE UTILIDAD<<<<<<<<<<\n\n\n");
                    } 
   
                else if (digito2 == 3) {
                r = DINEROINGRESADO * USDaGBP;
                printf("\nEl VALOR EN LIBRA ESTERLINA ES: %.2f GBP\n", r);
                printf("\n>>>>>>>>>>ESPERO HABER SIDO DE UTILIDAD<<<<<<<<<<\n\n\n");
               } 
                else {
                printf( "OPCION INCORRECTA.\n");
               }
    
    //conversion de EUROS a ....... 
    }else if (digito1 == 2) {
        
        
               // Solicitar eleccion
                printf("\nDESEA CONVERTIR A:\n");
                printf("\n1. DOLAR\n2. YEN JAPONES\n3. LIBRA ESTERLINA\n");
                printf("\ningrese una opcion: ");
                scanf("%d", &digito2);  
                // INGRESARA LA CANTIDAD DE DINERO QUE DESEA CONVERTIR
                printf("\nINGRESE LA CANTIDAD DE DINERO QUE DESEA CONVERTIR:\n");
                scanf("%lf", &DINEROINGRESADO); // Cambio de %d a %lf para leer un double
                // USD A EUR
                if (digito2 == 1) {
                r = DINEROINGRESADO * EURaUSD;
                printf("\nEl VALOR EN DOLARES ES: %.2f USD\n", r);
                printf("\n>>>>>>>>>>ESPERO HABER SIDO DE UTILIDAD<<<<<<<<<<\n\n\n");
                } 
                // USD A  JPY
                else if (digito2 == 2) {
                r = DINEROINGRESADO * EURaJPY;
                printf("\nEl VALOR EN YEN JAPONES ES: %.2f JPY\n", r);
                printf("\n>>>>>>>>>>ESPERO HABER SIDO DE UTILIDAD<<<<<<<<<<\n\n\n");
                    } 
   
                else if (digito2 == 3) {
                r = DINEROINGRESADO * EURaGBP;
                printf("\nEl VALOR EN LIBRA ESTERLINA ES: %.2f GBP\n", r);
                printf("\n>>>>>>>>>>ESPERO HABER SIDO DE UTILIDAD<<<<<<<<<<\n\n\n");
               } 
                else {
                printf( "OPCION INCORRECTA.\n");
               }
    
    //conversion de YEN JAPONES a ....... 
    }else if (digito1 == 3) {
        
        
               // Solicitar eleccion
                printf("\nDESEA CONVERTIR A:\n");
                printf("\n1. DOLAR\n2. EURO\n3. LIBRA ESTERLINA\n");
                printf("\ningrese una opcion: ");
                scanf("%d", &digito2);  
                // INGRESARA LA CANTIDAD DE DINERO QUE DESEA CONVERTIR
                printf("\nINGRESE LA CANTIDAD DE DINERO QUE DESEA CONVERTIR:\n");
                scanf("%lf", &DINEROINGRESADO); // Cambio de %d a %lf para leer un double
                // JPY A USD
                if (digito2 == 1) {
                r = DINEROINGRESADO * JPYaUSD;
                printf("\nEl VALOR EN DOLARES ES: %.2f USD\n", r);
                printf("\n>>>>>>>>>>ESPERO HABER SIDO DE UTILIDAD<<<<<<<<<<\n\n\n");
                } 
                // JPY A  EUR
                else if (digito2 == 2) {
                r = DINEROINGRESADO * JPYaEUR;
                printf("\nEl VALOR EN EUROS ES: %.2f EUR\n", r);
                printf("\n>>>>>>>>>>ESPERO HABER SIDO DE UTILIDAD<<<<<<<<<<\n\n\n");
                    } 
                // JPY A  GBP
                else if (digito2 == 3) {
                r = DINEROINGRESADO * JPYaGBP;
                printf("\nEl VALOR EN LIBRA ESTERLINA ES: %.2f GBP\n", r);
                printf("\n>>>>>>>>>>ESPERO HABER SIDO DE UTILIDAD<<<<<<<<<<\n\n\n");
               } 
                else {
                printf( "OPCION INCORRECTA.\n");
               }
               
    }else if (digito1 == 4) {
        
        
               // Solicitar eleccion
                printf("\nDESEA CONVERTIR A:\n");
                printf("\n1. DOLAR\n2. EURO\n3. YEN JAPONES\n");
                printf("\ningrese una opcion: ");
                scanf("%d", &digito2);  
                // INGRESARA LA CANTIDAD DE DINERO QUE DESEA CONVERTIR
                printf("\nINGRESE LA CANTIDAD DE DINERO QUE DESEA CONVERTIR:\n");
                scanf("%lf", &DINEROINGRESADO); // Cambio de %d a %lf para leer un double
                // JPY A USD
                if (digito2 == 1) {
                r = DINEROINGRESADO * GBPaUSD;
                printf("\nEl VALOR EN DOLARES ES: %.2f USD\n", r);
                printf("\n>>>>>>>>>>ESPERO HABER SIDO DE UTILIDAD<<<<<<<<<<\n\n\n");
                } 
                // JPY A  EUR
                else if (digito2 == 2) {
                r = DINEROINGRESADO * GBPaEUR;
                printf("\nEl VALOR EN EUROS ES: %.2f EUR\n", r);
               printf("\n>>>>>>>>>>ESPERO HABER SIDO DE UTILIDAD<<<<<<<<<<\n\n\n");
                    } 
                // JPY A  GBP
                else if (digito2 == 3) {
                r = DINEROINGRESADO * GBPaJPY;
                printf("\nEl VALOR EN YEN JAPONES ES: %.2f JPY\n", r);
                printf("\n>>>>>>>>>>ESPERO HABER SIDO DE UTILIDAD<<<<<<<<<<\n\n\n");
               } 
                else {
                printf( "OPCION INCORRECTA.\n");
               }
    
    }else {
        printf( "opcion invalida. Por favor, selecciona una opcion valida.\n");
    }

    return 0;
}
