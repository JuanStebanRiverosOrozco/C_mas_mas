#include <iostream> // Incluye la librería estándar para entrada y salida
using namespace std; // Permite usar nombres estándar como cout y cin sin el prefijo std::

// === Declaración de funciones ===
void mostrarMenu(); // Muestra el menú de opciones al usuario
void numerosPrimosHastaN(int n); // Calcula y muestra los números primos hasta n
void paresImparesHastaN(int n); // Muestra los números pares e impares hasta n
void primosGemelosHastaN(int n); // Encuentra los pares de números primos gemelos hasta n
void numerosAmigosHastaN(int n); // Encuentra los números amigos hasta n
void fibonacciHastaN(int n); // Calcula y muestra la secuencia de Fibonacci hasta n
void ordenarShell(); // Ordena un vector usando el método Shell
void busquedaEnVector(); // Busca un elemento en un vector
void rotarVector(); // Rota un vector un número dado de posiciones
void interseccionVectores(); // Encuentra la intersección de dos vectores
void unionVectores(); // Calcula la unión de dos vectores
void recorrerVectorTresFormas(); // Recorre un vector de tres formas distintas

// === Función auxiliar ===
bool esPrimo(int num) { // Determina si un número es primo
    if (num <= 1) return false; // Si el número es <= 1, no es primo
    for (int i = 2; i * i <= num; i++) { // Itera desde 2 hasta la raíz cuadrada de num
        if (num % i == 0) return false; // Si num es divisible por i, no es primo
    }
    return true; // Si no se encontraron divisores, num es primo
}

// === Función auxiliar ===
int sumaDivisores(int num) { // Calcula la suma de los divisores propios de num
    int suma = 0; // Variable para almacenar la suma de divisores
    for (int i = 1; i <= num / 2; i++) { // Itera desde 1 hasta num/2
        if (num % i == 0) { // Verifica si i es un divisor de num
            suma += i; // Agrega i a la suma
        }
    }
    return suma; // Retorna la suma de los divisores
}

// === Función principal ===
int main() { // Punto de entrada del programa
    int opcion; // Variable para almacenar la opción seleccionada por el usuario
    do { // Bucle que repite hasta que el usuario seleccione salir
        mostrarMenu(); // Llama a la función que muestra el menú
        cin >> opcion; // Lee la opción seleccionada por el usuario

        if (opcion < 1 || opcion > 12) { // Verifica si la opción es válida
            cout << "Opción no válida. Intente nuevamente.\n"; // Mensaje de error
            continue; // Salta al siguiente ciclo del bucle
        }

        if (opcion == 12) { // Si la opción es 12, el usuario quiere salir
            cout << "Saliendo del programa. ¡Hasta luego!\n"; // Mensaje de despedida
            break; // Termina el bucle
        }

        int n; // Variable para almacenar el límite de operaciones que lo requieran
        if (opcion <= 5) { // Solo las opciones del 1 al 5 necesitan un límite n
            cout << "Ingrese un valor para n: "; // Solicita al usuario ingresar n
            cin >> n; // Lee el valor de n
        }

        // === Ejecutar la función correspondiente ===
        switch (opcion) { // Selecciona la función según la opción elegida
            case 1: numerosPrimosHastaN(n); break; // Llama a la función de números primos
            case 2: paresImparesHastaN(n); break; // Llama a la función de pares e impares
            case 3: primosGemelosHastaN(n); break; // Llama a la función de primos gemelos
            case 4: numerosAmigosHastaN(n); break; // Llama a la función de números amigos
            case 5: fibonacciHastaN(n); break; // Llama a la función de Fibonacci
            case 6: ordenarShell(); break; // Llama a la función de ordenación Shell
            case 7: busquedaEnVector(); break; // Llama a la función de búsqueda
            case 8: rotarVector(); break; // Llama a la función de rotación
            case 9: interseccionVectores(); break; // Llama a la función de intersección
            case 10: unionVectores(); break; // Llama a la función de unión
            case 11: recorrerVectorTresFormas(); break; // Llama a la función de recorrido
        }
    } while (true); // El bucle continúa mientras el usuario no seleccione salir

    return 0; // Indica que el programa terminó correctamente
}

