#include <stdio.h>

int main() {
    long int A = 256;
    char B = 'A';

    // Test 1 : B + 1
    printf("B + 1 : %d\n", B + 1);

    // Test 2 : B = 65
    B = 65;
    printf("B = 65 : %c\n", B);

    // Test 3 : B++
    B++;
    printf("B++ : %c\n", B);

    // Test 4 : B + '1'
    printf("B + '1' : %d\n", B + '1');

    // Test 5 : B == 65
    printf("B == 65 : %d\n", B == 65);

    // Test 6 : ++B
    printf("++B : %c\n", ++B);

    // Test 7 : B + A
    printf("B + A : %ld\n", B + A);

    // Test 8 : B = 256
    /* 
    B = 256;
    printf("B = 256 : %c\n", B);
    */

    // Test 9 : B = 255
    B = 255;
    printf("B = 255 : %c\n", B);

    return 0;
}