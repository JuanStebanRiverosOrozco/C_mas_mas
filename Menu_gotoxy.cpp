#include <iostream>
#include <windows.h>

using namespace std;


// Declaración de funciones generales y específicas que se implementarán más adelante
void menureturn(); // Función para regresar al menú principal
void gotoxy(int x, int y); // Función para mover el cursor a las coordenadas (x, y)
void recuadro(int x1, int y1, int x2, int y2); // Función para dibujar un recuadro en la consola
void centrarRecuadro(int anchoContenido, int altoContenido); // Función para centrar un recuadro en la pantalla
void centrarTexto(const string &texto, int y); // Función para centrar un texto en la consola

// === Declaración de funciones específicas ===

// Funciones matemáticas y algorítmicas
void numerosPrimosHastaN(); // Genera números primos hasta un número n
void paresImparesHastaN(); // Muestra los números pares e impares hasta un número n
void primosGemelosHastaN(); // Genera números primos gemelos hasta un número n
void numerosAmigosHastaN(); // Calcula los números amigos hasta un número n
void fibonacciHastaN(); // Genera la secuencia de Fibonacci hasta un número n
void ordenarShell(); // Ordena un vector utilizando el algoritmo Shell
void busquedaEnVector(); // Realiza una búsqueda en un vector de números
void rotarVector(); // Rota los elementos de un vector de n posiciones
void interseccionVectores(); // Calcula la intersección de dos vectores (elementos comunes)
void unionVectores(); // Calcula la unión de dos vectores (todos los elementos sin duplicados)
void recorrerVectorTresFormas(); // Recorre un vector de tres maneras diferentes (por ejemplo, en orden directo, reverso, o de alguna forma especial)

	
int main() {

    int opc;

    system("COLOR 0F"); // Cambia el color de la consola (fondo negro y texto blanco)

    // Ajustar el tamaño y centrar el cuadro para un contenido más grande
    centrarRecuadro(100, 24); // Centra un recuadro más ancho y alto para acomodar el texto

    gotoxy(56, 3); // Mueve el cursor a la posición (56, 3) para centrar el título "MENU"
    cout << "MENU"; // Imprime el título "MENU"

    // Opciones del menú
    gotoxy(18, 5);  // Mueve el cursor a la posición (18, 5)
    cout << "1. Números primos hasta n";
    gotoxy(18, 8);   // Mueve el cursor a la posición (18, 8)
    cout << "2. Números pares e impares hasta n";
    gotoxy(18, 10);  // Mueve el cursor a la posición (18, 10)
    cout << "3. Números primos gemelos hasta n";
    gotoxy(18, 13);  // Mueve el cursor a la posición (18, 13)
    cout << "4. Números amigos hasta n";
    gotoxy(18, 16);  // Mueve el cursor a la posición (18, 16)
    cout << "5. Secuencia de Fibonacci hasta n";
    gotoxy(18, 19);  // Mueve el cursor a la posición (18, 19)
    cout << "6. Ordenar un vector mediante el";
    gotoxy(18, 20);  // Mueve el cursor a la posición (18, 20)
    cout << "método Shell";
    gotoxy(62, 5);   // Mueve el cursor a la posición (62, 5)
    cout << "7. Búsqueda de un elemento en un vector";
    gotoxy(62, 6);   // Mueve el cursor a la posición (62, 6)
    cout << "de n posiciones";
    gotoxy(62, 8);   // Mueve el cursor a la posición (62, 8)
    cout << "8. Rotar un vector de n posiciones";
    gotoxy(62, 10);  // Mueve el cursor a la posición (62, 10)
    cout << "9. Hacer la intersección de un vector";
    gotoxy(62, 11);  // Mueve el cursor a la posición (62, 11)
    cout << "de n posiciones";
    gotoxy(62, 13);  // Mueve el cursor a la posición (62, 13)
    cout << "10. Hacer la unión de un vector de";
    gotoxy(62, 14);  // Mueve el cursor a la posición (62, 14)
    cout << "n posiciones";
    gotoxy(62, 16);  // Mueve el cursor a la posición (62, 16)
    cout << "11. Recorrer un vector de n posiciones";
    gotoxy(62, 19);  // Mueve el cursor a la posición (62, 19)
    cout << "12. Salir"; // Opción para salir

    gotoxy(18, 23);  // Posición ajustada para la entrada del usuario
    cout << "Ingrese una opcion (1-12): "; // Solicita al usuario que ingrese una opción
    cin >> opc; // Lee la opción seleccionada por el usuario
    system("cls"); // Limpia la pantalla para mostrar el resultado de la opción seleccionada

	
switch (opc) {
    case 1:
        system("COLOR 0F"); // Cambia el color de fondo y texto
        centrarRecuadro(100, 30); // Centra un recuadro en la consola
        gotoxy(14, 2); // Mueve el cursor a la posición especificada
        numerosPrimosHastaN(); // Llama a la función para mostrar números primos hasta un límite
        break;

    case 2:
        system("COLOR 0F");
        centrarRecuadro(100, 30);
        gotoxy(14, 2);
        paresImparesHastaN(); // Llama a la función para mostrar números pares e impares hasta un límite
        break;

    case 3:
        system("COLOR 0F");
        centrarRecuadro(100, 30);
        gotoxy(14, 2);
        primosGemelosHastaN(); // Llama a la función para mostrar primos gemelos hasta un límite
        break;

    case 4:
        system("COLOR 0F");
        centrarRecuadro(100, 30);
        gotoxy(14, 2);
        numerosAmigosHastaN(); // Llama a la función para mostrar números amigos hasta un límite
        break;

    case 5:
        system("COLOR 0F");
        centrarRecuadro(100, 30);
        gotoxy(14, 2);
        fibonacciHastaN(); // Llama a la función para mostrar la secuencia de Fibonacci hasta un límite
        break;

    case 6:
        system("COLOR 0F");
        centrarRecuadro(100, 30);
        gotoxy(14, 2);
        ordenarShell(); // Llama a la función para ordenar usando el algoritmo Shell
        break;

    case 7:
        system("COLOR 0F");
        centrarRecuadro(100, 30);
        gotoxy(14, 2);
        busquedaEnVector(); // Llama a la función para realizar una búsqueda en un vector
        break;

    case 8:
        system("COLOR 0F");
        centrarRecuadro(100, 30);
        gotoxy(14, 2);
        rotarVector(); // Llama a la función para rotar un vector
        break;

    case 9:
        system("COLOR 0F");
        centrarRecuadro(100, 30);
        gotoxy(14, 2);
        interseccionVectores(); // Llama a la función para mostrar la intersección de dos vectores
        break;

    case 10:
        system("COLOR 0F");
        centrarRecuadro(100, 30);
        gotoxy(14, 2);
        unionVectores(); // Llama a la función para mostrar la unión de dos vectores
        break;

    case 11:
        system("COLOR 0F");
        centrarRecuadro(100, 30);
        gotoxy(14, 2);
        recorrerVectorTresFormas(); // Llama a la función para recorrer un vector en tres formas diferentes
        break;

    case 12:
        cout << "Cerrando..." << endl; // Muestra un mensaje y cierra el programa
        system("exit");
        break;

    default:
        system("COLOR 0F");
        centrarRecuadro(100, 24); // Centra el recuadro para el mensaje de error
        gotoxy(18, 5); // Cambia la posición dentro del recuadro
        cout << "Esta opción no existe       "; // Mensaje de error para opciones no válidas
        system("PAUSE"); // Espera que el usuario presione una tecla
        system("cls"); // Limpia la pantalla
        main(); // Llama al menú principal nuevamente
        break;
}

}
	
	// Función para centrar el cuadro y ajustarlo al contenido
