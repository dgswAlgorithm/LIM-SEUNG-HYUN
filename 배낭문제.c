#include <stdio.h>
#define NUM 10

int max(int a, int b) {
	return a > b ? a : b;
}

int knapSack(int W, int wt[], int val[], int n) { \
	
	int i, w;
	int K[n + 1][W + 1];
	
	for(i = 0 ; i <= n ; i++) { // ������ �� ��
		for(w = 0 ; w <= W ; w++) { // ������ ũ�� 
			if(i == 0 || W == 0) { //���� ũ�Ⱑ 0�̶�� 
				K[i][w] = 0;
				printf("0 ���� �ý��� "); 
			} else if(wt[i - 1] <= w) { // ���� ������ ���Կ� for����  ���� ���ؼ� ���� ������ ���԰� �۴ٸ� 
				K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);
				printf("������ �� ");
			} else { // �� ��� �͵� �ƴ϶�� ������ ���� ����
				K[i][w] = K[i - 1][w];
				printf("������ ���� "); 
			}
			printf("K[%d][%d] : %d\n", i, w, K[i][w]); 
		} 
	}
	return K[n][W];
} 
	
int main() { \
	
	int val[] = {4, 5, 10, 11, 13}; //����ġ 
	int wt[] = {3, 4, 7, 8, 9}; // �� �� 
	int W = NUM; // ���湫�� 
	int n = sizeof(val) / sizeof(val[0]); // ������ ����
	 
	printf("�ִ밪�� : %d", knapSack(W, wt, val, n));
	
	
	return 0;
}
