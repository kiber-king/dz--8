#include "Student.h"

int Student::get_m() {
	return marks;
}
float Student::Get_mark() {
	int *arr = new int[marks];
	for (int i = 0; i < marks; i++) {
		arr[i] = rand() % 4 + 2;
	}

}