// === Función para mostrar el menú ===
void mostrarMenu() { // Muestra las opciones disponibles al usuario
    cout << "\n=== Menú ===\n"; // Encabezado del menú
    cout << "1. Números primos hasta n\n"; // Opción 1
    cout << "2. Números pares e impares hasta n\n"; // Opción 2
    cout << "3. Números primos gemelos hasta n\n"; // Opción 3
    cout << "4. Números amigos hasta n\n"; // Opción 4
    cout << "5. Secuencia de Fibonacci hasta n\n"; // Opción 5
    cout << "6. Ordenar un vector mediante el método Shell\n"; // Opción 6
    cout << "7. Búsqueda de un elemento en un vector de n posiciones\n"; // Opción 7
    cout << "8. Rotar un vector de n posiciones\n"; // Opción 8
    cout << "9. Hacer la intersección de un vector de n posiciones\n"; // Opción 9
    cout << "10. Hacer la unión de un vector de n posiciones\n"; // Opción 10
    cout << "11. Recorrer vector de n posiciones de tres formas\n"; // Opción 11
    cout << "12. Salir\n"; // Opción para salir
    cout << "Ingrese una opción: "; // Solicita la entrada del usuario
}

// === Función para mostrar números primos hasta n ===
void numerosPrimosHastaN(int n) { // Recibe un parámetro n
    bool hayPrimos = false; // Variable para controlar si se encontraron números primos

    cout << "Números primos hasta " << n << ": "; // Imprime el mensaje indicando que se mostrarán los primos hasta n
    for (int i = 2; i <= n; i++) { // Bucle que empieza en 2 hasta n (todos los números posibles)
        if (esPrimo(i)) { // Llama a la función esPrimo para determinar si i es primo
            cout << i << " "; // Si es primo, lo imprime
            hayPrimos = true; // Marca que se encontró al menos un número primo
        }
    }

    if (!hayPrimos) { // Si no se encontraron números primos
        cout << "No hay números primos." ;// Imprime el mensaje indicando que no hay primos
    }

    cout << endl; // Imprime un salto de línea al finalizar la lista de primos
}

// === Función para mostrar números pares e impares hasta n ===
void paresImparesHastaN(int n) { // Recibe un parámetro n (el límite hasta el cual buscar los números)
    bool hayPares = false; // Variable para controlar si encontramos números pares
    bool hayImpares = false; // Variable para controlar si encontramos números impares

    cout << "Pares: "; // Imprime el encabezado de los números pares
    for (int i = 2; i <= n; i += 2) { // Empieza en 2 y aumenta de 2 en 2 (solo números pares)
        cout << i << " "; // Imprime el número par
        hayPares = true; // Cambia la variable a true si encontramos al menos un número par
    }

    if (!hayPares) { // Si no se encontraron números pares
        cout << "No hay números pares hasta " << n << ". "; // Imprime el mensaje
    }

    cout << "\nImpares: "; // Imprime el encabezado de los números impares
    for (int i = 1; i <= n; i += 2) { // Empieza en 1 y aumenta de 2 en 2 (solo números impares)
        cout << i << " "; // Imprime el número impar
        hayImpares = true; // Cambia la variable a true si encontramos al menos un número impar
    }

    if (!hayImpares) { // Si no se encontraron números impares
        cout << "No hay números impares hasta " << n << ". "; // Imprime el mensaje
    }

    cout << endl; // Salto de línea al final de la salida
}


// === Función para mostrar números primos gemelos hasta n ===
void primosGemelosHastaN(int n) {
    bool hayGemelos = false; // Variable para indicar si se encontraron primos gemelos

    cout << "Primos gemelos hasta " << n << ": "; // Imprime el encabezado
    for (int i = 2; i <= n - 2; i++) { // Itera desde 2 hasta n-2 (evita salir de rango)
        if (esPrimo(i) && esPrimo(i + 2)) { // Si i e i+2 son primos
            cout << "(" << i << ", " << i + 2 << ") "; // Imprime el par de primos gemelos
            hayGemelos = true; // Marca que se encontró al menos un par de primos gemelos
        }
    }

    if (!hayGemelos) { // Si no se encontraron primos gemelos
        cout << "No hay primos gemelos.";// Imprime el mensaje indicando que no hay gemelos
    }

    cout << endl; // Salto de línea
}


// === Función para mostrar números amigos hasta n ===
void numerosAmigosHastaN(int n) { // Recibe el valor de n
    cout << "Números amigos hasta " << n << ": "; // Imprime el encabezado
    for (int i = 1; i < n; i++) { // Itera desde 1 hasta n-1
        int suma1 = sumaDivisores(i); // Calcula la suma de divisores de i
        if (suma1 < n && sumaDivisores(suma1) == i && suma1 != i && i < suma1) { 
            // Si la suma de divisores de i es igual a i (números amigos) y i < suma1 para evitar imprimir en reverso
            cout << "(" << i << ", " << suma1 << ") "; // Imprime el par de números amigos
        }
    }
    cout << endl; // Salto de línea
}


