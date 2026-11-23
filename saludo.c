#include <stdio.h>

int main(void) {

    char nombre[50];
    char genero[1];

    printf("Como te llamas? ");
    scanf("%s", nombre);

    printf("Cual es tu genero? (M o F) ");
    scanf("%s", genero);

    if (genero[0] == 'M') {
        printf("Bienvenido %s a mi humilde programa", nombre);
    } else if (genero[0] == 'F') {
        printf("Bienvenida %s a mi humilde programa", nombre);
    } else {
        printf("Bienvenide %s a mi humilde programa", nombre);
    }

    return 0;
}