#include <stdio.h>
#include <stdlib.h>
int main() {
	double matriz [3][4] = {0};
	int r = 0,c =0,r1 = 0,c1 = 0,i = 0;
	printf("Gauss Jordan\n");
	printf("Ingrese el valor\n");
	for(r=0;r<3;r++){
		for(c=0;c<4;c++){
			printf("[%d][%d]: ",r+1,c+1);
			scanf("%lf",&matriz[r][c]);
		}
	}
	for(r=0;r<3;r++){
		for(c=0;c<4;c++){
			printf("%8.2lf ",matriz[r][c]);
		}
		printf("\n");
	}
	for(c=0,r=0;c1<3;c1++,r1++){
		for(c=3;c>=c1;c--){
			matriz[r1][c] /= matriz[r1][c1];
		}
    for(r=r1+1;r<3;r++){
			for(c=3;c>=c1;c--){
				matriz[r][c] = -matriz[r][c1] * matriz[r1][c] + matriz[r][c];
			}
		}
	}
	for(c1--,r1--;c1>0;c1--,r1--){
		for(r=r1-1;r>=0;r--){
			for(c=3;c>=c1;c--){
				matriz[r][c] = -matriz[r][c1] * matriz[r1][c] + matriz[r][c];
				i++;
			}
		}
	}
		printf("\n");
	for(r=0;r<3;r++){
		for(c=0;c<4;c++){
			printf("%8.2lf ",matriz[r][c]);
		}
		printf("\n");
	}
	return 0;
}
