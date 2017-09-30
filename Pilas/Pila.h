#include <stdlib.h>

// La pila estara compuesta de Nodos
typedef struct Nodo{
    int valor;
    Nodo* next;
} Nodo;

// La Pila misma
// Tiene una referencia al primer Nodo de la Pila y un tamaño para control
typedef struct{
    Nodo* ultimo;
    int size;
    char* nombre;
} Pila;

// Crear la Pila
Pila* crearPila(){
    Pila* pivote;
    pivote = (Pila*) malloc(sizeof(Pila));
    if(pivote == NULL){
        printf("No hay memoria suficiente para almacenar la pila");
        exit(-1);
    }
    pivote->size = 0;
    pivote->ultimo = NULL;
    
    return pivote;
}

// Insertar en la Pila
void pushPila(Pila* pila, int valor){
    Nodo* pivote = (Nodo*) malloc(sizeof(Nodo));
    pivote->valor = valor;
    
    if(pila->size == 0){
        pivote->next = NULL;
        pila->ultimo = pivote;
    }else{
        pivote->next = pila->ultimo;
        pila->ultimo = pivote;
    }
    
    pila->size++;
}

// Ver el tope de la Pila
int topPila(Pila* pila){
    return pila->ultimo->valor;
}

// Eliminar de la Pila
int popPila(Pila* pila){
    
    if(pila->size == 0){
        printf("No existe nada en la pila para eliminar");
        exit(-1);
    }
    
    int pivote = pila->ultimo->valor;
    Nodo* ultimo = pila->ultimo;
    pila->ultimo = pila->ultimo->next;
    free(ultimo);
    pila->size--;
    return pivote;
}

int PilaEstaVacia(Pila* pila){
    return pila->size == 0;
}