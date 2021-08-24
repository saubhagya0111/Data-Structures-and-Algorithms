
#include <iostream>
#include <string>
using namespace std;
class student
{
public:
    int rno;
    string f_name, l_name;
    int standard;
    void display();
    void input();
};
void student::display()
{
    cout << "First Name==>" << f_name << endl;
    cout << "Last Name==>" << l_name << endl;
    cout << "standard==>" << standard << endl;
    cout << "Roll Number==>" << rno << endl;
}
void student::input()
{
    cout << "Enter the roll number of the student\n";
    cin >> rno;
    cout << "Enter the first Name of the student\n";
    getline(cin, f_name);
    cout << "Enter the last Name of the student\n";
    getline(cin, l_name);
    cout << "Enter the standard of the student\n";
    cin >> standard;
}
//Single Inheritance class A-->B (single parent class gives rise to a derived class)
class marks : public student
{
    int eng, maths, sst, sci;

public:
    void input_marks();
    void display_marks();
};
void marks::input_marks()
{
    cout << "Enter the marks of english\n";
    cin >> eng;
    cout << "Enter the marks scored in Maths" << endl;
    cin >> maths;
    cout << "Enter the marks scored in SST\n";
    cin >> sst;
    cout << "Enter the marks scored in Science" << endl;
    cin >> sci;
}
void marks::display_marks()
{
    cout << "Marks scored in  english=" << eng << endl;
    cout << "MArks scored in MAths=" << maths << endl;
    cout << "Marks scored in SST=" << sst << endl;
    cout << "Marks scored in science=" << sci << endl;
}
int main()
{
    student s;
    //Declaration of an object of the 4t
    s.input();
    s.display();
    marks m;
    m.input_marks();
    m.display_marks();
}
