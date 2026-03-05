// Definicion de los pines 
int s1[] = {13, 12, 11, 10}; // Verde, Amarillo, Rojo, Azul
int s2[] = {9, 8, 7, 6};    // Verde, Amarillo, Rojo, Azul
int s3[] = {5, 4, 3, 2};    // Verde, Amarillo, Rojo, Azul

void setup() {
  /*Configurar pines del 2 al 13 como salida como un bucle para optimizar y reducir la cantidad de veces
  que toca escribir pinmode OUTPUT*/
  for (int i = 2; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
}