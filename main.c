// main.c
#include <stdio.h>

int addTwoNums(int first, int second) {
	return first + second;
}

int main() {
	int first = 8;
	int second = 9;
	printf("%d + %d = %d\n", first, second, addTwoNums(first, second));
	return 0;
}
