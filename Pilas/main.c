#include <stdio.h>
#include "Pila.h"

int main(int argc, char **argv)
{
	Pila* p1 = crearPila();
    Pila* p2 = crearPila();
    
    pushPila(p1, 100);
    pushPila(p1, 999);
    pushPila(p2, 45);
    pushPila(p2, 67);
    
    // Sapiar el primer dato de la Pila1
    printf("Tope de Pila1: %d\n", topPila(p1));
    printf("Tope de Pila1: %d\n", topPila(p1));
    printf("Tope de Pila1: %d\n", topPila(p1));
    
    // Quitar el rimer elemento de la pila
    printf("Pop de Pila1: %d\n", popPila(p1));
    printf("Pop de Pila1: %d\n", popPila(p1));
    
    if(PilaEstaVacia(p1)){
        printf("No puedo mostrar el valor, porque la pila está vacia.\n");
    }
    
    // Sapiar el primer dato de la Pila2
    printf("Tope de Pila1: %d\n", topPila(p2));
    printf("Tope de Pila1: %d\n", topPila(p2));
    printf("Tope de Pila1: %d\n", topPila(p2));
    
    // Quitar el primer elemento de la pila
    printf("Pop de Pila1: %d\n", popPila(p2));
    printf("Pop de Pila1: %d\n", popPila(p2));
    
    printf("Esto tiene error jejeje: %d\n", popPila(p2));
    
    printf("Esto no se debería mostrar, porque se cerró el programa");
    
    return 0;
}
