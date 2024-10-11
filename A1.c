#include <stdio.h> 




void main() {

    int i, j;

    
    printf_s("    ");
    for (i = 1; i <= 10; i++) {
        printf_s("%4d", i);
    }
    printf_s("\n");

   
    printf_s("   -----------------------------------------\n");

    
    for (i = 1; i <= 10; i++) {
       
        printf_s("%2d |", i);


        for (j = 1; j <= 10; j++) {
            printf_s("%4d", i * j);
        }
        printf_s("\n");
    }

    
}





