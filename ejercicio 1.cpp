#include <iostream>

using namespace std;


struct Nodo {
    int dato;
    Nodo* siguiente;
};


//Prototipos de Funciones
void insertarLista(Nodo *&, int);

int main()
{
    Nodo* lista = NULL;

    int dato;
    
    cout << "Inserta un numero: ";
    cin >> dato;

    insertarLista(lista, dato);

    cout << "Inserta un numero: ";
    cin >> dato;

    insertarLista(lista, dato);
}


void insertarLista(Nodo *&lista, int n) {

    Nodo* nuevo_nodo = new Nodo(); //new Nodo() = Almacenar espacio de memoria

    nuevo_nodo->dato = n;

    Nodo* aux1 = lista;
    Nodo* aux2 = NULL;

    //Tener siempre ordenada nuestra lista
    while ((aux1 != NULL) && (aux1->dato < n)) {
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }

    if (lista == aux1) {
        lista == nuevo_nodo;
    }
    else {
        aux2->siguiente = nuevo_nodo;
    }

    nuevo_nodo->siguiente = aux1;

    cout << "Elemento " << n << " insertado a la lista correctamente" << endl << endl ;

}