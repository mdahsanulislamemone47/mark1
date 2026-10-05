#include <iostream>
using namespace std;
int main() {
    double a, b; char op;
    cout << "Enter: num op num (e.g. 5 + 3): ";
    cin >> a >> op >> b;
    switch (op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/': b != 0 ? cout << a / b : cout << "Cannot divide by 0"; break;
        default: cout << "Invalid operator";
    }
    cout << endl;
}
