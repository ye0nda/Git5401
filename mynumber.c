#include <stdio.h>

int main() {
	printf("Odd numbers 1 to 100: \n");
	for (int i = 1; i <= 100; i++) {
		if (i % 2 != 0) printf("%d\n", i);
	}
	
	printf("Even numbers 1 to 100: \n");
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0) printf("%d\n", i);
	}
	return 0;
}
