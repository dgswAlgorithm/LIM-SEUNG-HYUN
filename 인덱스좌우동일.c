#include <stdio.h>

int arr[2][100] = {0, };
int max;

int main() {
	
	int i, j;
	int n1 = 0, n2 = 0;
	
	
	printf("���� : ");
	scanf(" %d", &max);
	
	for(i = 0 ; i < max ; i++) {
		printf("���� �Է� : ");
		scanf(" %d", &arr[0][i]);
	}
	
	for(i = 0 ; i < max ; i++) {
		printf("%d ", arr[0][i]);
	}
	
	printf("\n");
	
	for(i = 0 ; i < max ; i++) {
		for(j = i ; j < max ; j++) {
			n1 += arr[0][j];
		}
		for(j = i ; 0 <= j ; j--) {
			n2 += arr[0][j];
		}
		
		if(n1 == n2) {
			arr[1][i] = 1;
		}
		n1 = 0;
		n2 = 0;
		 
	}
	
	for(i = 0 ; i < max ; i++) {
		if(arr[1][i]){
			printf("arr[%d]��(��) �¿� �ε����� ���� ���� ���� �մϴ�.\n",i , arr[1][i]);
		}
	}
	
	printf("\n");
	
	return 0;
}
