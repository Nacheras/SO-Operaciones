#include <stdio.h>
#include "sumar.h"
#include "restar.h"
#include "multiplicar.h"
#include "dividir.h"


int main() {
    int opcion, numero1, numero2;

    do {
        printf("Menú de operaciones:\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        if (opcion >= 1 && opcion <= 4) {
            printf("Ingrese dos números: ");
            scanf("%d %d", &numero1, &numero2);
        }

        switch (opcion) {
            case 1:
                if (numero1 >= 0 && numero2 >= 0) {
                printf("Resultado de la suma: %d\n", sumar(numero1, numero2));
                } else {
                    printf("Error: los números deben ser >= 0.\n");
                }
                break;
            case 2:
                if (numero1 >= 0 && numero2 >= 0) {
                printf("Resultado de la resta: %d\n", restar(numero1, numero2));
                } else {
                    printf("Error: los números deben ser >= 0.\n");
                }
                break;
            case 3:
                if (numero1 >= 0 && numero2 >= 0) {
                printf("Resultado de la multiplicación: %d\n", multiplicar(numero1, numero2));
                } else {
                    printf("Error: los números deben ser >= 0.\n");
                }
                break;
            case 4:
                if (numero2 != 0) {
                    printf("Resultado de la división: %f\n", dividir(numero1, numero2));
                } else {
                    printf("Error: no se puede dividir por cero.\n");
                }
                break;
            case 5:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida. Por favor, seleccione una opción válida.\n");
        }

    } while (opcion != 5);

    return 0;
}