void centrarRecuadro(int anchoContenido, int altoContenido) {
    // Obtiene la información del buffer de la consola
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

    // Calcula el ancho y alto de la ventana de la consola
    int anchoConsola = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    int altoConsola = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

    // Calcula las coordenadas de la esquina superior izquierda (x1, y1)
    // para centrar el recuadro dentro de la ventana de la consola
    int x1 = (anchoConsola - anchoContenido) / 2;
    int y1 = (altoConsola - altoContenido) / 2;

    // Calcula las coordenadas de la esquina inferior derecha (x2, y2)
    int x2 = x1 + anchoContenido - 1;
    int y2 = y1 + altoContenido - 1;

    // Dibuja el primer recuadro, que es el marco exterior
    recuadro(x1, y1, x2, y2);

    // Dibuja el recuadro interior, desplazado para crear un espacio vacío entre los marcos
    recuadro(x1 + 2, y1 + 1, x2 - 2, y2 - 1);
}

	
	// Función para centrar texto
void centrarTexto(const string &texto, int y) {
    // Obtiene la información del buffer de la consola
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

    // Calcula el ancho de la ventana de la consola
    int anchoConsola = csbi.srWindow.Right - csbi.srWindow.Left + 1;

    // Calcula la posición X para centrar el texto en la consola
    int x = (anchoConsola - texto.length()) / 2;

    // Mueve el cursor a la posición (x, y) y muestra el texto centrado
    gotoxy(x, y);
    cout << texto;
}

	
	// Función gotoxy (posición del cursor en la consola)
void gotoxy(int x, int y) {
    COORD coordinate; // Declaración de una variable de tipo COORD que almacenará las coordenadas del cursor.
    coordinate.X = x; // Asigna el valor de la coordenada X (horizontal) a la variable 'coordinate'.
    coordinate.Y = y; // Asigna el valor de la coordenada Y (vertical) a la variable 'coordinate'.

    // Llama a la función SetConsoleCursorPosition para mover el cursor a la posición especificada.
    // GetStdHandle(STD_OUTPUT_HANDLE) obtiene el manejador de salida estándar (pantalla de la consola).
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}

	
	// Recuadro básico con bordes
void recuadro(int x1, int y1, int x2, int y2) {
    int i;

    // Dibuja la línea superior y la línea inferior
    for (i = x1; i <= x2; i++) {
        gotoxy(i, y1); // Mueve el cursor a la posición (i, y1)
        cout << "\304"; // Dibuja el carácter de la línea superior (+)
        gotoxy(i, y2); // Mueve el cursor a la posición (i, y2)
        cout << "\304"; // Dibuja el carácter de la línea inferior (+)
    }

    // Dibuja la línea izquierda y la línea derecha
    for (i = y1; i <= y2; i++) {
        gotoxy(x1, i); // Mueve el cursor a la posición (x1, i)
        cout << "\263"; // Dibuja el carácter de la línea izquierda (¦)
        gotoxy(x2, i); // Mueve el cursor a la posición (x2, i)
        cout << "\263"; // Dibuja el carácter de la línea derecha (¦)
    }

    // Dibuja las esquinas (esquinas del cuadro)
    gotoxy(x1, y1); // Mueve el cursor a la esquina superior izquierda
    cout << "\332"; // Dibuja el carácter de la esquina superior izquierda (+)
    gotoxy(x1, y2); // Mueve el cursor a la esquina inferior izquierda
    cout << "\300"; // Dibuja el carácter de la esquina inferior izquierda (+)
    gotoxy(x2, y1); // Mueve el cursor a la esquina superior derecha
    cout << "\277"; // Dibuja el carácter de la esquina superior derecha (+)
    gotoxy(x2, y2); // Mueve el cursor a la esquina inferior derecha
    cout << "\331"; // Dibuja el carácter de la esquina inferior derecha (+)
}




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

// Función para mostrar números primos hasta n
void numerosPrimosHastaN() {
    int n;
    cout << "Digite el límite de los números primos: "; // Solicita al usuario el límite hasta donde se deben mostrar los números primos
    cin >> n; // Lee el límite n

    const int maxX = 104; // Límite horizontal del cuadro
    const int maxY = 26;  // Límite vertical del cuadro
    int inicioX = 14, inicioY = 3; // Coordenadas iniciales para el cuadro
    

    // Título
    gotoxy(inicioX, inicioY); // Mueve el cursor a la posición inicial
    cout << "Números primos hasta " << n << ":"; // Muestra el encabezado "Números primos hasta N"

    int x = inicioX, y = inicioY + 1; // Coordenadas iniciales para mostrar los números primos
    bool hayPrimos = false; // Variable para controlar si se han encontrado números primos

    // Itera desde 2 hasta n para buscar los números primos
    for (int i = 2; i <= n; i++) {
        if (esPrimo(i)) { // Si el número i es primo
            if (y >= maxY) { // Si se alcanza el límite vertical del cuadro
                gotoxy(inicioX, maxY + 1); // Mueve el cursor dentro pero muy cerca del limite de 30 del cuadro
                cout << "Presione Enter para continuar..."; // Muestra el mensaje de pausa
                cin.ignore(); // Ignora cualquier entrada pendiente
                cin.get(); // Espera a que el usuario presione Enter
                system("cls"); // Limpia la pantalla
                centrarRecuadro(100, 30); // Redibuja el cuadro
                gotoxy(inicioX, inicioY); // Mueve el cursor al inicio
                cout << "Números primos hasta " << n << " (continuación):"; // Muestra el encabezado nuevamente
                x = inicioX; // Reinicia la posición horizontal
                y = inicioY + 1; // Reinicia la posición vertical
            }

            gotoxy(x, y); // Mueve el cursor a la posición (x, y)
            cout << i << " "; // Muestra el número primo
            x += 6; // Incrementa la posición horizontal para no sobrecargar la línea

            if (x >= maxX) { // Si se alcanza el límite horizontal
                x = inicioX; // Reinicia la posición horizontal
                y++; // Mueve a la siguiente línea
            }

            hayPrimos = true; // Marca que se encontró al menos un número primo
        }
    }

    if (!hayPrimos) { // Si no se encontraron números primos
        gotoxy(inicioX, y); // Mueve el cursor a la posición inicial
        cout << "No hay números primos."; // Muestra el mensaje de que no se encontraron primos
    }

    // Finalización: mostrar mensaje para volver al menú
    gotoxy(inicioX, maxY + 1); // Mueve el cursor fuera del cuadro
    cout << "Presione Enter para volver al menú"; // Solicita al usuario presionar Enter
    cin.ignore(); // Ignora cualquier entrada pendiente
    cin.get(); // Espera a que el usuario presione Enter
    system("cls"); // Limpia la pantalla
    main(); // Llama al menú principal
}



