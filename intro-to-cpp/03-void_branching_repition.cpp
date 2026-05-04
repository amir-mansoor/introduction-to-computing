#include <iostream>
using namespace std;

int out(int x) {
    cout << "-> Called with value x: " << x << endl;
    return x;
}

void if_test() {
    int x = 29;
    if(x < 25) {
        cout << "x is less than 25" << endl;
    } else {
        cout << "x is not less than 25 " << endl;
    }

    // Booleans
    // int v = 0; // false
    int v = -1; // all of other integers are true
    if(v) {
        cout << "v is true" << endl;
    } else {
        cout << "v is false" << endl;
    }

    // Boolean operators
    cout << "checking and: " << (true && true) << endl; // python and
    cout << "checking or: " << (true || false) << endl; // python or
    cout << "checking not: " << (!true) << endl; // python not

    // short circuiting
    cout << "Checking short circuiting..." << endl;
    // int final_val = out(1) && out(1);
    // int final_val = out(1) && out(0);
    // int final_val = out(0) || out(1);
    int final_val = out(1) || out(1);
    cout << "Final Value: " << final_val << endl;
    

    // Ternary operator
    int t = (3 > 2) ? 7 : 3;
    cout << "t = " << t << endl;
}

void while_test(){
    int i = 0;
    while(i < 5) {
        cout << i << endl;
        i += 1;
    }
}

void for_test() {
    for(int i = 0; i < 5; i++) {
        cout << i << endl;
    }
}

int main() {

    // if_test();
    // while_test();
    for_test();
    return 0;
}