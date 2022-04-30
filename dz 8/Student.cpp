#include "Student.h"

int Student::get_m() {
	return marks;
}
void Student::set_mark(int *arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 4 + 2;
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}

float Student::sr_ar(int* arr, int size) {
	float s = 0;
	for (int i = 0; i < size; i++) {
		s += arr[i];
	}
	return s / get_m();
}

