#include <iostream>
int main(int argc, char const *argv[]) {
  int a[3][3]={{5,6,13},{14,2,4},{21,7,6}};
  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 3; j++) {
      std::cout << a[i][j] <<"\t";
    }
    std::cout << "\n";
  }
  std::cout << "\nmatriz multiplicada\n" << '\n';
  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 3; j++) {
          std::cout << a[i][j]*2<<"\t";
    }
    std::cout <<"\n";
  }
  return 0;
}
