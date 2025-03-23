#include "util.h"
#define BUF 100

int main() {
	int array[BUF];
	int size;

	cout << "Input size of vector: ";
	cin >> size;

	random_init(array, size, -100, 100);
	cout << "Vector: " << convert(array, size) << endl;
	return 0;
}