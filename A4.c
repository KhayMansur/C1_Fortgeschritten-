#include <stdio.h>

void main() {
    double anfangskapital, zielsumme, zinssatz;
    int jahre = 0;

    
    printf_s("Geben Sie das Anfangskapital ein: ");
    scanf_s("%lf", &anfangskapital);

    
    printf_s("Geben Sie den j�hrlichen Zinssatz in Prozent ein: ");
    scanf_s("%lf", &zinssatz);

   
    printf_s("Geben Sie die Zielsumme ein: ");
    scanf_s("%lf", &zielsumme);

    
    double kapital = anfangskapital;
    while (kapital < zielsumme) {
        kapital += kapital * (zinssatz / 100); 
        jahre++;  
    }

   
    printf("Es dauert %d Jahre, bis das Kapital die Zielsumme von %.2lf erreicht oder �berschreitet.\n", jahre, zielsumme);
}