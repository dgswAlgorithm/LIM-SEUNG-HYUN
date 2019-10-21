#include <stdio.h>
#define NUM 10

int max(int a, int b) {
	return a > b ? a : b;
}

int knapSack(int W, int wt[], int val[], int n) { \
	
	int i, w;
	int K[n + 1][W + 1];
	
	for(i = 0 ; i <= n ; i++) { // 보석의 갯 수
		for(w = 0 ; w <= W ; w++) { // 가방의 크기 
			if(i == 0 || W == 0) { //가방 크기가 0이라면 
				K[i][w] = 0;
				printf("0 감지 시스템 "); 
			} else if(wt[i - 1] <= w) { // 이전 물건의 무게와 for문의  무게 비교해서 이전 물건의 무게가 작다면 
				K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);
				printf("저울질 중 ");
			} else { // 그 어떠한 것도 아니라면 이전의 값을 적용
				K[i][w] = K[i - 1][w];
				printf("이전값 대입 "); 
			}
			printf("K[%d][%d] : %d\n", i, w, K[i][w]); 
		} 
	}
	return K[n][W];
} 
	
int main() { \
	
	int val[] = {4, 5, 10, 11, 13}; //값어치 
	int wt[] = {3, 4, 7, 8, 9}; // 무 게 
	int W = NUM; // 가방무개 
	int n = sizeof(val) / sizeof(val[0]); // ㅂ석의 갯수
	 
	printf("최대값은 : %d", knapSack(W, wt, val, n));
	
	
	return 0;
}
