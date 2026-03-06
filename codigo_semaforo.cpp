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

void loop() {
  // --- FASE 1: Semáforo 1 en VERDE ---
  // S1: Verde / S2: Rojo+Azul / S3: Rojo+Azul
  actualizarSemaforos(1, 0, 0, 0,  0, 0, 1, 1,  0, 0, 1, 1);
  delay(5000);
  // S1: Amarillo
  actualizarSemaforos(0, 1, 0, 0,  0, 0, 1, 1,  0, 0, 1, 1);
  delay(2000);



// --- FASE 2: Sarath Mendoza. Semaforo 2 en VERDE ---
  // S1: Rojo+Azul / S2: Verde / S3: Rojo+Azul
  actualizarSemaforos(0, 0, 1, 1,  1, 0, 0, 0,  0, 0, 1, 1);
  delay(5000);
  // S2: Amarillo
  actualizarSemaforos(0, 0, 1, 1,  0, 1, 0, 0,  0, 0, 1, 1);
  delay(2000);

// --- FASE 3: Eichner Lunar, Semáforo 3 en VERDE ---
  // S1: Rojo+Azul / S2: Rojo+Azul / S3: Verde
  actualizarSemaforos(0, 0, 1, 1,  0, 0, 1, 1,  1, 0, 0, 0);
  delay(5000);
  // S3: Amarillo
  actualizarSemaforos(0, 0, 1, 1,  0, 0, 1, 1,  0, 1, 0, 0);
  delay(2000);





void actualizarSemaforos(int v1, int a1, int r1, int az1, int v2, int a2, int r2, int az2, int v3, int a3, int r3, int az3) {

// Grupo 1

digitalWrite(13, v1); digitalWrite(12, a1); digitalWrite(11, r1); digitalWrite(10, az1);

// Grupo 2

digitalWrite(9, v2); digitalWrite(8, a2); digitalWrite(7, r2); digitalWrite(6, az2);

// Grupo 3

digitalWrite(5, v3); digitalWrite(4, a3); digitalWrite(3, r3); digitalWrite(2, az3);

}

}
