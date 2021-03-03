# Tarea 3

## Introducción
Las bibliotecas (libraries en inglés) son conjuntos de funciones ya convertidas a código objeto y agrupadas dentro de un archivo. Pueden ser estáticas o dinámicas. En esta tarea crearás una biblioteca de funciones que calculan distancias entre dos puntos en un plano cartesiano. Agruparemos estas funciones dentro de una biblioteca estática y dentro de una biblioteca dinámica, y crearemos un par de programas, uno que usa la biblioteca estática y el otro que usa la biblioteca dinámica.
Actividades

## 1.- Captura y conversión a código objeto de las funciones a incluir en la biblioteca

### 1.1 Captura los siguientes archivos:

Archivo 1:
```c
// Archivo: distancias.h
#ifndef _DISTANCIAS_H

#define _DISTANCIAS_H

float dlr( int, int, int, int );
int dh( int, int, int, int );
int dv( int, int, int, int );
int abs( int );

#endif
```

Archivo 2:

```c
// Archivo: dlr.c
#include <math.h>

float dlr( int x1, int y1, int x2, int y2 ) {
    float r;
    r = sqrt( pow( ( x1 - x2 ), 2) + pow( (y1 - y2 ), 2 ) );
    return r;
}
```

Archivo 3:
```c
// Archivo: dh.c

#include "distancias.h"

int dh( int x1, int y1, int x2, int y2 ) {
    int r; 
    r = abs( x1 - x2 );
    return r;
}
```

Archivo 4:
```c
// Archivo: dv.c
#include "distancias.h"

int dv( int x1, int y1, int x2, int y2 ) {
    int r; 
    r = abs( y1 - y2 );
    return r;
}
```

Archivo 5:
```c
// Archivo: abs.c

int abs( int x ) {
    if( x < 0 )
		return –x;
	else
		return x;
}
```

### 1.2 Creando los archivos objetos de las funciones de la biblioteca
Ahora vamos a generar el código objeto de cada uno de los archivos anteriores. Usa una carpeta para guardar los archivos objeto para las librerías estáticas y otra carpeta para guardar los archivos objeto para las librerías dinámicas (recuerda la opción ``-fPIC`` para cuando queramos usar librerías dinámicas) 
* dlr.c
* dh.c
* dv.c
* abs.c

## 2.- Creando las bibliotecas estática y dinámica

### 2.1 Creando la biblioteca estática
Crea el archivo ``libdistancias.a``. dentro de la carpeta donde se encuentran los archivos objetos para las librerías estáticas

Nota: Es importante que el nombre de la librería estática inicie con el prefijo ``lib`` y termine con la extensión ``.a``

### 2.2 Creando la biblioteca dinámica
Crea el archivo ``libdistancias.so``. dentro de la carpeta donde se encuentran los archivos objetos para las librerías dinámicas

**Nota:** Es importante que el nombre de la librería dinámica inicie con el prefijo ``lib`` y termine con la extensión ``.so``

## 3.- Usando las bibliotecas
Ahora creamos dos programas que usaremos para generar dos ejecutables, uno que use las librerías estáticas y otro que use las librerías dinámicas.

### 3.1	Captura el siguiente archivo fuente para el main1.c y main2.c:

```c
#include <stdio.h>
#include "path donde esta la libreria" // debes poner el path hacia donde se
//encuentran tus librerías…

int main(int argc, char *argv[]) {
    float dlrecta;
    int dhoriz, dvert;
            
    dlrecta = dlr( 3, 4, 10, 12 );
    printf("Distancia en línea recta: %d\n", directa);
    dhoriz = dh( 3, 4, 10, 12 );
    dvert = dv( 3, 4, 10, 12 );
    printf("Distancia horizontal: %d\n", dhoriz);
    printf("Distancia vertical: %d\n", dvert);

    return 0;
}
```

### 3.2 Compilación con librerías estáticas
Compila tu programa ``main1.c`` utilizando las librerías estáticas

### 3.3 Compilación con librerías dinámicas
Compila tu programa ``main2.c`` utilizando las librerías dinámicas

### 3.4 Probando la ejecución de los programas
Ahora prueba la ejecución de cada uno de estos programas y verifica que funcionen correctamente.

## 4.- Modificando las librerías
Ahora vamos a agregar funciones a las librerías anteriores. Se trata de las funciones que calculan las coordenadas del punto medio entre dos puntos. Una de ellas será la función ``int xpm(int x1, int y1, int x2, int y2)``, que regresa la coordenada en x del punto medio entre los puntos ``(x1,y1)`` y ``(x2,y2)``, y la otra será la función ``int ypm(int x1, int y1, int x2, int y2)``, que regresa la coordenada en y del punto medio. La siguiente figura ilustra el punto medio y la forma de obtener sus coordenadas.
 
### 4.1 Modificación a los archivos fuente
Incluye aquí el contenido de los archivos ``xpm.cpp`` y ``ypm.cpp``, donde se definen las funciones ``int xpm(int x1, int y1, int x2, int y2)`` e ``int ypm(int x1, int y1, int x2, int y2)``, respectivamente.
```c
// Archivo xpm.c

// Archivo ypm.c
```

### 4.2 Modificaciones al archivo distancias.h
Para agregar estas funciones, debemos declarar sus prototipos en el archivo distancias.h. Modifica este archivo.

### 4.3 Probando las nuevas funciones de las librerías
Ahora modifica el archivo main.c para mostrar el uso de esta nueva función.

### 4.6 Compilando con librerías estáticas y dinámicas
Compila nuevamente tus librerías estáticas y dinámicas

### 4.8 Prueba de ejecución
Compila y muestra la ejecución de los dos programas modificados y comenta brevemente sobre el resultado de su ejecución.
