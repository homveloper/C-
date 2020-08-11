#include <iostream>
#include <string>
using namespace std;

class Student{
protected:
    string name;
    string studentID;
    string major;
    int year;
    int currentCredit; 
public:
    Student(){

    }

    Student(string name, string studentID, string major, int year, int currentCredit){
        this->name = name;
        this->studentID = studentID;
        this->major = major;
        this->year = year;
        this->currentCredit = currentCredit;
    }

    void print(){
        cout<<"================"<<endl;
        cout<<"이름 : "<<name<<endl;
        cout<<"학번 : "<<studentID<<endl;
        cout<<"전공 : "<<major<<endl;
        cout<<"학년 : "<<year<<endl;
        cout<<"이수학점 : "<<currentCredit<<endl;
    }
};

class UnderGraduate : public Student{
    string club;

public:

    UnderGraduate(){

    }

    UnderGraduate(Student student, string club) : Student(student){
        this-> club = club;
    }

    void print(){
        Student::print();
        cout<<"동아리 : "<<club<<endl;
        cout<<"================"<<endl;
    }
};

enum Assistant {teachingAssistant, researchAssistant};

class Graduate : public Student{
    Assistant assistant;
    double scholarshipRate;

public:

    Graduate(){

    }

    Graduate(Student student, Assistant assistant, double schoarshipRate): Student(student){
        this->assistant = assistant;
        this->scholarshipRate = schoarshipRate;
    }

    void print(){
        Student::print();
        
        string type;
        switch (assistant)
        {
        case teachingAssistant:
            type = "교육";
            break;
        case researchAssistant:
            type="연구";
            break;
        default:
            type="-";
            break;
        }

        cout<<"조교 : "<<type<<endl;
        cout<<"장학 비율 : "<<scholarshipRate<<endl;
        cout<<"================"<<endl;
    }
};

void main(){
    Student student("바둑이","20050020","컴퓨터소프트웨어전공",4,132);
    UnderGraduate underGraduate(Student("철수","20191023","기계설계전공",2,41),"해동검도");
    Graduate graduate(Student("영희","20180133","정보통신전공",2,68),Assistant::researchAssistant,0.6);

    student.print();
    underGraduate.print();
    graduate.print();

}