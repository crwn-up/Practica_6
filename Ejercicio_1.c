
#include <stdio.h>

int main() {
    double resultado, num;
    char operacion;

    // Pedir el primer número
    printf("Ingrese el primer número: ");
    scanf("%lf", &resultado);

    while (resultado != 0) {
        // Pedir operación y número
        printf("Ingrese una operación (+, -, *, /): ");
        scanf(" %c", &operacion);
        printf("Ingrese un número: ");
        scanf("%lf", &num);

        // Realizar la operación
        switch (operacion) {
            case '+':
                resultado += num;
                break;
            case '-':
                resultado -= num;
                break;
            case '*':
                resultado *= num;
                break;
            case '/':
                if (num != 0)
                    resultado /= num;
                else
                    printf("Error: División por cero no permitida.\n");
                break;
            default:
                printf("Operación no válida.\n");
                continue;  // Volver a pedir operación sin afectar el resultado
        }

        // Mostrar resultado
        printf("Resultado actual: %.2lf\n", resultado);
    }

    printf("El resultado es 0. Fin del programa.\n");
    return 0;
}