// === Función para mostrar la secuencia de Fibonacci hasta n ===
void fibonacciHastaN(int n) { // Recibe el valor de n
    int a = 0, b = 1; // Inicializa los primeros dos números de la secuencia Fibonacci
    cout << "Secuencia de Fibonacci hasta " << n << ": "; // Imprime el encabezado
    while (a <= n) { // Mientras que a sea menor o igual que n
        cout << a << " "; // Imprime el número actual en la secuencia
        int temp = a; // Almacena el valor de a en temp
        a = b; // Asigna b a a (el siguiente número en la secuencia)
        b = temp + b; // Suma temp y b, y lo asigna a b (nuevo número en la secuencia)
    }
    cout << endl; // Salto de línea
}

// === Función para ordenar un vector usando el método Shell y mostrar el proceso ===
void ordenarShell() {
    int n; // Tamaño del vector
    cout << "Ingrese el tamaño del vector: "; // Solicita al usuario el tamaño
    cin >> n; // Lee el tamaño del vector
    int arr[n]; // Declara un arreglo de tamaño n
    cout << "Ingrese " << n << " elementos para el vector:\n"; // Solicita los elementos
    for (int i = 0; i < n; i++) { // Bucle para ingresar los elementos
        cin >> arr[i]; // Lee cada elemento del vector
    }

    cout << "\nProceso de ordenamiento usando Shell Sort:\n";

    // Implementación del algoritmo Shell Sort
    for (int gap = n / 2; gap > 0; gap /= 2) { // Comienza con un gap (espaciado) grande y lo reduce
        cout << "\n--- Gap actual: " << gap << " ---\n"; // Imprime el valor del gap actual

        for (int i = gap; i < n; i++) { // Itera desde el índice gap hasta n
            int temp = arr[i]; // Guarda el valor actual
            int j;

            cout << "  Evaluando elemento " << arr[i] << " en la posición " << i << "\n";

            // Compara y mueve los elementos dentro del subgrupo definido por el gap
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                cout << "    Moviendo elemento " << arr[j - gap] << " de posición " << j - gap
                     << " a posición " << j << "\n";
                arr[j] = arr[j - gap]; // Mueve el elemento hacia adelante
            }

            arr[j] = temp; // Coloca el elemento en su posición correcta
            cout << "    Colocando " << temp << " en la posición " << j << "\n";
        }

        // Imprime el vector después de procesar este gap
        cout << "  Vector después de procesar gap " << gap << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }

    // Imprime el vector ordenado
    cout << "\nVector ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; // Salto de línea
}

// === Función para buscar un elemento en un vector ===
void busquedaEnVector() { // Función para buscar un elemento en un vector
    int n, x; // n = tamaño del vector, x = elemento a buscar
    cout << "Ingrese el tamaño del vector: "; 
    cin >> n; // Lee el tamaño del vector
    int arr[n]; // Declara un vector de tamaño n
    cout << "Ingrese " << n << " elementos del vector:\n";
    for (int i = 0; i < n; i++) { // Llenar el vector con los elementos
        cin >> arr[i]; 
    }
    cout << "Ingrese el número que desea buscar: "; // Pide al usuario el número a buscar
    cin >> x; // Lee el número a buscar
    bool encontrado = false; // Variable para verificar si se encontró el número

    for (int i = 0; i < n; i++) { // Itera sobre el vector
        if (arr[i] == x) { // Si encuentra el número
            encontrado = true; // Cambia el valor a true
            cout << "Elemento encontrado en la posición " << i << endl; // Informa la posición
            break; // Termina el ciclo
        }
    }

    if (!encontrado) { // Si el número no fue encontrado
        cout << "Elemento no encontrado.\n"; // Imprime que no se encontró
    }
}

// === Función para rotar un vector ===
void rotarVector() { 
    int n, k; // n = tamaño del vector, k = número de posiciones a rotar
    cout << "Ingrese el tamaño del vector: "; 
    cin >> n; // Lee el tamaño del vector
    int arr[n]; // Declara el vector
    cout << "Ingrese " << n << " elementos para el vector:\n"; 
    for (int i = 0; i < n; i++) { // Llenar el vector con los elementos
        cin >> arr[i]; 
    }

    cout << "Ingrese el número de posiciones para rotar el vector: "; // Solicita las posiciones a rotar
    cin >> k; // Lee el valor de k

    // Rotar el vector k posiciones hacia la derecha
    k = k % n; // Si k es mayor que n, reduce el número de rotaciones
    for (int i = 0; i < k; i++) { // Realiza la rotación k veces
        int temp = arr[n - 1]; // Guarda el último elemento
        for (int j = n - 1; j > 0; j--) { // Mueve los elementos una posición a la derecha
            arr[j] = arr[j - 1]; 
        }
        arr[0] = temp; // Coloca el último elemento en la primera posición
    }

    // Imprime el vector rotado
    cout << "Vector rotado: ";
    for (int i = 0; i < n; i++) { 
        cout << arr[i] << " "; // Imprime el vector rotado
    }
    cout << endl; // Salto de línea
}

