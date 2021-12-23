#include "student_record.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <sstream>

std::vector<Student> studentRecordVec;

// constructor
Student::Student(std::string studentname, std::string studentSurname, std::string studentNumber, std::string studentClassRecord) {
	name = studentName;
	surname = studentSurname;
	studentNumber = studentNumber;
	classRecord = studentClassRecord;
}

Student::Student() {} // empty constructor

//getters
std::string Student::getName() const {
	return name;
}

std::string Student::getSurname() const {
	return surname;
}

std::string Student::getStudentNumber() const {
	return studentNumber;
}

std::string Student::getClassRecord() const {
	return classRecord;
}

//setters
void Student::setName(std::string studentName) {
	studentName = name;
}

void Student::setSurname(std::string studentSurname) {
	studentSurname = surname;
}

void Student::setStudentNumber(std::string studentNumber) {
	studentNumber = studentNumber;
}

void Student::setClassRecord(std::string studentClassRecord) {
	studentClassRecord = classRecord; 
}

void Student::add_student(std::string name, std::string surname, std::string studentNumber, std::string classRecord) {

	Student newStudent(name, surname, studentNumber, classRecord);
	studentRecordVec.push_back(newStudent)

}

void Student::read(std::string filename) {
	std::ifstream file;
	file.open(filename)

	std::string line;
	while(std::getline(file, line)) {
		std::istringstream iss(line);
		if(!(iss >> name >> surname >> studentNumber >> classRecord)) {
			break;
		}
		else
			std::cout << line << std::endl;
	}
}

void Student::save(std::string filename) {
	std::ofstream file;
	file.open(filename, std::ios_base::app);
	if(file.is_open()) {
		for(int i = 0; i < studentRecordVec.size(); i++) {
			file << studentRecordVec[i].getName() << ' ' << studentRecordVec[i].getSurname() << ' ' << studentRecordVec[i].getStudentNumber() << ' ' << studentRecordVec[i].getClassRecord() << ' '  << std::endl;
		}

		file.close();
	}

}

void Studnet::display(std::string filename) {
	std::string studentNo;
	int offset;
	std::string line;

	std::ifstream file;

	file.open(filename);

	std::cout << "Enter the student's student number: " << std::endl;
	std::cin >> studentNo;

	if(file.is_open()) {
		while(!file.eof()) {
			getline(file, line);
			if((offset = line.find(studentNo, 0)) != std::string::npos) {
				std::cout << line << std::endl;
			}
		}
	}
	file.close()

}

void Student::grade(std::string filename) {

	double mark1 = 0.0;
	double mark2 = 0.0;
	double mark3 = 0.0;

	std::vector<std::string> grade;
	std::string studentNo;
	int offset;
	std::string line;
	std::string word = "";

	std::ifstream file;

	file.open(filename);

	std::cout << "Enter the student's student nubmer: " << std::endl;
	std::cin >> studentNo;

	if(file.is_open()) {
		while(!file.eof()) {
			getline(file, line);
			if((offset = line.find(studentNo, 0)) != std::string::npos) {
				for(int i - 0; i < line.size(); i++) {
					if(line[i] == ' ') {
						grade.push_back(word);
						word = "";
					}
					else {
						word = word + line[i];
					}
				}
			}
		}
	}

	if(!grade.empty()) {
		mark1 = std::stoi(grade.back());
		grade.pop_back();
		mark2 = std::stoi(grade.back());
		grade.pop_back();
		mark3 = std::stoi(grade.back());
		grade.pop_back();
		std::cout << "Average classrecord of student: " << (mark1 + mark2 + mark3) / 3.0 << std::endl << std::endl;
	}

	else 
		std::cout << "Student not found" << std::endl << std::endl;

}
file.close();


