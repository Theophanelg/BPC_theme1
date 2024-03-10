#include <stdio.h>

/*
int newline() {
    putchar('\n');
}
*/

/*
int put_test_line(int n)
{
    putchar('t');
    putchar('e');
    putchar('s');
    putchar('t');
    putchar(' ');
    putchar('#');
    putdec(n);
    putchar(':');

    return 0;
}
*/

//Exercice 17
int put_digit(int entier) {
    if (entier >= 0 && entier <= 9) {
        int ascii_value = entier + '0';  
        int result = putchar(ascii_value);  
        return (result == ascii_value) ? 0 : -1;  
    } else {
        return -1;  
    }
}

//Exercice 18
int put_hdigit(int entier) {
    if (entier >= 0 && entier <= 15) {
        char hex_char;
        if (entier < 10) {
            hex_char = '0' + entier;  // Convertir le nombre hexadécimal en code ASCII
        } else {
            hex_char = 'A' + (entier - 10);  // Convertir le nombre hexadécimal en code ASCII
        }

        int result = putchar(hex_char);  // Afficher le caractère hexadécimal
        return (result == hex_char) ? 0 : -1;  // Vérifier si l'affichage a réussi
    } else {
        return -1;  // Retourner -1 en cas d'argument invalide
    }
}

//Exercice 19 : non fonctionnel
int putdec(int d) {
   
    if (d < 0) {
        putchar('-');
        d = -d;
    }

    int power = 1;
   
    while (power * 10 <= d) {
        power *= 10;
    }

    while (power > 0) {
        int digit = d / power;
        putchar('0' + digit);
        d %= power;
        power /= 10;
    }
    return 0;
}

//Exercice 21
int putbin(int bin) {
 if (bin == 0) {
    putchar('0');
    return 0;
 } else if (bin < 0) {
    return -1; 
 }

 int masque = 1 << 31;

 while ((masque & bin) == 0) {
    masque >>= 1;
 }

 while (masque != 0) {
    putchar((bin & masque) ? '1' : '0');
    masque >>= 1;
 }

 return 0;
}

//Exercice 22
int puthex(int h) {
 if (h == 0) {
    putchar('0');
    return 0;
 } else if (h < 0) {
    printf("Nombres négatifs non pris en charge.\n");
    return -1;
 }

 int shift = sizeof(int) * 2 - 4; 

 while (shift >= 0) {
    int hex_digit = (h >> shift) & 0xF; 
    putchar(hex_digit < 10 ? '0' + hex_digit : 'A' + (hex_digit - 10));
    shift -= 4; 
 }
 return 0;
}

void put_test_line(int line_number) {
    printf("Test line %d: ", line_number);
}

void newline() {
    putchar('\n');
}

int main()
{
    
    int success = put_digit(5);
    if (success == 0) {
        printf("\nAffichage du chiffre 5 avec succès.\n");
    } else {
        printf("\nErreur lors de l'affichage du chiffre 5.\n");
    }

    success = put_digit(12);
    if (success == -1) {
        printf("Erreur comme prévu : argument invalide.\n");
    } else {
        printf("Erreur inattendue lors de l'appel avec un argument invalide.\n");
    }

    success = put_hdigit(7);
    if (success == 0) {
        printf("\nAffichage du chiffre hexadécimal 7 avec succès.\n");
    } else {
        printf("\nErreur lors de l'affichage du chiffre hexadécimal 7.\n");
    }

    // Appel de la fonction avec un argument invalide
    success = put_hdigit(18);
    if (success == -1) {
        printf("Erreur comme prévu : argument invalide.\n");
    } else {
        printf("Erreur inattendue lors de l'appel avec un argument invalide.\n");
    }

    int number = -12345;
    putdec(number);


    int i=-2147483648;
    put_test_line(1); putdec(214); newline();
    put_test_line(2); putdec(-74); newline();
    put_test_line(3); putdec(1); newline();
    put_test_line(4); putdec(-1); newline();
    put_test_line(5); putdec(0); newline();
    put_test_line(6); putdec(2147483647); newline();
    put_test_line(7); putdec(-2147483648); newline();
    put_test_line(8); putdec(-(-2147483648)); newline();
    put_test_line(9); puthex(0); newline();
    put_test_line(10); puthex(10); newline();
    put_test_line(11); puthex(16); newline();
    put_test_line(12); puthex(2147483647); newline();
    put_test_line(13); puthex(-2147483648); newline();
    put_test_line(14); puthex(0xCAFEBABE); newline();
    put_test_line(15); puthex(-1); newline();
    put_test_line(16); putbin(0); newline();
    put_test_line(17); putbin(1); newline();
    put_test_line(18); putbin(-1); newline();
    put_test_line(19); putbin(2147483647); newline();
    put_test_line(20); putbin(-2147483648); newline();

    return 0;
}