// === Función para mostrar números pares e impares hasta n ===
void paresImparesHastaN() {
    int n;
    cout << "Digite el límite de los números pares e impares: "; // Solicita al usuario el límite hasta donde se deben mostrar los números pares e impares
    cin >> n; // Lee el límite n

    int inicioX = 14, inicioY = 3; // Coordenadas iniciales dentro del cuadro
    int x = inicioX, y = inicioY;  // Posición de impresión dentro del cuadro
    const int maxX = 104; // Límite horizontal del cuadro
    const int maxY = 26; // Límite vertical del cuadro (en este caso 26 líneas visibles)

    // Dibuja el recuadro inicial
    centrarRecuadro(100, 30);

    // Mostrar números pares
    gotoxy(x, y); // Mueve el cursor a la posición (x, y)
    cout << "Pares:"; // Muestra el encabezado "Pares:"
    y++; // Incrementa la posición vertical

    bool hayPares = false; // Variable para controlar si se han encontrado números pares
    for (int i = 2; i <= n; i += 2) { // Itera desde 2 hasta n, de dos en dos
        if (y >= maxY) { // Si se alcanza el límite vertical del cuadro
            gotoxy(inicioX, maxY + 1); // Mueve el cursor fuera del cuadro
            cout << "Presione Enter para continuar..."; // Muestra el mensaje para continuar
            cin.ignore(); // Ignora cualquier entrada pendiente
            cin.get(); // Espera a que el usuario presione Enter
            system("cls"); // Limpia la pantalla
            centrarRecuadro(100, 30); // Redibuja el cuadro
            x = inicioX; // Reinicia la posición horizontal
            y = inicioY; // Reinicia la posición vertical
            gotoxy(x, y); // Mueve el cursor al inicio
            cout << "Pares (continuación):"; // Muestra el encabezado nuevamente
            y++; // Incrementa la posición vertical
        }

        gotoxy(x, y); // Mueve el cursor a la posición (x, y)
        cout << i << " "; // Muestra el número par
        x += 6; // Incrementa la posición horizontal para no sobrecargar la línea

        if (x >= maxX) { // Si se alcanza el límite horizontal
            x = inicioX; // Reinicia la posición horizontal
            y++; // Mueve a la siguiente línea
        }

        hayPares = true; // Marca que se encontró al menos un número par
    }

    if (!hayPares) { // Si no se encontraron números pares
        gotoxy(inicioX, y); // Mueve el cursor a la posición inicial
        cout << "No hay números pares hasta " << n << "."; // Muestra mensaje de que no hay pares
        y++; // Incrementa la posición vertical
    }

    // Reiniciar coordenadas para los números impares
    x = inicioX;
    y++; // Incrementa la posición vertical para la lista de números impares

    // Mostrar números impares
    gotoxy(x, y); // Mueve el cursor a la posición inicial
    cout << "Impares:"; // Muestra el encabezado "Impares:"
    y++; // Incrementa la posición vertical

    bool hayImpares = false; // Variable para controlar si se han encontrado números impares
    for (int i = 1; i <= n; i += 2) { // Itera desde 1 hasta n, de dos en dos (números impares)
        if (y >= maxY) { // Si se alcanza el límite vertical del cuadro
            gotoxy(inicioX, maxY + 1); // Mueve el cursor fuera del cuadro
            cout << "Presione Enter para continuar..."; // Muestra el mensaje para continuar
            cin.ignore(); // Ignora cualquier entrada pendiente
            cin.get(); // Espera a que el usuario presione Enter
            system("cls"); // Limpia la pantalla
            centrarRecuadro(100, 30); // Redibuja el cuadro
            x = inicioX; // Reinicia la posición horizontal
            y = inicioY; // Reinicia la posición vertical
            gotoxy(x, y); // Mueve el cursor al inicio
            cout << "Impares (continuación):"; // Muestra el encabezado nuevamente
            y++; // Incrementa la posición vertical
        }

        gotoxy(x, y); // Mueve el cursor a la posición (x, y)
        cout << i << " "; // Muestra el número impar
        x += 6; // Incrementa la posición horizontal para no sobrecargar la línea

        if (x >= maxX) { // Si se alcanza el límite horizontal
            x = inicioX; // Reinicia la posición horizontal
            y++; // Mueve a la siguiente línea
        }

        hayImpares = true; // Marca que se encontró al menos un número impar
    }

    if (!hayImpares) { // Si no se encontraron números impares
        gotoxy(inicioX, y); // Mueve el cursor a la posición inicial
        cout << "No hay números impares hasta " << n << "."; // Muestra mensaje de que no hay impares
        y++; // Incrementa la posición vertical
    }

    // Finalización: mostrar mensaje para volver al menú
    gotoxy(inicioX, maxY + 1); // Mueve el cursor fuera del cuadro
    cout << "Presione Enter para volver al menú"; // Solicita al usuario presionar Enter
    cin.ignore(); // Ignora cualquier entrada pendiente
    cin.get(); // Espera a que el usuario presione Enter
    system("cls"); // Limpia la pantalla
    main(); // Llama al menú principal
}





