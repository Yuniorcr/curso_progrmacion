#include <iostream>

struct fecha {
  int day,month,year;
};
//funcion principal
int main(int argc, char const *argv[]) {
  int const cantidad=2;
  fecha fechas[cantidad];
  std::cout << "ingrese fecha actual" << '\n';
  for (size_t i = 0; i < cantidad; i++) {
    std::cout << "day: " ;std::cin >> fechas[i].day;
    std::cout << "month: ";std::cin >> fechas[i].month;
    std::cout << "year: " ;std::cin >> fechas[i].year;
  }
  //mostrar los datos
  for (size_t i = 0; i < 1; i++) {
    if (fechas[i].day==fechas[i+1].day&&fechas[i].month==fechas[i+1].month&&fechas[i].year==fechas[i+1].year) {
        std::cout << "felicitaciones" << '\n';
    }else{
      std::cout << "no es tu cumpleanios" << '\n';
    }
  }
  return 0;
}
