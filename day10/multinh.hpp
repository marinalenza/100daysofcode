//header file for main.cpp
#include<iostream>
#include<string>
using namespace std;

class Staff
{
    private:
        string title;
    public:
        Staff();
        void setTitle(string input);
        string getTitle();
};

Staff::Staff()
{
    title = "NA";
}

void Staff::setTitle(string input)
{
    title = input;
}

string Staff::getTitle()
{
    return title;
}

class GradStudent
{
    private: 
        int studentId;
    public:
        GradStudent();
        void setId(int input);
        int getId();
    
};

GradStudent::GradStudent()
{
    studentId = 000000;
}

void GradStudent::setId(int input)
{
    studentId = input;
}

int GradStudent::getId()
{
    return studentId;
}

class TA: public Staff, public GradStudent
{
    private:
        string supervisor;
    public:
        TA();
        void setSupervisor(string input);
        string getSupervisor();
};

TA::TA()
{
    supervisor = "NA";
}

void TA::setSupervisor(string input)
{
    supervisor = input;
}

string TA::getSupervisor()
{
    return supervisor;
}
