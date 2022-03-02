#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  int menu, sub_menu1, categoria;
  int score = 0;
  int seguir = 0;
  char prueba;
  int respuesta;

  printf("\n\n\t Bienvenido a ¿Eres más listo que un niño de quinto grado?\n\n");
  printf("Las preguntas se desplegarán una por una, digite el número de la "
  "respuesta ha seleccionar, cada respuesta correcta son +10 puntos\n");

  while (seguir == 0)
  {
    score = 0;
    printf("Seleccione el número de la opción deseada: \n");
    printf("1. Empezar\n");
    printf("2. Tabla de puntuaciones\n");
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
      }//fin del else if 1
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

      }//fin del else if 2
      else if (categoria == 3){

        // ************** Pregunta 1 *************************

        printf("\t ¿Cuál fue el primer país en aprobar el sufragio de la mujer? \n\n");
        printf("1. Nueva Zelanda");
        printf("\t\t 2. España\n");
        printf("3. Dinamarca");
        printf("\t\t\t 4. Alemania\n");

        scanf(" %d", &respuesta);

        if (respuesta == 1){
          score += 10;
        } else {
          printf("Respuesta incorrecta\n");
        }

        // ************** Pregunta 2 *************************

        printf("\t ¿En qué año llegó el hombre a la Luna? \n\n");
        printf("1. 1982");
        printf("\t\t 2. 1957\n");
        printf("3. 1969");
        printf("\t\t 4. 1977\n");

        scanf(" %d", &respuesta);

        if (respuesta == 3){
          score += 10;
        } else {
          printf("Respuesta incorrecta\n");
        }
        // ************** Pregunta 3 *************************

        printf("\t ¿Qué suceso marca el final de la Edad Antigua y el inicio de la Edad Media? \n\n");
        printf("1. La caída del imperio romano de Occidente");
        printf("\t\t 2. La agricultura\n");
        printf("3. Uso del bronce");
        printf("\t\t\t\t\t 4. La máquina de vapor\n");

        scanf(" %d", &respuesta);

        if (respuesta == 1){
          score += 10;
        } else {
          printf("Respuesta incorrecta\n");
        }
        // ************** Pregunta 4 *************************

        printf("\t ¿Qué carabela no regresó del primer viaje de Colón al Nuevo Mundo? \n\n");
        printf("1. La Niña");
        printf("\t\t 2. La Santa María\n");
        printf("3. La pinta");
        printf("\t\t 4. Todas regresaron\n");

        scanf(" %d", &respuesta);

        if (respuesta == 2){
          score += 10;
        } else {
          printf("Respuesta incorrecta\n");
        }
        // ************** Pregunta 5 *************************

        printf("\t ¿Cuál es la narración épica más antigua de la historia? \n\n");
        printf("1. Odisea");
        printf("\t\t 2. La Iliada\n");
        printf("3. Shahnameh");
        printf("\t\t 4. La Epopeya de Gilgamesh\n");

        scanf(" %d", &respuesta);

        if (respuesta == 4){
          score += 10;
        } else {
          printf("Respuesta incorrecta\n");
        }
        // **************** FINAL *****************************************************
        printf("\n\n\n\t\t\t Tu score es: %d \n\n\n\n", score);

      }// fin else if 3
      else if (categoria == 4){
        // ************** Pregunta 1 *************************

        printf("\t ¿Cómo se llama la protagonista de la saga Tomb Raider? \n\n");
        printf("1. Akira");
        printf("\t 2. Lara Croft\n");
        printf("3. Jean");
        printf("\t\t 4. Angela\n");

        scanf(" %d", &respuesta);

        if (respuesta == 2){
          score += 10;
        } else {
          printf("Respuesta incorrecta\n");
        }
        // ************** Pregunta 2 *************************

        printf("\t ¿Cual fue el juego de celular que recaudó más dinero en 2021? \n\n");
        printf("1. Epic Seven");
        printf("\t\t 2. Summoners War\n");
        printf("3. Clash of Clans");
        printf("\t 4. Genshin Impact\n");

        scanf(" %d", &respuesta);

        if (respuesta == 4){
          score += 10;
        } else {
          printf("Respuesta incorrecta\n");
        }
        // ************** Pregunta 3 *************************

        printf("\t ¿Cual es considerado el primer videojuego de la historia? \n\n");
        printf("1. Pong");
        printf("\t\t\t 2. Asteroids\n");
        printf("3. Tennis for two");
        printf("\t 4. Tetris\n");

        scanf(" %d", &respuesta);

        if (respuesta == 3){
          score += 10;
        } else {
          printf("Respuesta incorrecta\n");
        }
        // ************** Pregunta 4 *************************

        printf("\t ¿Cual es la consola más vendida de la historia? \n\n");
        printf("1. Play Station 2");
        printf("\t\t 2. Game Boy\n");
        printf("3. Nintendo DS");
        printf("\t\t\t 4. Play Station 1\n");

        scanf(" %d", &respuesta);

        if (respuesta == 1){
          score += 10;
        } else {
          printf("Respuesta incorrecta\n");
        }
        // ************** Pregunta 5 *************************

        printf("\t ¿Cual es el juego más vendido de todos los tiempos? \n\n");
        printf("1. Minecraft");
        printf("\t\t 2. Pokemon Red\n");
        printf("3. GTA V");
        printf("\t\t 4. The Witcher 3\n");

        scanf(" %d", &respuesta);

        if (respuesta == 1){
          score += 10;
        } else {
          printf("Respuesta incorrecta\n");
        }
        // **************** FINAL *****************************************************
        printf("\n\n\n\t\t\t Tu score es: %d \n\n\n\n", score);

      }// fin del else if 4

    }// fin if menu = 1

    else if (menu == 2){
      printf("Puntuaciones: \n\n");
    }
    else if (menu == 3){
      seguir = 1;
    }

  } // Fin del ciclo while principal
} // fin del main
