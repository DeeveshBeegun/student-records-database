#include <iostream>
#include "Student.h"
#include <vector>
#include "driver.h"
#include <ostream>

int main(void) {
	using namespace std;
	bool loop = true;

	string name;
	string surname;
	string studentNumber;
	string classRecord;

	Student studentRecord;

	system("clear");

	do {

		cout << "0: Add student" << endl;
		cout << "1: Read database" << endl;
		cout << "2: Save database" << endl;
		cout << "3: Display given student data" << endl;
		cout << "4: Grade student" << endl;
		cout << "q: Quit" << endl;

		cout << "Enter a number (or q to quit) and press return..." << endl;
		char selection = 'a';
		cin >> selection;

		// add new student record
		if(selection == '0') {
			system("clear");

			cout << "function AddDatabase() called" << endl; << endl;

			cout << "Enter the student's name: " << endl;
			cin.ignore();
			getline(cin, name);

			cout << "Enter the student's surname: " << endl;
			getline(cin, surname);

			cout << "Enter the student's student Number: " << endl;
			cin >> studentNumber;

			cout << "Enter the student's class record: " << endl; 
			cin.ignore();
			getline(cin, classRecord);

			studentRecord.add_student(name, surname, studentNumber, classRecord);

			cout << endl;


		}

		else if (selection == '1') {
			system("clear");
			cout << "function ReadDatabase() called" << endl << endl;

			studentRecord.read("database.txt")

			cout << endl;
		}

		//write to database
		else if (selection == '2') {
			system("clear")

			cout << "function SaveDatabase() called" << endl << endl;
			
			cout << "Info saved to database.txt" << endl;
			
			studentRecord.save("database.txt");
			
			cout << endl;
		}

		else if (selection == '3') {
			system("clear");

			cout << "function DisplayDatabase() called" << endl << endl;

			studentRecord.display("database.txt")

			cout << endl;
		}

		else if (selection == '4') {
			system("clear");

			cout << "function GradeDatabase() called" << endl << endl;

			studentRecord.grade("database.txt")
		}
		else if (selection == 'q') {
			loop = false;

			system("clear");
		}
		else {
			system("clear");
			cout << "Invalid function called" << endl;
		}
	} while(loop);
}