#include "Student.h"

Student::Student(std::string name, unsigned short heightCm, float weightKg, Subject subjects[7]) {
	strcpy(this->name, name.c_str());

	this->height = heightCm;
	this->weight = weightKg;

	this->subjects = subjects;

	this->id = 0; //PLACEHOLDER CHANGE ASAP
}

std::string Student::getName() {
	return this->name;
}

unsigned short Student::getHeight() {
	return this->height;
}

float Student::getWeight() {
	return this->height;
}

unsigned short Student::getId() {
	return this->id;
}

float Student::Average() {
	float sum = 0;

	for (unsigned short i = 0; i < 7; i++) {
		sum += this->subjects[i].GetMean();
	}

	return sum / 7;
}

unsigned short Student::DaysMissed() {
	unsigned short sum = 0;

	for (unsigned short i = 0; i < 7; i++) {
		sum += this->subjects[i].daysMissed;
	}

	return sum;
}