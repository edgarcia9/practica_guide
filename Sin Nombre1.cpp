#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // Para el uso de las flechas de dirección y getch()

// Estructura para almacenar los datos de un libro
struct Libro {
    char titulo[100];
    char autor[100];
    char editorial[100];
    char fechaPublicacion[20];
};

// Función para mostrar el menú y obtener la opción seleccionada
int mostrarMenu() {
    system("cls");
    printf("Menu:\n");
    printf("1. Ingresar datos de un libro\n");
    printf("2. Salir\n");
    printf("Selecciona una opcion: ");
    return getch(); // Obtener la tecla presionada
}

int main() {
    FILE *archivo;
    struct Libro libro;
    int opcion;
    
    do {
        opcion = mostrarMenu();
        
        switch (opcion) {
            case '1':
                system("cls");
                printf("Ingresar datos del libro:\n");
                printf("Titulo: ");
                gets(libro.titulo);
                printf("Autor: ");
                gets(libro.autor);
                printf("Editorial: ");
                gets(libro.editorial);
                printf("Fecha de publicacion: ");
                gets(libro.fechaPublicacion);
                
                archivo = fopen("libros.txt", "a");
                if (archivo == NULL) {
                    printf("Error al abrir el archivo.\n");
                    return 1;
                }
                
                fprintf(archivo, "Titulo: %s\n", libro.titulo);
                fprintf(archivo, "Autor: %s\n", libro.autor);
                fprintf(archivo, "Editorial: %s\n", libro.editorial);
                fprintf(archivo, "Fecha de publicacion: %s\n", libro.fechaPublicacion);
                fprintf(archivo, "---------------------------------\n");
                
                fclose(archivo);
                printf("Datos del libro guardados exitosamente.\n");
                getch(); // Pausar para que el usuario vea el mensaje
                break;
                
            case '2':
                printf("Saliendo...\n");
                break;
                
            default:
                printf("Opcion no valida. Presiona una tecla para continuar...\n");
                getch();
                break;
        }
        
    } while (opcion != '2');
    
    return 0;
}