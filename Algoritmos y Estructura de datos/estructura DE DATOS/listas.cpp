#include <iostream>
#include <new>
//crear estructura nodo
struct Nodo {
  int dato;
  Nodo *enlace;
};
//declarando funiones de la lista
void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);
void buscarNodoLista(Nodo *&, int)
int main(int argc, char const *argv[]) {
  //crear un puntero inicial que apunte ala lista
  Nodo *primero= nullptr;
  //insertar nodos ala lista
  insertarLista(primero, 5);
  insertarLista(primero, 10);
  insertarLista(primero, 7);
  mostrarLista(primero);
  buscarNodoLista(primero,10);

  return 0;
};
void insertarLista(Nodo *&lista, int elemento){
  Nodo *nuevo_Nodo = new Nodo();
  nuevo_Nodo->dato=elemento;
  nuevo_Nodo->enlace=nullptr;
  //creamos una variabke auxiliar
  Nodo *aux;
  //comprobar si la lista esta vacia
  if (lista == nullptr) {
    lista= nuevo_Nodo;
  }else{
    aux=lista;
    while (aux->enlace != nullptr) {
      aux = aux->enlace;
    }
    aux->enlace=nuevo_Nodo;
  }
  std::cout << "el nodo: " <<elemento<<" ha sido insertado ala lista\n";
}
void mostrarLista(Nodo *lista) {
  Nodo *aux = lista;
  while (aux !=nullptr) {
    std::cout <<aux->dato <<" -> ";
    aux = aux->enlace;
  }
}
void buscarNodoLista(Nodo *lista, int elemento) {
  Nodo *aux=lista;
  bool bandera=false;
  while (aux != nullptr) {
    if (aux->dato== elemento) {
      bandera=true;
      aux = aux->enlace;
    }
  }if (bandera) {
    std::cout << "El elemento" <<elemento<<" si existe en la lista";
  }else{
    std::cout << "El elemento" <<elemento<<" no existe en la lista";
  }
}
