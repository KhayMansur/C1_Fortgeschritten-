#include <stdio.h> 



int Schaltjahr(int jahr) {
    if ((jahr % 4 == 0 && jahr % 100 != 0) || (jahr % 400 == 0)) {
        return 1; 
    }
    return 0;
}


void tagesnummer (int tag, int monat, int jahr) {
   
    int tageInMonat[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

  
    if (Schaltjahr(jahr)) {
        tageInMonat[1] = 29;
    }

    int tagesnummer = 0;
    for (int i = 0; i < monat - 1; i++) {
        tagesnummer += tageInMonat[i]; 
    }
    tagesnummer += tag; 

    
    printf_s("Der %02d.%02d.%d ist der %d. Tag dieses Jahres.\n", tag, monat, jahr, tagesnummer);
}

void main() {
    int tag, monat, jahr;

    printf_s("Geben Sie das Datum ein (dd.mm.jjjj): ");
    scanf_s("%d.%d.%d", &tag, &monat, &jahr); 

    tagesnummer (tag, monat, jahr);

   
}





