#include <iostream>
using namespace std;

void array_test() {
    int a[5]; // fixed size,contingous memory locations!
    // a[0] = 24; // 0-based index;

    cout << "Before Assignment----" << endl;
    for(int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }

    cout << endl;

    cout << "After Assignment----" << endl;
    for(int i = 0; i < 5; i++) {
        a[i] = 0;
    }
    
    for(int i = 0; i < 5; i++) {
        cout << a[i] << " "; // Notice the garbage values if make 5 a 15
    }
    cout << endl;
}

void array2d_test() {
    int a[2][3];
    cout << "Before assignment ----" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }

        cout << endl;
    }

    cout << endl;


    cout << "After assignment ----" << endl;
    int val = 1;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            a[i][j] = val;
            val += 1;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
}

void struct_test() {
    // a struct is a kind of class, a template
    struct student {
        int rollno;
        float marks;
    };

    student s1;
    s1.rollno = 1;
    s1.marks = 19.9;
    student s2;
    s2.rollno = 2;
    s2.marks = 18.3;

    cout << "Student s1 has " << s1.marks << " marks" << endl;
    cout << "Student s2 has " << s2.marks << " marks" << endl;

    student s[5];
    s[0].marks = 10.3;
    s[0].rollno = 3;

    cout << s[0].marks << endl;
}

int main() {

    // array_test();
    // array2d_test();
    struct_test();
    return 0;
}