// === Función para mostrar números primos gemelos hasta n ===
void primosGemelosHastaN() {
    int n;
    cout << "Digite el limite de los números primos gemelos: "; // Solicita al usuario el límite hasta donde buscar primos gemelos
    cin >> n; // Lee el límite de números primos gemelos

    int inicioX = 14, inicioY = 3; // Coordenadas iniciales dentro del cuadro
    int x = inicioX, y = inicioY; // Posición de impresión de los primos gemelos

    bool hayGemelos = false; // Variable para indicar si se encontraron primos gemelos
    gotoxy(x, y); // Coloca el encabezado en la consola
    cout << "Primos gemelos hasta " << n << ": "; // Muestra el encabezado
    y++; // Incrementa la posición vertical para los resultados

    const int maxX = 94; // Límite horizontal del cuadro
    const int maxY = 26; // Límite vertical del cuadro

    // Itera desde 2 hasta n-2 para buscar los primos gemelos
    for (int i = 2; i <= n; i++) {
        if (esPrimo(i) && esPrimo(i + 2)) { // Si i e i+2 son primos
            if (y >= maxY) { // Si se alcanza el límite vertical
                gotoxy(x, maxY + 1); // Mueve el cursor fuera del cuadro
                cout << "Presione Enter para continuar..."; // Solicita al usuario presionar Enter para continuar
                cin.ignore(); // Ignora cualquier entrada pendiente
                cin.get(); // Espera al Enter
                system("cls"); // Limpia la pantalla
                centrarRecuadro(100, 30); // Redibuja el cuadro
                gotoxy(14, 3); // Mueve el cursor al inicio
                cout << "Primos gemelos hasta " << n << ": "; // Muestra nuevamente el encabezado
                y = 4; // Reinicia la coordenada vertical
            }

            gotoxy(x, y); // Mueve el cursor a la posición (x, y)
            cout << "(" << i << ", " << i + 2 << ") "; // Imprime el par de primos gemelos
            x += 16; // Incrementa la posición horizontal para evitar desbordamiento

            if (x >= maxX) { // Si el texto excede el límite horizontal de la consola
                x = inicioX; // Reinicia la posición horizontal
                y++; // Mueve a la siguiente línea
            }
            hayGemelos = true; // Marca que se encontró al menos un par de primos gemelos
        }
    }

    if (!hayGemelos) { // Si no se encontraron primos gemelos
        gotoxy(inicioX, y); // Mueve el cursor a la posición inicial
        cout << "No hay primos gemelos hasta " << n << "."; // Muestra que no se encontraron primos gemelos
        y++; // Incrementa la posición vertical para continuar
    }

    // Centrar el mensaje de pausa y regresar al menú
    gotoxy(inicioX, maxY + 1); // Mueve el cursor al final de la pantalla
    cout << "Presione Enter para volver al menú..."; // Solicita que el usuario presione Enter
    cin.ignore(); // Ignora cualquier entrada pendiente
    cin.get(); // Espera al Enter
    system("cls"); // Limpia la pantalla
    main(); // Regresa al menú principal
}





// === Función para mostrar números amigos hasta n ===
void numerosAmigosHastaN() {
    int n;
    cout << "Digite el limite de los números amigos: "; // Solicita al usuario el límite hasta donde buscar números amigos
    cin >> n; // Lee el límite de números amigos

    int inicioX = 14, inicioY = 3; // Coordenadas iniciales dentro del cuadro
    int x = inicioX, y = inicioY; // Posición de impresión de los números amigos

    bool hayAmigos = false; // Variable para indicar si se encontraron números amigos
    gotoxy(x, y); // Coloca el encabezado en la consola
    cout << "Números amigos hasta " << n << ": "; // Muestra el encabezado
    y++; // Incrementa la posición vertical para los resultados

    const int maxX = 90; // Límite horizontal del cuadro
    const int maxY = 26; // Límite vertical del cuadro

    // Itera desde 1 hasta n-1 para buscar los números amigos
    for (int i = 1; i < n; i++) {
        int suma1 = sumaDivisores(i); // Calcula la suma de los divisores de i
        if (suma1 < n && sumaDivisores(suma1) == i && suma1 != i && i < suma1) {
            // Si la suma de divisores de i es igual a i (números amigos) y i < suma1 para evitar imprimir en reverso
            if (y >= maxY) { // Si se alcanza el límite vertical
                gotoxy(x, maxY + 1); // Mueve el cursor fuera del cuadro
                cout << "Presione Enter para continuar..."; // Solicita al usuario presionar Enter para continuar
                cin.ignore(); // Ignora cualquier entrada pendiente
                cin.get(); // Espera al Enter
                system("cls"); // Limpia la pantalla
                centrarRecuadro(100, 30); // Redibuja el cuadro
                gotoxy(14, 3); // Mueve el cursor al inicio
                cout << "Números amigos hasta " << n << ": "; // Muestra nuevamente el encabezado
                y = 4; // Reinicia la coordenada vertical
            }

            gotoxy(x, y); // Mueve el cursor a la posición (x, y)
            cout << "(" << i << ", " << suma1 << ") "; // Imprime el par de números amigos
            x += 20; // Incrementa la posición horizontal para evitar desbordamiento

            if (x >= maxX) { // Si el texto excede el límite horizontal de la consola
                x = inicioX; // Reinicia la posición horizontal
                y++; // Mueve a la siguiente línea
            }
            hayAmigos = true; // Marca que se encontró al menos un par de números amigos
        }
    }

    if (!hayAmigos) { // Si no se encontraron números amigos
        gotoxy(inicioX, y); // Mueve el cursor a la posición inicial
        cout << "No hay números amigos hasta " << n << "."; // Muestra que no se encontraron números amigos
        y++; // Incrementa la posición vertical para continuar
    }

    // Centra el mensaje de pausa y regresar al menú
    gotoxy(inicioX, maxY + 1); // Mueve el cursor al final de la pantalla
    cout << "Presione Enter para volver al menú..."; // Solicita que el usuario presione Enter
    cin.ignore(); // Ignora cualquier entrada pendiente
    cin.get(); // Espera al Enter
    system("cls"); // Limpia la pantalla
    main(); // Regresa al menú principal
}





