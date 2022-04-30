#pragma once
#ifndef Student_H
#define Student_H
#include <iostream>
#include <string>

class Student {
	int age;
	std::string name;
	std::string surname;
	std::string group;
	int marks;
public:
	Student(std::string name, std::string surname, int age, std::string group, int marks) {
		this->name = name;
		this->surname = surname;
		this->age = age;
		this->group = group;
		this->marks = marks;

	}
	int get_m();
	void set_mark(int* arr, int size);
	float sr_ar(int* arr, int size);
	Student& operator=(const Student& student1) {
		if (this == &student1) return *this;
		name = student1.name;
		surname = student1.surname;
		age =student1.age;
		group =student1.group;
		marks =student1.marks;

	}
	friend std::ostream& operator<<(std::ostream& os, const Student& student);
	friend std::istream& operator>>(std::istream& in, Student& student);
};
#endif // !Student_H
