# Validador de Contraseñas (Parte 1)

Programa en C++ diseñado para evaluar la seguridad de una contraseña ingresada por el usuario mediante reglas de complejidad.

---

## Descripcion del Proyecto

El programa solicita una contraseña y verifica que cumpla con 4 criterios fundamentales de seguridad:

1. Longitud minima de 8 caracteres.
2. Al menos una letra mayuscula.
3. Al menos un numero.
4. Al menos un caracter especial de la lista: ! @ # $ % & *

Al finalizar, calcula un puntaje de 0 a 4 y determina el nivel de seguridad:

* 0 a 2 reglas: DEBIL
* 3 reglas: MEDIA
* 4 reglas: FUERTE

---

## Tecnicas Utilizadas

* Uso de la libreria cctype con las funciones isupper e isdigit para validar mayusculas y numeros.
* Búsqueda eficiente de caracteres especiales mediante el metodo find.
* Suma directa de variables booleanas para calcular el puntaje total.

---

## Instrucciones de Compilacion y Ejecucion

1. Abrir la terminal en la carpeta donde se encuentra el archivo parte1_pro.cpp.
2. Compilar el codigo con el siguiente comando:
g++ parte1_pro.cpp -o validador
3. Ejecutar el programa:
* En Windows: validador.exe
* En Linux o Mac: ./validador
