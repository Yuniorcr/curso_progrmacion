#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int c;
  cout << "ingrese numero de telefonos a guardar" << '\n';
  cin >> c;
  int telefono[c];
  string nombres[c];
  for (size_t i = 0; i <c; i++) {
    cout << "ingrese su nombre" << '\n';
    cin >> nombres[i];
    cout << "ingrese numero de telefono" << '\n';
    cin >> telefono[i];
  }
  int nomb=(sizeof(nombres)/sizeof(nombres[0]));
  for (size_t i = 0; i < nomb; i++) {
    cout << "nombre: " << '\n';
    cout << nombres[i] << '\n';
    cout << telefono[i]<<'\n';
  }
  return 0;
}
