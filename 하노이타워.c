#include <stdio.h>

int count = 0;

void hanoi_tower(int n, char from, char tmp, char to) {
	if(n == 1) {
		printf("%2d. ", ++count);
		printf("원판 1을(를) %c에서 %c(으)로 옮긴다.\n", from, to);
	} else {
		hanoi_tower(n - 1, from, to, tmp);
		printf("%2d. ", ++count);
		printf("원판 %d을(를) %c에서 %c(으)로 옮긴다.\n", n, from, to);
		hanoi_tower(n - 1, tmp, from, to);
	}
}

int main() {	
	hanoi_tower(1000, 'A', 'B', 'C');
	return 0;
}
