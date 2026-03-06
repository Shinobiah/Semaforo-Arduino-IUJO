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

1. La Definición 📝
void actualizarSemaforos(int v1, int a1, int r1, int az1, ...)

void: La funcion hace el trabajo de (encender luces). Solo actúa. 🛠️

Los nombres entre paréntesis (v1, a1, r1...): Son  variables. Cuando se usa la función, se interpreta "En v1 pon un 1, en a1 pon un 0", etc. 📥

Leyenda:
v = Verde 🟢

a = Amarillo 🟡

r = Rojo 🔴

az = Azul (Peatonal) 🔵

2. El Cuerpo de la Función 🏗️

digitalWrite(13, v1);: Le dice al Pin 13 (Verde del primer semáforo) que se ponga en el estado que se coloco (HIGH o LOW). ⚡

Los Grupos: La función está organizada para que  saber exactamente qué cable se esta tocando:

Grupo 1 (Pines 13 al 10): Controla el primer semáforo. 🚦

Grupo 2 (Pines 9 al 6): Controla el segundo semáforo. 🚦

Grupo 3 (Pines 5 al 2): Controla el tercer semáforo. 🚦


