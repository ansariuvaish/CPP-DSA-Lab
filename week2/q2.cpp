#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    string regNo;
};

class Student : public Person {
private:
    string branch;
    int semester;

public:
    void enterInfo() {
        getline(cin, name);
        getline(cin, regNo);
        getline(cin, branch);
        cin >> semester;
    }

    void displayInfo() {
        cout << "Student Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Registration Number: " << regNo << endl;
        cout << "Branch: " << branch << endl;
        cout << "Semester: " << semester << endl;
    }
};

int main() {
    Student s;
    s.enterInfo();
    s.displayInfo();

    return 0;
}
