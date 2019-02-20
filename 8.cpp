#include <iostream>
#include <string>
#include < math.h > 
#include <conio.h> 
#include <stdio.h>
using namespace std;

const int N1=3, N2=3;

void get_arr(int(*arr)[N2], int len){
	int i;
	for (i = 0; i < len; i++) 
		scanf_s("%d", &arr[0][i]);
}

void print_arr(int(*arr)[N2], int len){
	int i;
	for (i = 0; i < len; i++) 
		printf("%d ", arr[0][i]);
}

void printf_arr_second(int(*arr)[N2], int len1, int len2, int n){
	int i, j, c;
	for (c = i = 0; i < len1; i++)
		for (j = 0; j < len2; j++, c++){
			printf("%d ", *(*(arr + i) + j));
			if (c / n == 0)
				putchar('\n');
		}
}

void main(){
	int a[N1][N2];
	get_arr(a, N1);
	printf_s("\n");
	print_arr(a, N1);
	printf_s("\n\n\n");
	int b[3][3], i, j;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf_s("%d", &b[i][j]);
	printf_s("\n");
	printf_arr_second(b, N1, N2, 3);
}
