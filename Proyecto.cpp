#include <iostream>
#include <locale.h>
#include <sys/time.h>//para medir tiempo
#include <ctime> //para medir tiempo

using namespace std;

// Función para calcular la diferencia de tiempo en segundos
float time_diff(struct timeval *start, struct timeval *end)
{
    return (end->tv_sec - start->tv_sec) + 1e-6 * (end->tv_usec - start->tv_usec);
}

int main()
{

    setlocale(LC_ALL, "");

    // Declaración de variables
    int Nmenu, menu = 0, puntos1 = 0, puntos2 = 0, puntos3 = 0, puntos4 = 0, puntos5 = 0, puntos6 = 0, R1[6], R2[6], R3[6], R4[6], R5[6], R6[6];
    int players[15], i = 0;
    float time[15];
    struct timeval start{};
    struct timeval end{};

    cout << "**Bienvenido al Juego Orden Correcto**" << endl
         << endl;

    // Bucle principal del menú
    while (menu == 2 || menu == 0)
    {
        Nmenu = 0;
        // Mostrar el menú y solicitar una opción válida
        while (Nmenu > 4 || Nmenu < 1)
        {
            cout << "Seleccione una opcion del menu: " << endl
                 << endl;
            cout << "1. Jugar" << endl;
            cout << "2. Reglas" << endl;
            cout << "3. Puntajes" << endl;
            cout << "4. Salir" << endl
                 << endl;

            cin >> Nmenu;
            system("cls");
        }
        // Procesar la opción seleccionada
        switch (Nmenu)
        {
        // Opción 1: Jugar
        case 1:
            gettimeofday(&start, nullptr);
            menu = 1;
            cout << "Comenzando el juego..." << endl;
            cout << "**Primer nivel: Ordena los siguientes numeros en orden descendente.**" << endl;
            cout << "4    9    2    7    1    5" << endl;

            for (int i = 0; i < 6; i++)
            {
                cout << "Ingrese el numero " << i + 1 << ": ";
                cin >> R1[i];
            }
            // Evaluar respuestas del primer nivel
            if (R1[0] == 9)
            {
                puntos1++;
            }
            if (R1[1] == 7)
            {
                puntos1++;
            }
            if (R1[2] == 5)
            {
                puntos1++;
            }
            if (R1[3] == 4)
            {
                puntos1++;
            }
            if (R1[4] == 2)
            {
                puntos1++;
            }
            if (R1[5] == 1)
            {
                puntos1++;
            }

            // Mostrar resultados del primer nivel
            cout << endl;
            cout << "Has terminado el nivel 1!" << endl;
            cout << "Puntos nivel 1: " << puntos1 << " de 6" << endl
                 << endl;
            system("pause");
            system("cls");

            cout << "**Segundo nivel: Ordena los siguientes numeros en orden descendente.**" << endl;
            cout << "15    8    22    3    19    10" << endl;
            for (int i = 0; i < 6; i++)
            {
                cout << "Ingrese el numero " << i + 1 << ": ";
                cin >> R2[i];
            }
            // Evaluar respuestas del segundo nivel
            if (R2[0] ==22)
            {
                puntos2++;
            }
            if (R2[1] == 19)
            {
                puntos2++;
            }
            if (R2[2] == 15)
            {
                puntos2++;
            }
            if (R2[3] == 10)
            {
                puntos2++;
            }
            if (R2[4] == 8)
            {
                puntos2++;
            }
            if (R2[5] == 3)
            {
                puntos2++;
            }

            // Mostrar resultados del segundo nivel
            cout << endl;
            cout << "Has terminado el nivel 2!" << endl;
            cout << "Puntos nivel 2: " << puntos2 << " de 6" << endl
                 << endl;
            system("pause");
            system("cls");

            cout << "**Tercer nivel: Ordena los siguientes numeros en orden descendente.**" << endl;
            cout << "30    45    12    28    60    41" << endl;
            for (int i = 0; i < 6; i++)
            {
                cout << "Ingrese el numero " << i + 1 << ": ";
                cin >> R3[i];
            }

            // Evaluar respuestas del tercer nivel
            if (R3[0] == 60)
            {
                puntos3++;
            }
            if (R3[1] == 45)
            {
                puntos3++;
            }
            if (R3[2] == 41)
            {
                puntos3++;
            }
            if (R3[3] == 30)
            {
                puntos3++;
            }
            if (R3[4] == 28)
            {
                puntos3++;
            }
            if (R3[5] == 12)
            {
                puntos3++;
            }

            // Mostrar resultados del tercer nivel
            cout << endl;
            cout << "Has terminado el nivel 3!" << endl;
            cout << "Puntos nivel 3: " << puntos3 << " de 6" << endl
                 << endl;
            system("pause");
            system("cls");

            cout << "**Cuarto nivel: Ordena los siguientes numeros en orden descendente.**" << endl;
            cout << "5    100    56    89    73    41" << endl;
            for (int i = 0; i < 6; i++)
            {
                cout << "Ingrese el numero " << i + 1 << ": ";
                cin >> R4[i];
            }
            // Evaluar respuestas del cuarto nivel
            if (R4[0] == 100)
            {
                puntos4++;
            }
            if (R4[1] == 89)
            {
                puntos4++;
            }
            if (R4[2] == 73)
            {
                puntos4++;
            }
            if (R4[3] == 56)
            {
                puntos4++;
            }
            if (R4[4] == 41)
            {
                puntos4++;
            }
            if (R4[5] == 5)
            {
                puntos4++;
            }

            // Mostrar resultados del cuarto nivel
            cout << endl;
            cout << "Has terminado el nivel 4!" << endl;
            cout << "Puntos nivel 4: " << puntos4 << " de 6" << endl
                 << endl;
            system("pause");
            system("cls");

            cout << "**Quinto nivel: Ordena los siguientes numeros en orden descendente.**" << endl;
            cout << "120    75    99    150    60    135" << endl;
            for (int i = 0; i < 6; i++)
            {
                cout << "Ingrese el numero " << i + 1 << ": ";
                cin >> R5[i];
            }

            // Evaluar respuestas del quinto nivel
            if (R5[0] == 150)
            {
                puntos5++;
            }
            if (R5[1] == 135)
            {
                puntos5++;
            }
            if (R5[2] == 120)
            {
                puntos5++;
            }
            if (R5[3] == 99)
            {
                puntos5++;
            }
            if (R5[4] == 75)
            {
                puntos5++;
            }
            if (R5[5] == 60)
            {
                puntos5++;
            }

            // Mostrar resultados del quinto nivel
            cout << endl;
            cout << "Has terminado el nivel 5!" << endl;
            cout << "Puntos nivel 5: " << puntos5 << " de 6" << endl
                 << endl;
            system("pause");
            system("cls");

            cout << "**Sexto nivel: Ordena los siguientes numeros en orden descendente.**" << endl;
            cout << "200    350    180    275    400    310" << endl;
            for (int i = 0; i < 6; i++)
            {
                cout << "Ingrese el numero " << i + 1 << ": ";
                cin >> R6[i];
            }

            // Evaluar respuestas del sexto nivel
            if (R6[0] == 400)
            {
                puntos6++;
            }
            if (R6[1] == 350)
            {
                puntos6++;
            }
            if (R6[2] == 310)
            {
                puntos6++;
            }
            if (R6[3] == 275)
            {
                puntos6++;
            }
            if (R6[4] == 200)
            {
                puntos6++;
            }
            if (R6[5] == 180)
            {
                puntos6++;
            }

            // Mostrar resultados del sexto nivel
            cout << endl;
            cout << "Has terminado el nivel 6!" << endl;
            cout << "Puntos nivel 6: " << puntos6 << " de 6" << endl
                 << endl;
            system("pause");
            system("cls");

            // Mostrar resultados finales
            cout << "**Resultados Finales**" << endl
                 << endl;
            cout << "Puntos nivel 1: " << puntos1 << " de 6" << endl;
            cout << "Puntos nivel 2: " << puntos2 << " de 6" << endl;
            cout << "Puntos nivel 3: " << puntos3 << " de 6" << endl;
            cout << "Puntos nivel 4: " << puntos4 << " de 6" << endl;
            cout << "Puntos nivel 5: " << puntos5 << " de 6" << endl;
            cout << "Puntos nivel 6: " << puntos6 << " de 6" << endl;
            cout << "Puntos Totales: " << puntos1 + puntos2 + puntos3 + puntos4 + puntos5 + puntos6 << " de 36" << endl<< endl;
            cout << "Regresando al menu principal..." << endl;

            system("pause");
            system("cls");

            menu = 2;

            // Medir tiempo final
            gettimeofday(&end, nullptr);
            time[i] = time_diff(&start, &end);
            
            // Guardar puntaje del jugador
            players[i++] = puntos1 + puntos2 + puntos3 + puntos4 + puntos5 + puntos6;

            break;

        case 2:

            // Opción 2: Mostrar reglas
            menu = 2;
            cout << "**Reglas del Juego Orden Correcto**" << endl;
            cout << "1. El objetivo del juego es ordenar una serie de numeros en orden ascendente." << endl;
            cout << "2. Se te presentará una lista desordenada de numeros y debes ingresar el caracter de los numeros en orden." << endl;
            cout << "3. Si ingresas correctamente todos los números en orden, ganaras puntos." << endl;
            cout << "4. Si cometes un error no se te sumaran puntos." << endl<< endl;
            cout << "5. Recuerda que mientras más rápido completes el juego, mejor será tu tiempo." << endl<< endl;
            system("pause");
            system("cls");

            break;

        case 3:

            // Opción 3: Mostrar puntajes
            cout << "**Puntajes de los Jugadores**" << endl
                 << endl;

            for (int j = 0; j < i; j++)
            {
                cout << "Jugador " << j + 1 << ": " << players[j] << " puntos" << endl;
                cout << "Tiempo: " << time[j] << " segundos" << endl
                     << endl;
            }

            menu = 2;
            system("pause");
            system("cls");

            break;
        case 4:

            // Opción 4: Salir
            menu = 7;
            break;
        }
    }
    return 0;
}