#include <stdio.h>

int main() {
	char str[] = "Hi";
	char* pstr = str;
	
	while(*pstr) {
		putchar(*pstr++);
	}
	
	printf("\n");
	
	while(*pstr != 'H') {
		putchar(*--pstr);
	}
	return 0;
}
