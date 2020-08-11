#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
	string Name;
	string Major;
	string Student_Num;
	int Grade;
	int Finished_Credit;

public:
	Student(){
		
	}

	Student(string name, string major, string SN, int grade, int FC) {
		this->Name = name;
		this->Major = major;
		this->Student_Num = SN;
		this->Grade = grade;
		this->Finished_Credit = FC;
	}
	string getName() {
		return Name;
	}
	string getMajor() {
		return Major;
	}
	string getSN() {
		return Student_Num;
	}
	int getGrade(){
		return Grade;
	}
	int getFC() {
		return Finished_Credit;
	}

};

class Undergraduate_Student : public Student {
	string Club;

public:
	Undergraduate_Student(string name, string major, string SN, int grade, int FC, string club) : Student(name, major, SN, grade, FC) {
		this->Club = club;
	}
};

class Graduate_Student : public Student {
	string Scholarship_ratio;
	string Assistant;

public:
	Graduate_Student(){

	}

	Graduate_Student(string name, string major, string SN, int grade, int FC, string SR, string Ass) : Student(name, major, SN, grade, FC) {
		this->Scholarship_ratio = SR;
		this->Assistant = Ass;
	}
};

class Assistant : public Graduate_Student {
	string Teaching_Assistant;
	string Research_Assistant;
public:
	Assistant(){
	}

	Assistant(string TA, string RA){
		this->Teaching_Assistant = TA;
		this->Research_Assistant = RA;
	}
};

class Scholarship_ratio : public Graduate_Student {
};
