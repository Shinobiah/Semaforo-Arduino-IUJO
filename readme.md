# 🚦 Proyecto: Simulación de Semáforos Triple con Arduino

En este proyecto tenemos 3 canales de semaforos los cuales estan configurados para que solo pueda estar un canal abierto
(es decir un canal con semaforo verde, mientras los demas permanecen bloqueados para vehiculos pero con paso peatonal)

## 👥 Integrantes del Equipo
| **Luis Teran** |
| **Sarath Mendoza** |
| **Maria Victoria** |
| **Eichner Lunar** |
| **Angel Gomez** |

## 🛠️ Detalles del Circuito
Se va a utilizar una función `actualizarSemaforos()` que recibe 12 parámetros (0 o 1) que nos permite controlar
el flujo de los semaforos

1.  **Fase 1:** Semáforo 1 en Verde (S2 y S3 en Rojo+Azul).
2.  **Fase 2:** Semáforo 2 en Verde (S1 y S3 en Rojo+Azul).
3.  **Fase 3:** Semáforo 3 en Verde (S1 y S2 en Rojo+Azul).

### Conexión de Pines:
* **S1:** Pines 13, 12, 11, 10
* **S2:** Pines 9, 8, 7, 6
* **S3:** Pines 5, 4, 3, 2




## 🚥 Funcionamiento de los semaforos con funcion auxiliar

🎮// Función auxiliar para controlar los 12 LEDs sin errores

void actualizarSemaforos(int v1, int a1, int r1, int az1, int v2, int a2, int r2, int az2, int v3, int a3, int r3, int az3) {

// Grupo 1

digitalWrite(13, v1); digitalWrite(12, a1); digitalWrite(11, r1); digitalWrite(10, az1);

// Grupo 2

digitalWrite(9, v2); digitalWrite(8, a2); digitalWrite(7, r2); digitalWrite(6, az2);

// Grupo 3

digitalWrite(5, v3); digitalWrite(4, a3); digitalWrite(3, r3); digitalWrite(2, az3);

}
