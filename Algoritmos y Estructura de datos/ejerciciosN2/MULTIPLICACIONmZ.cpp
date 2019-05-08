#include <iostream>
#include <string.h>
int main(int argc, char const *argv[]) {
  int n;
  std::cin >> n;
  int x[100][100],a[100][100];

  for (size_t f = 0; f <n; f++) {
    for (size_t c = 0; c <n; c++) {
      if (f == c){
        x[f][c]==1;
      }else{
        x[f][c]==0;
      }
      std::cout <<x[c][f] <<" ";
    }
    std::cout << "\n";
  }

  return 0;
}
a
