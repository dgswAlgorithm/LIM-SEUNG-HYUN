#include <stdio.h>
#include <windows.h>

int arr[100] = {0,};

void fn(char str[], int max) {
	
	int i; 
	
	printf("%s", str);
	for(i = 0; i < max ; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	
	int i;
	int max;
	int temp;
	
	printf("���Ͻô� ���� : ");
	scanf(" %d", &max);
	
	for(i = 0; i < max ; i++) {
		printf("%d) �����Է� : ", i + 1);
		scanf(" %d", &arr[i]);
	}
	
	fn("�� : ", max);

	for(i = 0 ; i < max ; i += 2) {
		if(arr[i] > arr[i - 1] && (i == 0 ? 0 : 1)) {
			temp = arr[i];
			arr[i] = arr[i - 1];
			arr[i - 1] = temp;
		}
		if(arr[i] > arr[i + 1] && (max - 1> i ? 1 : 0)) {
			temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}		
	}
	fn("�� : ", max);

	return 0;
}
