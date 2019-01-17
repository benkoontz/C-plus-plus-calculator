#include <iostream>
using namespace std;


int add(int a, int b)  {
    return a + b;
}

int subtract(int a, int b)  {
    return a - b;
}

int multiply(int a, int b)  {
    return a * b;
}

int divide(int a, int b)  {
    return a / b;
}

int main() {

    cout << "Hello, this is a calculator program that can add, subtract, multiply, or divide two numbers.\n First, enter two numbers. Then select an option to add, subtract, multply, or divide" << endl;
    int x,y;
    cout << "enter first number" << endl;
    cin >> x;
    cout << "enter second number" << endl;
    cin >> y;

    cout << "to add two numbers type 1\n";
    cout << "to subttact two numbers type 2\n";
    cout << "to multiple two numbers type 3\n";
    cout << "to divide two numbers type 4\n";

    int option1 = 1;
    int option2 = 2;
    int option3 = 3;
    int option4 = 4;
    int option;

    cin >> option;
    int result;

    if (option == option1) {
        result = add(x,y);

        cout << "the result is " << result;
    }

       if (option == option2) {
        result = subtract(x,y);

        cout << "the result is " << result;
    }

       if (option == option3) {
        result = multiply(x,y);

        cout << "the result is " << result;
    }

       if (option == option4) {
        result = divide(x,y);

        cout << "the result is " << result;
    }




}
