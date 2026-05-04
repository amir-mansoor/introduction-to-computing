#include <iostream>
#include <climits>
using namespace std;


// int variables_test(int p);

int variables_test(int p) {
    int x; // Local scope variable
    x = 2147483647;
    cout << "Int: " << x << endl;

    cout << "MAX INT: " << INT_MAX << endl;
    cout << "MAX LONG: " << LONG_MAX << endl;
    // x = 2147483648;
    // cout << "Int: " << x << endl;
    long y;
    y = 2147483648;
    cout << "LONG Y: " << y << endl;

    cout << "Long upper limit: " << LONG_MAX << endl;

    // y = 9223372036854775808;
    // cout << "LONG Y: " << y << endl;

    float f;
    f = 3.40282e+38;
    cout << "float: " << f << endl;

    // f = 3.40282e+39;
    // cout << "float: " << f << endl;

    double g = 3.40282e+39;
    cout << "double: " << g << endl;

    return 0;
}

int char_test() {
    char x = 'A'; // 65 Ascii Values .. unicode
    cout << "Value of variable x: " << x << endl;
    cout << "Converted to int: " << (int) x << endl;
    cout << "Adding 1: " <<  (char) (x + 1) << endl; 
    return 0;
}

void print_alphabets() {
    for(int i = 65; i < 91; i++) {
        cout << (char) i << " ";
    }

    cout << endl;
}

int main() {
    int v; // C/C++ are statically typed languages
    v = 2;

    // variables_test(v);
    char_test();
    // print_alphabets();

    return 0;
}

