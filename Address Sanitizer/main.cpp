#include <iostream>

void buffer_overflow() {
	int* ch = new int[100];

	ch[100] = 1;
}

void use_after_free() {
	int* ch = new int[100];
	delete[] ch;

	delete[] ch;
}

void uninitialize() {
	int* ch = nullptr;

	*ch = 1;
}

int main() {

	uninitialize();

	return 0;
}