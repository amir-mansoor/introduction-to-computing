#include <iostream>
using namespace std;

void pointer_test() {
    int x = 25;
    cout << "Value of x itself is: " << x << endl;
    cout << "Value of address of x: " << &x << endl;

    int *p; // an integer pointer
    p = &x;

    cout << "Value at address pointed to by p: " << *p << endl;
    cout << "Value of p itself: " << p << endl; 

    // This -- *p -- is called pointer dereferencing
}

void pointer_test_array() {
    int nums[10];
    for(int i = 0; i < 10; i++) {
        nums[i] = i;
    }

    int *p;
    p = nums; // notice the missing &

    cout << "Value of nums: " << nums << endl;
    cout << "Value of &nums[0]: " << &nums[0] << endl;
    cout << "Value of p: " << p << endl;
    cout << "Value of *p: " << *p << endl;

    cout << "Inc p" << endl;
    p++;
    cout << "value of p: " << p << endl;
    cout << "value of *p: " << *p << endl;

    cout << "Entering loop after resetting p --- " << endl;
    p = nums;
    for(int i = 0; i < 10; i++) {
        cout << "Value of p: " << p << endl;
        cout << "Value of *p: " << *p << endl;

        cout << "Inc p " << endl;
        p++;
    }
}

void null_pointer_test() {
    int x = 25;
    int *q, *p;
    p = &x;
    q = NULL; // points to nothing
    cout << "value of p: " << p << endl;
    cout << "value of *p: " << *p << endl;

    cout << "value of q: " << q << endl;
    cout << "value of *q: " << *q << endl; // check for null before using
}

int main() {
    // pointer_test();
    // pointer_test_array();
    null_pointer_test();
    return 0;
}