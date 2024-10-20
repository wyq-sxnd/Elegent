#include<stdio.h>
void functionB() {
	int a[2][3] = { {1,2},{2,3} };
	int b[3][2], i, j;
	for (i = 0; i < 2; i++) {//定义前两行
		for (j = 0; j < 3; j++) {//定义两列
			printf("%5d", a[i][j]);
			b[j][i] = a[i][j];
		}
		printf("\n");
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++)
			printf("%5d", b[i][j]);
		printf("\n");

	}
}