// === Función para mostrar la secuencia de Fibonacci hasta n ===
void fibonacciHastaN() { 
    int n; // Variable para almacenar el límite hasta donde generar la secuencia
    cout << "Digite el limite para la secuencia de Fibonacci: ";
    cin >> n; // Solicita al usuario el límite para la secuencia de Fibonacci

    int a = 0, b = 1; // Inicializa los primeros dos números de la secuencia Fibonacci
    int inicioX = 14, inicioY = 3; // Coordenadas iniciales dentro del cuadro
    int x = inicioX, y = inicioY; // Posición de impresión de los números Fibonacci

    bool hayFibonacci = false; // Variable para controlar si la secuencia contiene números
    gotoxy(x, y); // Mueve el cursor a la posición (x, y)
    cout << "Secuencia de Fibonacci hasta " << n << ": "; // Muestra el encabezado de la secuencia
    y++; // Incrementa la posición vertical para los números Fibonacci

    const int maxX = 95; // Límite horizontal del cuadro
    const int maxY = 26; // Límite vertical del cuadro

    while (a <= n) { // Mientras que a sea menor o igual que n
        gotoxy(x, y); // Mueve el cursor a la posición (x, y)
        cout << a << " "; // Imprime el número actual de la secuencia Fibonacci
        x += 10; // Incrementa la posición horizontal para evitar que los números se sobrepongan

        if (x >= maxX) { // Si el texto excede el límite horizontal
            x = inicioX; // Reinicia la posición horizontal al inicio
            y++; // Mueve a la siguiente línea
        }

        if (y >= maxY) { // Si se alcanza el límite vertical
            gotoxy(x, maxY + 1); // Mueve el cursor fuera del cuadro
            cout << "Presione Enter para continuar..."; // Solicita al usuario presionar Enter
            cin.ignore(); // Ignora cualquier entrada pendiente
            cin.get(); // Espera al Enter
            system("cls"); // Limpia la pantalla
            centrarRecuadro(100, 30); // Redibuja el cuadro
            gotoxy(14, 3); // Mueve el cursor al inicio
            cout << "Secuencia de Fibonacci hasta " << n << ": "; // Muestra nuevamente el encabezado
            y = 4; // Reinicia la coordenada vertical para continuar
        }
        
        // Calcula el siguiente número de Fibonacci
        int temp = a; // Almacena el valor actual de a en temp
        a = b; // Asigna el valor de b a a (el siguiente número en la secuencia)
        b = temp + b; // Suma temp y b, y lo asigna a b (nuevo número en la secuencia)

        hayFibonacci = true; // Marca que se encontró al menos un número Fibonacci
    }

    if (!hayFibonacci) { // Si no se encontraron números en la secuencia
        gotoxy(inicioX, y); // Mueve el cursor a la posición inicial
        cout << "No hay números Fibonacci hasta " << n << "."; // Muestra mensaje de no encontrar números Fibonacci
        y++; // Incrementa la posición vertical para continuar
    }

    // Centrar el mensaje de pausa y regresar al menú
    gotoxy(inicioX, maxY + 1); // Mueve el cursor al final de la pantalla
    cout << "Presione Enter para volver al menú..."; // Solicita que el usuario presione Enter
    cin.ignore(); // Ignora cualquier entrada pendiente
    cin.get(); // Espera al Enter
    system("cls"); // Limpia la pantalla
    main(); // Regresa al menú principal
}




// === Función para ordenar un vector usando el método Shell y mostrar el proceso ===
void ordenarShell() {
    int n; // Tamaño del vector
    gotoxy(18, 5); // Mueve el cursor a la posición (18, 5)
    cout << "Ingrese el tamaño del vector: "; // Solicita al usuario el tamaño del vector
    cin >> n; // Lee el tamaño del vector

    int arr[n]; // Declara un arreglo de tamaño n
    gotoxy(18, 7); // Mueve el cursor a la posición (18, 7)
    cout << "Ingrese " << n << " elementos para el vector:"; // Pide los elementos para el vector

    int x = 18, y = 8; // Coordenadas iniciales para la entrada del vector
    for (int i = 0; i < n; i++) { // Bucle para ingresar los elementos
        gotoxy(x, y++); // Mueve el cursor para la siguiente línea
        cout << "Elemento " << i + 1 << ": "; // Muestra el mensaje para cada elemento
        cin >> arr[i]; // Lee cada elemento del vector
    }

    system("cls"); // Limpia la pantalla
    const int maxX = 106; // Límite horizontal del cuadro
    const int maxY = 26;  // Límite vertical del cuadro
    centrarRecuadro(100, 30); // Dibuja el recuadro inicial
    gotoxy(18, 2); // Mueve el cursor a la posición (18, 2)
    cout << "Proceso de ordenamiento usando Shell Sort:"; // Imprime mensaje de inicio de Shell Sort

    y = 3; // Reinicia la coordenada vertical para imprimir los pasos

    // Implementación del algoritmo Shell Sort
    for (int gap = n / 2; gap > 0; gap /= 2) { // Comienza con un gap grande y lo reduce
        if (y >= maxY-1) { // Si se alcanza el límite del cuadro
            gotoxy(x, maxY + 1); // Mueve el cursor fuera del cuadro
            cout << "Presione Enter para continuar..."; // Pide que presione Enter
            cin.ignore(); // Ignora cualquier entrada pendiente
            cin.get(); // Espera a que el usuario presione Enter
            system("cls"); // Limpia la pantalla
            centrarRecuadro(100, 30); // Dibuja el recuadro inicial nuevamente
            gotoxy(18, 2); // Mueve el cursor a la posición (18, 2)
            cout << "Proceso de ordenamiento usando Shell Sort (continuación):"; // Continuación del mensaje
            y = 3; // Reinicia la coordenada vertical para continuar mostrando los pasos
        }

        gotoxy(18, y++); // Mueve el cursor para mostrar el gap actual
        cout << "--- Gap actual: " << gap << " ---";

        for (int i = gap; i < n; i++) { // Itera desde el índice gap hasta n
            int temp = arr[i]; // Guarda el valor actual
            int j;

            if (y >= maxY-1) { // Verifica si el espacio en la pantalla se llena
                gotoxy(x, maxY + 1); // Mueve el cursor para mostrar mensaje de pausa
                cout << "Presione Enter para continuar..."; // Instrucciones para continuar
                cin.ignore(); // Ignora cualquier entrada pendiente
                cin.get(); // Espera al Enter
                system("cls"); // Limpia la pantalla
                centrarRecuadro(100, 30); // Redibuja el recuadro
                gotoxy(18, 2); // Mueve el cursor a la posición (18, 2)
                cout << "Proceso de ordenamiento usando Shell Sort (continuación):"; // Continuación del mensaje
                y = 3; // Reinicia la coordenada vertical
            }

            gotoxy(25, y++); // Mueve el cursor para imprimir el elemento actual
            cout << "  Evaluando elemento " << arr[i] << " en la posición " << i;

            // Compara y mueve los elementos dentro del subgrupo definido por el gap
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) { 
                gotoxy(25, y++); // Mueve el cursor para mostrar el proceso de intercambio
                cout << "    Moviendo elemento " << arr[j - gap] << " de posición " << j - gap
                     << " a posición " << j; // Muestra el movimiento del elemento
                arr[j] = arr[j - gap]; // Mueve el elemento hacia adelante
            }

            arr[j] = temp; // Coloca el elemento en su posición correcta
            gotoxy(25, y++); // Mueve el cursor para mostrar la colocación final
            cout << "    Colocando " << temp << " en la posición " << j;
        }

        // Imprime el vector después de procesar este gap
        if (y >= maxY-1) { // Verifica si el espacio se llena
            gotoxy(x, maxY + 1); // Mueve el cursor para mostrar mensaje de pausa
            cout << "Presione Enter para continuar..."; // Instrucción para continuar
            cin.ignore(); // Ignora cualquier entrada pendiente
            cin.get(); // Espera al Enter
            system("cls"); // Limpia la pantalla
            centrarRecuadro(100, 30); // Redibuja el recuadro
            gotoxy(18, 2); // Mueve el cursor para continuar
            cout << "Proceso de ordenamiento usando Shell Sort (continuación):"; // Continuación del mensaje
            y = 3; // Reinicia la coordenada vertical
        }

        gotoxy(25, y++); // Mueve el cursor para mostrar el estado del vector después del gap
        cout << "  Vector después de procesar gap " << gap << ": ";
        for (int k = 0; k < n; k++) { // Muestra el vector después del gap
            cout << arr[k] << " ";
        }
    }

    // Imprime el vector ordenado
    if (y >= maxY - 2) { // Verifica si el espacio es suficiente
        gotoxy(x, maxY + 1); // Mueve el cursor para mostrar mensaje de pausa
        cout << "Presione Enter para continuar..."; // Instrucción para continuar
        cin.ignore(); // Ignora cualquier entrada pendiente
        cin.get(); // Espera al Enter
        system("cls"); // Limpia la pantalla
        centrarRecuadro(100, 30); // Redibuja el recuadro
        gotoxy(18, 2); // Mueve el cursor para continuar
        cout << "Proceso de ordenamiento usando Shell Sort (continuación):"; // Continuación del mensaje
        y = 3; // Reinicia la coordenada vertical
    }

    gotoxy(18, y++); // Mueve el cursor para imprimir el resultado final
    cout << "Vector ordenado: "; // Muestra el vector ordenado
    for (int i = 0; i < n; i++) { // Imprime cada elemento del vector ordenado
        cout << arr[i] << " ";
    }

    // Mensaje final y retorno al menú
    gotoxy(18, maxY + 1); // Mueve el cursor para mostrar el mensaje de pausa final
    cout << "Presione Enter para volver al menú..."; // Pide al usuario presionar Enter
    cin.ignore(); // Ignora cualquier entrada pendiente
    cin.get(); // Espera al Enter
    system("cls"); // Limpia la pantalla
    main(); // Regresa al menú principal (esto puede ser peligroso si se llama repetidamente)
}



