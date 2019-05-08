#include <iostream>
int main(int argc, char const *argv[]) {
  int array[10]={19,1,9,7,3,10,13,15,8,12};
  int aux,k;
  for (size_t i = 0; i < 10; i++) {
    for (size_t j = 0; j <10-i; j++) {
      if (array[j]>array[j+1]) {
        aux=array[j];
        array[j]=array[j+1];
        array[j+1]=aux;
      }
    }
    if(i==2){
      std::cout << "posicion 3" << '\n';
      for ( k = 0; k < 10; k++) {
        std::cout << array[k] <<" ";
      }
    }
    if(i==6){
      std::cout << "\nposicion 7" << '\n';
      for ( k = 0; k < 10; k++) {
        std::cout << array[k] <<" ";
      }
    }
    if (i==3) {
      std::cout << "\nposicion completamente ordenada" << '\n';
      for ( k = 0; k < 10; k++) {
        std::cout <<array[k] <<" ";
      }
    }
  }
  std::cout << "\nposicion final " << '\n';
  for (size_t i = 0; i < 10; i++) {
    std::cout <<array[i] <<" ";
  }
  return 0;
}
