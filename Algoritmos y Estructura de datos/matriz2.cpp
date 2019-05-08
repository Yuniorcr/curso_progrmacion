# include <stdio.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int fila=3,columna=3;
  int a[fila][columna]={{7,2,3},{4,5,6},{7,8,6}};
  int b[fila][columna]={{1,6,3},{4,5,6},{7,5,3}};
  int c[fila][columna];
  for (size_t i = 0; i < fila; i++) {
    for (size_t j = 0; j < columna; j++) {
      int aux=0;
      for (size_t k = 0; k < columna; k++) {
        aux=aux+a[i][k]*b[k][j];
      }
      c[i][j]=aux;
    }
  }
  for (size_t i = 0; i < fila; i++) {
    for (size_t j = 0; j < columna; j++) {
      std::cout << c[i][j]<<" ";
    }
    std::cout <<"\n";
  }
/*{
int i,j,k,l,m,n ;
float a[100][100];
float det;
printf("orden de matriz :");
scanf("%d",&n);
printf("\n");
m=n-1;
printf("Introducir los elementos:\n");
for(i=1;i<=n;i++){
  for(j=1;j<=n;j++){
printf("A(%d,%d) =",i,j);
scanf("%f",&a[i][j]);
}
}
det=a[1][1];
for(k=1;k<=m;k++){
  l=k+1;
for(i=l;i<=n;i++){
  for(j=l;j<=n;j++)
a[i][j] = ( a[k][k]*a[i][j]-a[k][j]*a[i][k] )/a[k][k];
}
det=det*a[k+1][k+1];
}
printf("determinante = %f", det);
}*/
