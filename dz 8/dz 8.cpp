#include <iostream>
#include "Student.h"
std::ostream& operator<<(std::ostream& os, const Student& student) {
	os << student.name << " " << student.surname << " " <<
		student.age <<" "<< student.group << " " << student.marks << " " << "\n";
	return os;
}
std::istream& operator>>(std::istream& in, Student& student){
	in >> student.name;
	in >> student.surname;
	in >> student.age;
	in >> student.group;
	in >> student.marks;
	return in;
}

int main()
{
	Student stud("Ivan", "Petrov", 18, "KVBO", 6);
	std::cout << stud << "\n";
	std::cin >> stud;
	std::cout << stud << "\n";
	int* arr = new int[stud.get_m()];
	stud.set_mark(arr, stud.get_m());
	std::cout << "AVG: " << stud.sr_ar(arr, stud.get_m()) << "\n";
	Student stud1("Egor", "Ivanov", 19, "KMBO", 8);
	stud = stud1;
	std::cout << stud << "\n";
	delete[] arr;

}
