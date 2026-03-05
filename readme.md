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
