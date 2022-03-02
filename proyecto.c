#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  int menu, sub_menu1, categoria;
  int score = 0;
  int seguir = 0;
  char prueba;
  int respuesta;

  while (seguir == 0)
  {
    score = 0;
    printf("\n\n\t Bienvenido al juego de ¿Quien quiere ser millonario?\n\n");
    printf("Las preguntas se desplegarán una por una, digite el número de la "
    "respuesta que escoja, cada respuesta correcta son +10 puntos\n");
    printf("Seleccione el número de la opción deseada: \n\n");
    printf("1. Empezar\n");
    // printf("2. Tabla de puntuaciones\n");
    printf("3. Salir\n");

    scanf("%d", &menu);

    if (menu == 1){

      printf("\t Seleccione la categoria en la que quiere participar: \n");
      printf("1. Ciencia y tecnología\n");
      printf("2. Anime\n");
      printf("3. Historia\n");
      printf("4. Videojuegos\n");

      scanf("%d", &categoria);

      if (categoria == 1){

        // ************** Pregunta 1 *************************

        printf("\t ¿Cuál de las sisguientes enfermedades ataca al higado? \n\n");
        printf("1. Hepatitis");
        printf("\t 2. Diabetes\n");
        printf("3. Artrósis");
        printf("\t 4. Cifoescoliosis\n");

        scanf(" %d", &respuesta);

        if (respuesta == 1){
          score += 10;
        } else {
          printf("Respuesta incorrecta\n");
        }

        // ************** Pregunta 2 *************************

        printf("\t ¿Cuántas caras tiene un icosaedro? \n\n");
        printf("1. 16");
        printf("\t 2. 20\n");
        printf("3. 8");
        printf("\t 4. 24\n");

        scanf(" %d", &respuesta);

        if (respuesta == 2){
          score += 10;
        } else {
          printf("Respuesta incorrecta\n");
        }

        // ************** Pregunta 3 *************************

        printf("\t  ¿Con que parte del cuerpo hacen el zumbido las abejas? \n\n");
        printf("1. Con las patas");
        printf("\t 2. Con la boca\n");
        printf("3. Con las alas");
        printf("\t\t 4. Con las antenas\n");

        scanf(" %d", &respuesta);

        if (respuesta == 3){
          score += 10;
        } else {
          printf("Respuesta incorrecta\n");
        }
        // ************** Pregunta 4 *************************

        printf("\t ¿Qué estudia la icitología? \n\n");
        printf("1. Los insectos");
        printf("\t 2. Las erupciones cutáneas\n");
        printf("3. Las rocas");
        printf("\t 4. Los peces\n");

        scanf(" %d", &respuesta);

        if (respuesta == 4){
          score += 10;
        } else {
          printf("Respuesta incorrecta\n");
        }
        // ************** Pregunta 5 *************************

        printf("\t ¿Qué tipo de mamífero es un conejo? \n\n");
        printf("1. Roedor");
        printf("\t 2. Lagomorfo\n");
        printf("3. Marsupial");
        printf("\t 4. Equino\n");

        scanf(" %d", &respuesta);

        if (respuesta == 2){
          score += 10;
        } else {
          printf("Respuesta incorrecta\n");
        }

// **************** FINAL *****************************************************
        printf("\n\n\n\t\t\t Tu score es: %d \n\n\n\n", score);
      }
      else if (categoria == 2){

        // ************** Pregunta 1 *************************

        printf("\t ¿Cuál es el nombre japonés de Ash Ketchum? \n\n");
        printf("1. Yuji");
        printf("\t\t 2. Shinji\n");
        printf("3. Kazuha");
        printf("\t 4. Satoshi\n");

        scanf(" %d", &respuesta);

        if (respuesta == 4){
          score += 10;
        } else {
          printf("Respuesta incorrecta\n");
        }

        // ************** Pregunta 2 *************************

        printf("\t ¿Cuál de estos no es un villano de Dragon Ball Z? \n\n");
        printf("1. Cell");
        printf("\t\t 2. Freezer\n");
        printf("3. Mr. Satan");
        printf("\t 4. Vegetta\n");

        scanf(" %d", &respuesta);

        if (respuesta == 3){
          score += 10;
        } else {
          printf("Respuesta incorrecta\n");
        }

        // **************** FINAL *****************************************************
        printf("\n\n\n\t\t\t Tu score es: %d \n\n\n\n", score);
      }
      else if (categoria == 3){

        // ************** Pregunta 1 *************************

        printf("\t ¿Cuál es el nombre japonés de Ash Ketchum? \n\n");
        printf("1. Yuji");
        printf("\t\t 2. Shinji\n");
        printf("3. Kazuha");
        printf("\t 4. Satoshi\n");

        scanf(" %d", &respuesta);

        if (respuesta == 4){
          score += 10;
        } else {
          printf("Respuesta incorrecta\n");
        }
      }
      else if (categoria == 4){
        // ************** Pregunta 1 *************************

        printf("\t ¿Cuál es el nombre japonés de Ash Ketchum? \n\n");
        printf("1. Yuji");
        printf("\t\t 2. Shinji\n");
        printf("3. Kazuha");
        printf("\t 4. Satoshi\n");

        scanf(" %d", &respuesta);

        if (respuesta == 4){
          score += 10;
        } else {
          printf("Respuesta incorrecta\n");
        }
      }

    }// fin if menu = 1
    else if (menu == 3){
      seguir = 1;
    }

  } // Fin del ciclo while principal
} // fin del main
