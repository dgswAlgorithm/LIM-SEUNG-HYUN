#include <stdio.h>
#include <malloc.h>

#define MAX 5
int main() {
	
	int * arr;
	arr = (int*)malloc(sizeof(int) * MAX);
	
	int i;
	for(i = 0 ; i < MAX ; i++) {
		arr[i] = i * i;
		printf("arr[%d]�� %d\n", i, arr[i]);
	}
	
	free(arr);
	printf("�޸� ����");
	
	
	return 0;
}
