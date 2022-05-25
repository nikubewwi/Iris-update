#include <iostream>
using namespace std;

char checker(int num1, int num2) {

    char a = 'A', b = 'B', c = 'C';

    if (num1>num2) {
        return a;
    } else if (num1 < num2) {
        return b;
    } else if (num1 == num2) {
            return c;
    }
    
}

int main() {

    int x, y;

    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;

    char alpha; 

    alpha = checker(x,y);

    cout << alpha;

    return 0;

}