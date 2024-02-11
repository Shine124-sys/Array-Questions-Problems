#include <bits/stdc++.h>
using namespace std;
class Calculator
{
public:
    Calculator(int num1, int num2);
    int add();
    int subtract();

private:
    int num1;
    int num2;
};
Calculator::Calculator(int num1, int
                                     num2)
{
    this->num1 = num1;
    this->num2 = num2;
}
int add_numbers(int a, int b)
{
    return a + b;
}
int subtract_numbers(int a, int b)
{
    return a - b;
}
int Calculator::add()
{
    return add_numbers(num1, num2);
}
int Calculator::subtract()
{
    return subtract_numbers(num1,
                            num2);
}
int main()
{
    int num1 = 10;
    int num2 = 5;
    Calculator calculator(num1, num2);
    std::cout << "Addition: " << calculator.add() << std::endl;
    std::cout << "Subtraction: " << calculator.subtract() << std::endl;
    return 0;
}