// === Función para buscar un elemento en un vector ===
void busquedaEnVector() {
    int n, x; // n = tamaño del vector, x = elemento a buscar
    gotoxy(18, 5); // Mueve el cursor a la posición (18, 5)
    cout << "Ingrese el tamaño del vector: "; // Solicita el tamaño del vector
    cin >> n; // Lee el tamaño del vector e lo asigna a la variable n
    int arr[n]; // Declara un arreglo de tamaño n
    gotoxy(18, 7); // Mueve el cursor a la posición (18, 7)
    cout << "Ingrese " << n << " elementos del vector:\n"; // Pide los elementos del vector

    int xPos = 18, yPos = 8; // Coordenadas iniciales para el ingreso de elementos
    for (int i = 0; i < n; i++) { // Bucle para ingresar los elementos del vector
        gotoxy(xPos, yPos++); // Mueve el cursor a la posición correspondiente para el siguiente elemento
        cout << "Elemento " << i + 1 << ": "; // Muestra el mensaje indicando el número del elemento a ingresar
        cin >> arr[i]; // Lee el elemento i-ésimo y lo almacena en arr[i]
    }

    system("cls"); // Limpia la pantalla
    centrarRecuadro(100, 24); // Dibuja un recuadro en la pantalla
    gotoxy(18, 5); // Mueve el cursor a la posición (18, 5)
    cout << "Buscando el número en el vector..."; // Imprime el mensaje de búsqueda

    gotoxy(18, 7); // Mueve el cursor a la posición (18, 7)
    cout << "Ingrese el número que desea buscar: "; // Solicita al usuario el número a buscar
    cin >> x; // Lee el número a buscar y lo almacena en x
    bool encontrado = false; // Variable booleana para verificar si el número fue encontrado

    // Búsqueda en el vector
    for (int i = 0; i < n; i++) { // Recorre el vector buscando el número
        if (arr[i] == x) { // Si encuentra el número en la posición i
            encontrado = true; // Cambia la variable 'encontrado' a verdadero
            gotoxy(18, 9); // Mueve el cursor a la posición (18, 9)
            cout << "Elemento encontrado en la posición " << i << "    "; // Imprime la posición del elemento encontrado
            break; // Sale del ciclo, ya que no es necesario seguir buscando
        }
    }

    if (!encontrado) { // Si el número no fue encontrado
        gotoxy(18, 9); // Mueve el cursor a la posición (18, 9)
        cout << "Elemento no encontrado."; // Imprime el mensaje de que el número no fue encontrado
    }

    // Centra el mensaje de pausa
    yPos = 11; // Coordenada vertical para la pausa
    system("PAUSE"); // Pausa la ejecución hasta que el usuario presione una tecla
    system("cls"); // Limpia la pantalla
    main(); // Regresa al menú principal (esto puede ser peligroso si se llama repetidamente en ciertos contextos)
}




