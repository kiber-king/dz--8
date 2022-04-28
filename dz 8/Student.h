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
	float Get_mark();

};
#endif // !Student_H
