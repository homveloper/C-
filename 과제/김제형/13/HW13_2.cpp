#include <iostream>
#include <ctime>
using namespace std;

class Student
{
protected:
    string name;
    string idnumber;
    string department;
    int grade;
    int credit;

public:
    Student(string n, string id, string d, int g, int c) : name(n), idnumber(id), department(d), grade(g), credit(c) {}
    void setName(string a) { name = a; }
    string getName() const { return name; }
    void setID(string a) { idnumber = a; }
    string getID() const { return idnumber; }
    void setDep(string a) { department = a; }
    string getDep() const { return department; }
    void setGrade(int a) { grade = a; }
    int getGrade() const { return grade; }
    void setCredit(int a) { credit = a; }
    int getCredit() const { return credit; }

    void print()
    {
        cout << "name : " << name << endl;
        cout << "idnumber : " << idnumber << endl;
        cout << "department : " << department << endl;
        cout << "grade : " << grade << endl;
        cout << "credit : " << credit << endl;
    }
};

class UnderGraduate : public Student
{
private:
    string clubname;

public:
    UnderGraduate(string n, string id, string d, int g, int c, string cl) : Student(n, id, d, g, c), clubname(cl) {}
    void setClubname(string a) { clubname = a; }
    string getClubname() const { return clubname; }
    void print()
    {
        cout << "name : " << name << endl;
        cout << "idnumber : " << idnumber << endl;
        cout << "department : " << department << endl;
        cout << "grade : " << grade << endl;
        cout << "credit : " << credit << endl;
        cout << "clubname : " << clubname << endl;
    }
};

class Graduate : public Student
{
private:
    bool assistant;
    int scholarshipratio;

public:
    Graduate(string n, string id, string d, int g, int c, bool a, double s) : Student(n, id, d, g, c), assistant(a), scholarshipratio(s) {}
    void setAssistant(bool a) { assistant = a; }
    double getAssistant() const { return assistant; }
    void setRatio(double a) { scholarshipratio = a; }
    double getRatio() const { return scholarshipratio; }
    void print()
    {
        cout << "name : " << name << endl;
        cout << "idnumber : " << idnumber << endl;
        cout << "department : " << department << endl;
        cout << "grade : " << grade << endl;
        cout << "credit : " << credit << endl;
        cout << "assistant : " << wassistant(assistant) << endl;
        cout << "scholarship : " << scholarshipratio << endl;
    }
    string wassistant(bool a)
    {
        return a == 1 ? "study assistant" : "research assistant";
    }
    double ratio(){
        return rand()/(double)RAND_MAX * 1;
    } 
};

void main()
{
    srand(time(NULL));
    // double ratio = rand() / (double)RAND_MAX * 1;
    // cout << ratio;
    Graduate a("이름", "아이디", "학과", 4, 15, 0, 0.05);
    a.print();
}