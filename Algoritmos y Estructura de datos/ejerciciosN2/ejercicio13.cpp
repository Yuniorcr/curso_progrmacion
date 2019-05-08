#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

int main(int argc, char const *argv[]) {
  char nombres[1],nombres2[1];
  std::cout << "digite cadena de caracteres:" << '\n';
  cin.getline(nombres,50,'\n');
  std::cout << "original: " << '\n';
  std::cout <<nombres;
  strrev(nombres);
  std::cout << "\ninvertido: \n" <<nombres;
}
