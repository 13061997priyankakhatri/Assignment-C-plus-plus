#include<iostream>
using namespace std;

class Person
{
    protected:

    int age;
    string name;

    public :

    void get_person(float a,string n)
    {
        age = a;
        name = n;
    }
};

class Student
{
    protected:

    float percentage , marksOfSubjects = 450 , totalMarks = 5 ;

    public:

    void get_student(float p)
    {
        percentage = p;
    }
};

class Teacher : public Person , public Student
{
    protected:

    float salary;
     
    public :

    void get_teacher(float s)
    {
        salary = s;
        cout << endl << "Age is : " << age << endl << endl << "Name is : " << name << endl << endl << "Percentage is :" << percentage << endl << endl << "Salary of the teacher is : " << salary << endl << endl ;
    }
};

int main()
{
    Teacher t1;
    t1.get_person(26,"Priyanka");
    t1.get_student(88.90);
    t1.get_teacher(250000);

    return 0;
}