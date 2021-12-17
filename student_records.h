#ifndef STUDENT_RECORDS_H
#define STUDENT_RECORDS_H

class student_records {

private: // private members
	std::string name;
	std::string surname;
	std::string student_number;
	std::string class_record;

	std::string filename = "database.txt";
 
public: // public members
	// constructors
	student_records(std::string name, std::string surname, std::student_number, std::class_records);

	// default constructor
	student_records()

	// add student to database
	void add_student(std::string name)

	// read database 
	void read(std::string filename);

	// save database
	void save(std::string filename);

	// display database
	void display(std::string filename);

	// students' grades
	void grade(std::string filename)

	// getters
	std::string getName() const;
		// @return string - name of student
	std::string getSurname() const;
	 	// @return string - surname of student
	std::string getStudentNumber() const;
		// @return string -student number of student
	std::string getClassRecord() const;
		// @return string -student's class record

	// setters
	void setName(std::string);
		// @param string -name of student
	void setSurname(std::string);
		// @param string -surname of student
	void setStudentNumber(std::string);
		// @param string - student number of student
	void setClassRecord(std::string);
		// @param string - class record of student



};

#endif