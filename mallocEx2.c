#include <stdio.h>
#include <malloc.h>

#define MIN 3
#define MAX 5

int main() {
	
	int i, j;
	
	int** arr;
	arr = (int**)malloc(sizeof(int*) * MIN);
	
	for(i = 0 ; i < MIN ; i++) {
		arr[i] = (int*)malloc(sizeof(int) * MAX);
	}
	
	for(i = 0 ; i < MIN ; i++) {
		for(j = 0 ; j < MAX ; j++) {
			arr[i][j] = i + j;
			printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
		}
	}
	
	free(arr);
	
	return 0;
} 