// === Función para rotar un vector ===
void rotarVector() { 
    int n, k; // n = tamaño del vector, k = número de posiciones a rotar
    gotoxy(18, 5); // Mueve el cursor a la posición (18, 5)
    cout << "Ingrese el tamaño del vector: "; // Imprime el mensaje solicitando el tamaño del vector
    cin >> n; // Lee el tamaño del vector e lo asigna a la variable n
    int arr[n]; // Declara un arreglo de tamaño n
    gotoxy(18, 7); // Mueve el cursor a la posición (18, 7)
    cout << "Ingrese " << n << " elementos para el vector:\n"; // Imprime el mensaje solicitando los elementos del vector
    int xPos = 18, yPos = 8; // Coordenadas iniciales para el ingreso de elementos
    for (int i = 0; i < n; i++) { // Bucle para ingresar los elementos del vector
        gotoxy(xPos, yPos++); // Mueve el cursor a la posición correspondiente para el siguiente elemento
        cout << "Elemento " << i + 1 << ": "; // Muestra el mensaje indicando el número del elemento a ingresar
        cin >> arr[i]; // Lee el elemento i-ésimo y lo almacena en arr[i]
    }

    system("cls"); // Limpia la pantalla
    centrarRecuadro(100, 24); // Dibuja un recuadro en la pantalla
    gotoxy(18, 5); // Mueve el cursor a la posición (18, 5)
    cout << "Rotando el vector..."; // Imprime el mensaje indicando que se está realizando la rotación

    gotoxy(18, 7); // Mueve el cursor a la posición (18, 7)
    cout << "Ingrese el número de posiciones para rotar el vector: "; // Solicita las posiciones a rotar
    cin >> k; // Lee el valor de k (número de posiciones a rotar)

    // Rotar el vector k posiciones hacia la derecha
    k = k % n; // Si k es mayor que n, reduce el número de rotaciones (esto asegura que las rotaciones no se repitan innecesariamente)
    for (int i = 0; i < k; i++) { // Realiza la rotación k veces
        int temp = arr[n - 1]; // Guarda el último elemento en una variable temporal
        for (int j = n - 1; j > 0; j--) { // Mueve los elementos una posición a la derecha
            arr[j] = arr[j - 1]; // Desplaza cada elemento una posición a la derecha
        }
        arr[0] = temp; // Coloca el último elemento (guardado en 'temp') en la primera posición del vector
    }

    // Imprime el vector rotado
    gotoxy(18, 9); // Mueve el cursor a la posición (18, 9)
    cout << "Vector rotado: "; // Imprime el encabezado de la salida
    for (int i = 0; i < n; i++) { // Bucle para imprimir los elementos del vector rotado
        cout << arr[i] << " "; // Imprime cada elemento del vector rotado
    }

    // Centra el mensaje de pausa
    yPos = 11; // Coordenada vertical para la pausa
    system("PAUSE"); // Pausa la ejecución del programa hasta que el usuario presione una tecla
    system("cls"); // Limpia la pantalla
    main(); // Regresa al menú principal (esto puede ser peligroso si se llama repetidamente en ciertos contextos)
}



// === Función para hacer la intersección de dos vectores ===
void interseccionVectores() { // Función que realiza la intersección de dos vectores
    int n1, n2; // Declaramos las variables que contendrán el tamaño de los vectores
    gotoxy(18, 5); // Mueve el cursor a la posición (18, 5)
    cout << "Ingrese el tamaño del primer vector: "; // Imprime el mensaje pidiendo el tamaño del primer vector
    cin >> n1; // Lee el tamaño del primer vector e lo asigna a la variable n1
    int arr1[n1]; // Declara el primer vector con el tamaño n1
    gotoxy(18, 7); // Mueve el cursor a la posición (18, 7)
    cout << "Ingrese " << n1 << " elementos para el primer vector:\n"; // Imprime el mensaje pidiendo los elementos del primer vector
    int xPos = 18, yPos = 8; // Coordenadas iniciales para el ingreso de elementos
    for (int i = 0; i < n1; i++) { // Ciclo para ingresar los elementos del primer vector
        gotoxy(xPos, yPos++); // Mueve el cursor a la posición correspondiente para el siguiente elemento
        cout << "Elemento " << i + 1 << ": "; // Muestra el mensaje indicando el número del elemento a ingresar
        cin >> arr1[i]; // Lee el elemento i-ésimo del primer vector y lo guarda en arr1
    }

    system("cls"); // Limpia la pantalla
    centrarRecuadro(100, 30); // Dibuja un recuadro en la pantalla
    gotoxy(18, 5); // Mueve el cursor a la posición (18, 5)
    cout << "Ingrese el tamaño del segundo vector: "; // Imprime el mensaje pidiendo el tamaño del segundo vector
    cin >> n2; // Lee el tamaño del segundo vector e lo asigna a la variable n2
    int arr2[n2]; // Declara el segundo vector con el tamaño n2
    gotoxy(18, 7); // Mueve el cursor a la posición (18, 7)
    cout << "Ingrese " << n2 << " elementos para el segundo vector:\n"; // Imprime el mensaje pidiendo los elementos del segundo vector
    yPos = 8; // Reiniciamos la posición vertical para los elementos del segundo vector
    for (int i = 0; i < n2; i++) { // Ciclo para ingresar los elementos del segundo vector
        gotoxy(xPos, yPos++); // Mueve el cursor a la posición correspondiente para el siguiente elemento
        cout << "Elemento " << i + 1 << ": "; // Muestra el mensaje indicando el número del elemento a ingresar
        cin >> arr2[i]; // Lee el elemento i-ésimo del segundo vector y lo guarda en arr2
    }

    system("cls"); // Limpia la pantalla
    centrarRecuadro(100, 24); // Dibuja el recuadro en la pantalla

    bool hayInterseccion = false; // Declaramos una variable de control para verificar si hay intersección

    gotoxy(18, 7); // Mueve el cursor a la posición (18, 7)
    // Imprimimos la intersección de los vectores
    cout << "Intersección: "; // Imprime el encabezado de la intersección
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
        cout << "No hay intersección entre los vectores."; // Imprime el mensaje indicando que no hay intersección
    }

    // Centra el mensaje de pausa
    int yPosFinal = 9; // Coordenada vertical para la pausa
    system("PAUSE"); // Pausa la ejecución del programa, esperando que el usuario presione una tecla
    system("cls"); // Limpia la pantalla
    main(); // Llama a la función 'main()' para regresar al menú principal (esto puede ser peligroso si se llama repetidamente en ciertos contextos)
}



