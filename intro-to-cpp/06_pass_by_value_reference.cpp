#include <iostream>
using namespace std;

void second_function(int &v) {
    v = v + 10;
    cout << " - Address of v = " << &v << endl;
    cout << " - first fuunction change v to " << v << endl; 
}

void first_function(int v) {
    v = v + 10;
    cout << " - Address of v = " << &v << endl;
    cout << " - first fuunction change v to " << v << endl; 
}

void runner(){
    int x = 0;
    cout << "Address of x:   " << &x << endl;

    cout << endl;

    cout << "Step 1: x = " << x << endl;
    first_function(x);
    cout << "Step 2: x = " << x << endl;

    second_function(x);
    cout << "Step 3: x = " << x << endl;
}

void test_array(int b[], int size) {
    cout << "Inner function..." << endl;
    cout << "Address of b: " << b << endl;

    for(int i = 0; i < size; i++) {
        cout << b[i] << " ";
    }

    cout << endl;

    b[0] = 24;
}

void array_as_args() {
    int a[] = {0,1,2,3,4,};
    test_array(a,5);
    cout << "Address of a: " << a << endl;

    cout << "Outer function..." << endl;
    for(int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }

    cout << endl;
}

struct student {
    int rollno;
    float marks;
};

void struct_array_test() {
    student s1;
    s1.rollno = 24;
    s1.marks = 24.5;

    cout << "s1.marks:   " << s1.marks << endl;

    student *sPtr;
    sPtr = &s1;

    cout << "(*sPtr).marks = " << (*sPtr).marks << endl;

    // shorthand
    cout << "sptr->marks = " << sPtr->marks << endl; // don't need the *here
}

int main() {
    // runner();
    // array_as_args();
    struct_array_test();
    return 0;
}