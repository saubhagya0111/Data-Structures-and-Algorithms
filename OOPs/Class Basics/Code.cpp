#include <iostream>
#include <string>
using namespace std;
class student
{
    int rno;
    string f_name, l_name;
    int standard;
//Private data members cam be accessed using the member functions only outside the class
public:
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
int main()
{
    student s;
    //Declaration of an object of the 4t
    s.input();
    s.display();
}
