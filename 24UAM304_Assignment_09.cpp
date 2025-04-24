#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T>
class Calculator {
private:
    T num1, num2;
public:
    Calculator(T n1, T n2) : num1(n1), num2(n2) {}

    T add() {
        return num1 + num2;
    }

    T subtract() {
        return num1 - num2;
    }

    T multiply() {
        return num1 * num2;
    }

    T divide() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Error: Division by zero" << endl;
            return 0;
        }
    }
};

int main() 
{
    int a = 5, b = 10;
    cout << "Max of " << a << " and " << b << " is: " << findMax(a, b) << endl;

    Calculator<int> intCalc(a, b);
    cout << "Integer Operations: " << endl;
    cout << a << " + " << b << " = " << intCalc.add() << endl;
    cout << a << " - " << b << " = " << intCalc.subtract() << endl;
    cout << a << " * " << b << " = " << intCalc.multiply() << endl;
    cout << a << " / " << b << " = " << intCalc.divide() << endl;

    float f1 = 3.5, f2 = 2.0;
    cout << "\nMax of " << f1 << " and " << f2 << " is: " << findMax(f1, f2) << endl;

    Calculator<float> floatCalc(f1, f2);
    cout << "Float Operations: " << endl;
    cout << f1 << " + " << f2 << " = " << floatCalc.add() << endl;
    cout << f1 << " - " << f2 << " = " << floatCalc.subtract() << endl;
    cout << f1 << " * " << f2 << " = " << floatCalc.multiply() << endl;
    cout << f1 << " / " << f2 << " = " << floatCalc.divide() << endl;

    double d1 = 7.8, d2 = 3.4;
    cout << "\nMax of " << d1 << " and " << d2 << " is: " << findMax(d1, d2) << endl;

    Calculator<double> doubleCalc(d1, d2);
    cout << "Double Operations: " << endl;
    cout << d1 << " + " << d2 << " = " << doubleCalc.add() << endl;
    cout << d1 << " - " << d2 << " = " << doubleCalc.subtract() << endl;
    cout << d1 << " * " << d2 << " = " << doubleCalc.multiply() << endl;
    cout << d1 << " / " << d2 << " = " << doubleCalc.divide() << endl;

    return 0;
}

