#include <iostream>

struct persona {
  std::string nombre;
  std::string apellidos;
  char genero;
  int edad;
  std::string telefono;
};

//funcion principal
int main(int argc, char const *argv[]) {
  int const cantidad=1;
  persona personas[cantidad];
  for (size_t i = 0; i < cantidad; i++) {
    std::cout << "Nombre: " ;std::cin >> personas[i].nombre;
    std::cout << "Apellidos: ";std::cin >> personas[i].apellidos;
    std::cout << "Genero: " ;std::cin >> personas[i].genero;
    std::cout << "Edad: ";std::cin >> personas[i].edad;
    std::cout << "Telefono: " ;std::cin >> personas[i].telefono;
  }
  std::cout << "los datos de las personas son: " << '\n';
  //mostrar los datos
  for (size_t i = 0; i < cantidad; i++) {
    std::cout <<"nombre: "<<personas[i].nombre <<"\tapellidos: "<<personas[i].apellidos<< "\tgenero: "<<personas[i].genero<< "\tedad: "<<personas[i].edad<< "\ttelefono: "<<personas[i].telefono<<"\n";
  }
  return 0;
}
