#include <iostream>
int main(int argc, char const *argv[]) {
  char cadena[100],res;
  int x=0,a=0;
  std::cout << "ingrese fraze a encriptar" << '\n';
  gets(cadena);

  while (cadena[x] !='\0' && cadena[x]>=0) {
  x++;
  }
  for ( x = x-1; x >=0; x--) {
    cadena[x]=cadena[x]-66+100;
    std::cout << " " <<cadena[x];
  }
  if (cadena[x]%2==0) {
    for (size_t i = 0; i < cadena[x]; i++) {
      cadena[x]+2;
    }
  }else{
    for (size_t i = 0; i < cadena[x]; i++) {
      cadena[x]+3;
    }
  }
  return 0;
}
