#include <iostream>
int main(int argc, char const *argv[]) {
  int suma1=0,suma2=0;
  int matriz[3][3]={{-2,56,50},{44,-12,-42},{70,57,-86}};
  for (size_t i = 0; i <3; i++) {
    for (size_t j = 0; j <3; j++) {
      if (matriz[i][j]<0) {
        suma1=suma1+matriz[i][j];
      }else{
        suma2=suma2+matriz[i][j];
      }
    }
  }
  std::cout << "la suma negativa es: " <<suma1;
  std::cout << "\nla suma positiva es: " <<suma2;
  return 0;
}
