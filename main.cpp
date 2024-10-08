#include <stdio.h>

int Recursive(int n, int result) {
	if (n <= 0) {
		return result;
	}

	return Recursive(n - 1, result * 2 - 50);
	return 0;
}

int main() { 
	int result = 100;
	int n = 5;
	result = Recursive(n, result);
	printf("%d", result);

	return 0;
}