// === Función para hacer la unión de dos vectores ===
void unionVectores() { // Función que realiza la unión de dos vectores
    int n1, n2; // Declaramos las variables que contendrán el tamaño de los vectores
    gotoxy(18, 5); // Mueve el cursor a la posición (18, 5) en la consola
    cout << "Ingrese el tamaño del primer vector: "; // Imprime el mensaje pidiendo el tamaño del primer vector
    cin >> n1; // Lee el tamaño del primer vector y lo asigna a la variable n1
    int arr1[n1]; // Declara el primer vector con el tamaño n1
    gotoxy(18, 7); // Mueve el cursor a la posición (18, 7)
    cout << "Ingrese " << n1 << " elementos para el primer vector:\n"; // Imprime el mensaje pidiendo los elementos del primer vector
    int xPos = 18, yPos = 8; // Coordenadas iniciales para el ingreso de elementos
    for (int i = 0; i < n1; i++) { // Ciclo para ingresar los elementos del primer vector
        gotoxy(xPos, yPos++); // Mueve el cursor a la posición correspondiente para el siguiente elemento
        cout << "Elemento " << i + 1 << ": "; // Muestra el mensaje indicando el número del elemento a ingresar
        cin >> arr1[i]; // Lee el elemento i-ésimo del primer vector y lo guarda en arr1
    }

    system("cls"); // Limpia la pantalla
    centrarRecuadro(100, 30); // Dibuja un recuadro en la pantalla
    gotoxy(18, 5); // Mueve el cursor a la posición (18, 5)
    cout << "Ingrese el tamaño del segundo vector: "; // Imprime el mensaje pidiendo el tamaño del segundo vector
    cin >> n2; // Lee el tamaño del segundo vector y lo asigna a la variable n2
    int arr2[n2]; // Declara el segundo vector con el tamaño n2
    gotoxy(18, 7); // Mueve el cursor a la posición (18, 7)
    cout << "Ingrese " << n2 << " elementos para el segundo vector:\n"; // Imprime el mensaje pidiendo los elementos del segundo vector
    yPos = 8; // Reiniciamos la posición vertical para los elementos del segundo vector
    for (int i = 0; i < n2; i++) { // Ciclo para ingresar los elementos del segundo vector
        gotoxy(xPos, yPos++); // Mueve el cursor a la posición correspondiente para el siguiente elemento
        cout << "Elemento " << i + 1 << ": "; // Muestra el mensaje indicando el número del elemento a ingresar
        cin >> arr2[i]; // Lee el elemento i-ésimo del segundo vector y lo guarda en arr2
    }

    system("cls"); // Limpia la pantalla
    centrarRecuadro(100, 24); // Dibuja el recuadro en la pantalla
    gotoxy(18, 5); // Mueve el cursor a la posición (18, 5)
    cout << "Calculando la union de los vectores..."; // Muestra el mensaje indicando que se está calculando la unión de los vectores

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
    gotoxy(18, 7); // Mueve el cursor a la posición (18, 7)
    cout << "Unión ordenada: "; // Imprime el encabezado
    for (int i = 0; i < idx; i++) { // Iteramos por cada elemento de la unión
        cout << unionVector[i] << " "; // Imprime el elemento i-ésimo de unionVector
    }

    // Centra el mensaje de pausa
    int yPosFinal = 9; // Coordenada vertical para la pausa
    system("PAUSE"); // Pausa la ejecución del programa, esperando que el usuario presione una tecla
    system("cls"); // Limpia la pantalla
    main(); // Llama a la función 'main()' para regresar al menú principal (esto puede ser peligroso si se llama repetidamente en ciertos contextos)
}



void recorrerVectorTresFormas() { // Define una función llamada 'recorrerVectorTresFormas' que no recibe parámetros y no retorna ningún valor
    int n; // Declara una variable entera 'n' que almacenará el tamaño del vector
    gotoxy(18, 5); // Mueve el cursor a la posición (18, 5) de la consola
    cout << "Ingrese el tamaño del vector: "; // Muestra un mensaje solicitando al usuario que ingrese el tamaño del vector
    cin >> n; // Lee el valor ingresado por el usuario y lo almacena en la variable 'n'
    int arr[n]; // Declara un arreglo 'arr' de tamaño 'n' especificado por el usuario
    gotoxy(18, 7); // Mueve el cursor a la posición (18, 7) de la consola
    cout << "Ingrese " << n << " elementos para el vector:\n"; // Muestra un mensaje solicitando que se ingresen 'n' elementos para llenar el arreglo
    int xPos = 18, yPos = 8; // Inicializa las coordenadas (xPos, yPos) para ubicar los elementos de entrada
    for (int i = 0; i < n; i++) { // Bucle 'for' para llenar el arreglo
        gotoxy(xPos, yPos++); // Mueve el cursor a la posición correspondiente para ingresar el siguiente elemento
        cout << "Elemento " << i + 1 << ": "; // Muestra el mensaje indicando el número del elemento a ingresar
        cin >> arr[i]; // Lee el valor ingresado por el usuario y lo almacena en la posición 'i' del arreglo
    }

    system("cls"); // Limpia la pantalla
    centrarRecuadro(100, 24); // Llama a la función 'centrarRecuadro' para dibujar un recuadro en la pantalla
    gotoxy(18, 5); // Mueve el cursor a la posición (18, 5)
    cout << "Recorriendo el vector en tres formas..."; // Muestra el mensaje indicando que se va a recorrer el vector de tres formas

    // Recorrido normal
    gotoxy(18, 7); // Mueve el cursor a la posición (18, 7)
    cout << "Recorrido normal: "; // Imprime el encabezado para mostrar el recorrido normal del arreglo
    for (int i = 0; i < n; i++) { // Bucle 'for' para recorrer el arreglo de forma normal
        cout << arr[i] << " "; // Imprime el elemento en la posición 'i' del arreglo
    }
    cout << endl; // Inserta un salto de línea después del recorrido normal

    // Recorrido inverso
    gotoxy(18, 9); // Mueve el cursor a la posición (18, 9)
    cout << "Recorrido inverso: "; // Imprime el encabezado para mostrar el recorrido inverso del arreglo
    for (int i = n - 1; i >= 0; i--) { // Bucle 'for' para recorrer el arreglo de forma inversa, desde el último elemento hasta el primero
        cout << arr[i] << " "; // Imprime el elemento en la posición 'i' del arreglo en orden inverso
    }
    cout << endl; // Inserta un salto de línea después del recorrido inverso

    // Recorrido con paso de 2
    gotoxy(18, 11); // Mueve el cursor a la posición (18, 11)
    cout << "Recorrido con paso de 2: "; // Imprime el encabezado para mostrar el recorrido con paso de 2 del arreglo
    for (int i = 0; i < n; i += 2) { // Bucle 'for' para recorrer el arreglo con paso de 2, es decir, saltando un elemento cada vez
        cout << arr[i] << " "; // Imprime el elemento en la posición 'i' del arreglo, saltando de 2 en 2
    }

    // Centra el mensaje de pausa
    int yPosFinal = 13; // Coordenada vertical para la pausa, aunque no se utiliza en el código
    system("PAUSE"); // Pausa la ejecución del programa, esperando que el usuario presione una tecla
    system("cls"); // Limpia la pantalla
    main(); // Llama a la función 'main()' para regresar al menú principal (esto puede ser peligroso si se llama repetidamente en ciertos contextos)
}


