#include <stdio.h>
#include <malloc.h>

#define MAX 5
int main() {
	
	int * arr;
	arr = (int*)malloc(sizeof(int) * MAX);
	
	int i;
	for(i = 0 ; i < MAX ; i++) {
		arr[i] = i * i;
		printf("arr[%d]는 %d\n", i, arr[i]);
	}
	
	free(arr);
	printf("메모리 해제");
	
	
	return 0;
}
