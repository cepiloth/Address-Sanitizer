#include <iostream>

int main() {

	int* array = new int[100];
	array[100] = 1;
	// buffer overflow
	return 0;
}