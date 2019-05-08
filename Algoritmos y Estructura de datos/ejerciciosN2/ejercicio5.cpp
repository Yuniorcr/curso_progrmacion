#include <iostream>
#include <ctime>
int main(int argc, char const *argv[]) {
  int arreglo[10],a[]={0};
  srand(time(0));
  for (int i = 0; i <10; i++){
    a[i] = 50 + rand() % (100+1-50);
    std::cout <<a[i]<<" ";
  }
  std::cout << "\nnumeros multiplicados:\n";
  for (size_t i = 0; i < 10; i++) {
    std::cout << a[i]*0.5<<" ";
  }

  return 0;
}
