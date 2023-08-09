#include <stdio.h>

float divisionEnteros(float a, float b) {
    if (b == 0) {
        printf("No se puede dividir por cero\n");
        return 0;  // Retorna 0 en caso de división por cero
    } else {
        return a / b;
    }
}

int main() {
    float num1, num2;

    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);

    float resultado = divisionEnteros(num1, num2);

    if (num2 != 0) {
        printf("El resultado de la división es: %.2f\n", resultado);
    }

    return 0;
}