// === Función para hacer la intersección de dos vectores ===
void interseccionVectores() { // Función que realiza la intersección de dos vectores
    int n1, n2; // Declaramos las variables que contendrán el tamaño de los vectores
    cout << "Ingrese el tamaño del primer vector: "; // Imprime el mensaje pidiendo el tamaño del primer vector
    cin >> n1; // Lee el tamaño del primer vector e lo asigna a la variable n1
    int arr1[n1]; // Declara el primer vector con el tamaño n1
    cout << "Ingrese " << n1 << " elementos para el primer vector:\n"; // Imprime el mensaje pidiendo los elementos del primer vector
    for (int i = 0; i < n1; i++) { // Ciclo para ingresar los elementos del primer vector
        cin >> arr1[i]; // Lee el elemento i-ésimo del primer vector y lo guarda en arr1
    }

    cout << "Ingrese el tamaño del segundo vector: "; // Imprime el mensaje pidiendo el tamaño del segundo vector
    cin >> n2; // Lee el tamaño del segundo vector e lo asigna a la variable n2
    int arr2[n2]; // Declara el segundo vector con el tamaño n2
    cout << "Ingrese " << n2 << " elementos para el segundo vector:\n"; // Imprime el mensaje pidiendo los elementos del segundo vector
    for (int i = 0; i < n2; i++) { // Ciclo para ingresar los elementos del segundo vector
        cin >> arr2[i]; // Lee el elemento i-ésimo del segundo vector y lo guarda en arr2
    }

    bool hayInterseccion = false; // Declaramos una variable de control para verificar si hay intersección

    // Imprimimos la intersección de los vectores
    cout << "Intersección: ";
    for (int i = 0; i < n1; i++) { // Recorre el primer vector
        for (int j = 0; j < n2; j++) { // Recorre el segundo vector
            if (arr1[i] == arr2[j]) { // Si se encuentran elementos comunes
                cout << arr1[i] << " "; // Imprime el elemento común
                hayInterseccion = true; // Marca que hay intersección
                break; // Termina el ciclo del segundo vector para evitar repeticiones
            }
        }
    }

    // Si no hubo intersección, se imprime un mensaje indicándolo
    if (!hayInterseccion) { // Si la variable hayInterseccion sigue siendo false
        cout << "No hay intersección entre los vectores."; // Imprime el mensaje
    }

    cout << endl; // Salto de línea al final de la salida
}

