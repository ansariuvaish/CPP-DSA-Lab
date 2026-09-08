#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    string college;
    int math;
    int science;

public:
    void input() {
        cout << "Enter your name: ";
        getline(cin, name);

        cout << "Enter your college name: ";
        getline(cin, college);

        cout << "Enter marks in Math: ";
        cin >> math;

        cout << "Enter marks in Science: ";
        cin >> science;
    }

    int totalMarks() {
        return math + science;
    }

    void display() {
        cout << "--- Student Summary ---" << endl;
        cout << "Name: " << name << endl;
        cout << "College: " << college << endl;
        cout << "Math Marks: " << math << endl;
        cout << "Science Marks: " << science << endl;
        cout << "Total Marks = " << totalMarks() << endl;
    }
};

int main() {
    Student s;

    s.input();
    s.display();

    return 0;
}
