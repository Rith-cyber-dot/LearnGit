#include <iostream>
using namespace std;

int main()
{
    cout << "=== Mathematic forms ===" << '\n';
    cout << "[1] c2 = a2 + b2" << '\n';
    cout << "[2] a2 - b2 = (a + b)(a - b)" << '\n';
    cout << "[3] (a + b)2 = a2 + 2ab + b2" << '\n';
    cout << "Choose one: ";
    int choice;
    cin >> choice;

    int first = 0;
    int second = 0;
    int result = 0;

    switch (choice)
    {
    case 1:
        cout << "Enter first number: ";
        cin >> first;
        cout << "Enter second number: ";
        result = first * first + second * second;
        cout << "The result of c2 = a2 + b2 is " << result << '\n';
        break;
    case 2:
        cout << "Enter first number: ";
        cin >> first;
        cout << "Enter second number: ";
        cin >> second;
        result = (first + second) * (first - second);
        cout << "The result of a2 + b2 = (a + b)(a - b) is " << result << '\n';
        break;
    case 3:
        cout << "Enter first number: ";
        cin >> first;
        cout << "Enter second number: ";
        cin >> second;
        result = first * first + 2 * first * second + second * second;
        cout << "The result of (a + b)2 = a2 + 2ab + b2 is " << result << '\n';
        break;
    default:
        cout << "Please input by using your head." << '\n';
        break;
    }
    return 0;
}