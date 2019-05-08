#include <iostream>
int main(int argc, char const *argv[]) {
  int a[5]={1,2,3,4,5};
  int *p=&a[0];
  int contador;
  for (size_t i = 0; i < 5; i++) {
    contador=*(p+i);
    std::cout << contador<<" ";
  }
  return 0;
}
