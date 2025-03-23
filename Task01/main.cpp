#include "util.h"
#include "logic.h"
#define BUF 100

int main() {
	int array[BUF];
	int size;

	cout << "Input size of vector: ";
	cin >> size;

	/*random_init(array, size, -100, 100);*/
	cout << "Input vector element: " << endl;
	user_init(array, size);
	cout << "Vector: " << convert(array, size) << endl;

	int result = calc_product_between_extreme_elements(array, size);
	cout << "Product of elements between extreame elements " << result;
	return 0;
}