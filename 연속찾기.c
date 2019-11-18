#include <stdio.h>

int arr[10] = {1,0,0,1,0,1,1,0,0,1};


int start() {
	
	int i;
	int count = 0;
	int max = 0; 
	
	for(i = 0 ; i < 10 ; i++) {
		
		if(arr[i]) {
			++count;
			if(max < count) {
				max = count;	
			}
		} else {
			count = 0;
		}
	}
	return max;
}

int sort() {
	
	int i;
	
	int max;
	int temp; 
	int num;
	
	for(i = 0 ; i < 10 ; i++) {
		
		if(arr[i]) {
			continue;
		} else if(arr[i] != 0) {
			printf("예상치 못한 수\n");
			break;
		}
		
		arr[i] = 1;
		temp = start();
		
		if(max < temp) {
			max = temp;
			num = i;
		}
		arr[i] = 0;
	}
	
	return num;
}

int main() {
	
	int n = sort();
	
	printf("%d번째에 1넣으면 가장 큼", n + 1);
	
	return 0;
}
