#include <stdio.h>
#include <math.h> 

float square(float n) {
 return n * n;
}

int is_within_distance(float x1, float y1, float x2, float y2, float dist) {
 float distance_squared = square(x2 - x1) + square(y2 - y1);
 float distance = sqrt(distance_squared);

 if (distance < dist) {
 return 1;
 } else return 0;
}


int main() {
 float resultat = square(3.0); 
 printf("Le carré de 3 est : %f\n", resultat);

 float x1 = 1.0, y1 = 2.0;
 float x2 = 4.0, y2 = 6.0;
 float distance_limit = 5.0;

 int result = is_within_distance(x1, y1, x2, y2, distance_limit);

 if (result) {
 printf("Les points sont à une distance inférieure ou égale à %.2f.\n", distance_limit);
 } else {
 printf("Les points sont à une distance supérieure à %.2f.\n", distance_limit);
 }
 return 0;
}