// === Función para hacer la unión de dos vectores ===
void unionVectores() { // Función que realiza la unión de dos vectores
    int n1, n2; // Declaramos las variables que contendrán el tamaño de los vectores
    cout << "Ingrese el tamaño del primer vector: "; // Imprime el mensaje pidiendo el tamaño del primer vector
    cin >> n1; // Lee el tamaño del primer vector e lo asigna a la variable n1
    int arr1[n1]; // Declara el primer vector con el tamaño n1
    cout << "Ingrese " << n1 << " elementos para el primer vector:\n"; // Imprime el mensaje pidiendo los elementos del primer vector
    for (int i = 0; i < n1; i++) { // Ciclo para ingresar los elementos del primer vector
        cin >> arr1[i]; // Lee el elemento i-ésimo del primer vector y lo guarda en arr1
    }

    cout << "Ingrese el tamaño del segundo vector: "; // Imprime el mensaje pidiendo el tamaño del segundo vector
    cin >> n2; // Lee el tamaño del segundo vector e lo asigna a la variable n2
    int arr2[n2]; // Declara el segundo vector con el tamaño n2
    cout << "Ingrese " << n2 << " elementos para el segundo vector:\n"; // Imprime el mensaje pidiendo los elementos del segundo vector
    for (int i = 0; i < n2; i++) { // Ciclo para ingresar los elementos del segundo vector
        cin >> arr2[i]; // Lee el elemento i-ésimo del segundo vector y lo guarda en arr2
    }

    // Creamos un arreglo para almacenar la unión de los dos vectores
    int unionVector[n1 + n2]; // La unión de los vectores tendrá un tamaño igual a la suma de los tamaños de ambos vectores
    int idx = 0; // Índice para colocar elementos en unionVector

    // Agregar los elementos del primer vector a la unión
    for (int i = 0; i < n1; i++) { // Iteramos por cada elemento del primer vector
        unionVector[idx++] = arr1[i]; // Añadimos el elemento de arr1 a unionVector e incrementamos el índice
    }

    // Agregar los elementos del segundo vector a la unión sin duplicados
    for (int i = 0; i < n2; i++) { // Iteramos por cada elemento del segundo vector
        bool existe = false; // Creamos una variable para verificar si el elemento ya está en unionVector
        for (int j = 0; j < n1; j++) { // Iteramos por el primer vector para comparar elementos
            if (arr2[i] == arr1[j]) { // Si encontramos un elemento que ya está en el primer vector
                existe = true; // Marcamos que el elemento ya existe
                break; // Salimos del ciclo, ya no necesitamos verificar el resto de elementos
            }
        }
        if (!existe) { // Si el elemento no existe en el primer vector
            unionVector[idx++] = arr2[i]; // Lo agregamos al vector de la unión y aumentamos el índice
        }
    }

    // Ordenamos la unión manualmente con un algoritmo de ordenación simple (Burbuja)
    for (int i = 0; i < idx - 1; i++) { // Iteramos desde el inicio hasta el penúltimo elemento
        for (int j = 0; j < idx - i - 1; j++) { // Comparamos cada par de elementos adyacentes
            if (unionVector[j] > unionVector[j + 1]) { // Si el elemento actual es mayor que el siguiente
                // Intercambiamos los elementos
                int temp = unionVector[j]; // Guardamos el valor actual en una variable temporal
                unionVector[j] = unionVector[j + 1]; // Asignamos el siguiente elemento al lugar del actual
                unionVector[j + 1] = temp; // Asignamos el valor temporal al siguiente lugar
            }
        }
    }

    // Imprimimos la unión ordenada
    cout << "Unión ordenada: "; // Imprime el encabezado
    for (int i = 0; i < idx; i++) { // Iteramos por cada elemento de la unión
        cout << unionVector[i] << " "; // Imprime el elemento i-ésimo de unionVector
    }
    cout << endl; // Salto de línea
}

void recorrerVectorTresFormas() { // Define una función llamada 'recorrerVectorTresFormas' que no recibe parámetros y no retorna ningún valor
    int n; // Declara una variable entera 'n' que almacenará el tamaño del vector
    cout << "Ingrese el tamaño del vector: "; // Muestra un mensaje solicitando al usuario que ingrese el tamaño del vector
    cin >> n; // Lee el valor ingresado por el usuario y lo almacena en la variable 'n'
    int arr[n]; // Declara un arreglo 'arr' de tamaño 'n' especificado por el usuario
    cout << "Ingrese " << n << " elementos para el vector:\n"; // Muestra un mensaje solicitando que se ingresen 'n' elementos para llenar el arreglo
    for (int i = 0; i < n; i++) { // Bucle 'for' para llenar el arreglo
        cin >> arr[i]; // Lee el valor ingresado por el usuario y lo almacena en la posición 'i' del arreglo
    }

    cout << "Recorrido normal: "; // Imprime el encabezado para mostrar el recorrido normal del arreglo
    for (int i = 0; i < n; i++) { // Bucle 'for' para recorrer el arreglo de forma normal
        cout << arr[i] << " "; // Imprime el elemento en la posición 'i' del arreglo
    }
    cout << endl; // Inserta un salto de línea después del recorrido normal

    cout << "Recorrido inverso: "; // Imprime el encabezado para mostrar el recorrido inverso del arreglo
    for (int i = n - 1; i >= 0; i--) { // Bucle 'for' para recorrer el arreglo de forma inversa
        cout << arr[i] << " "; // Imprime el elemento en la posición 'i' del arreglo en orden inverso
    }
    cout << endl; // Inserta un salto de línea después del recorrido inverso

    cout << "Recorrido con paso de 2: "; // Imprime el encabezado para mostrar el recorrido con paso de 2 del arreglo
    for (int i = 0; i < n; i += 2) { // Bucle 'for' para recorrer el arreglo con paso de 2
        cout << arr[i] << " "; // Imprime el elemento en la posición 'i' del arreglo, saltando de 2 en 2
    }
    cout << endl; // Inserta un salto de línea después del recorrido con paso de 2
}
