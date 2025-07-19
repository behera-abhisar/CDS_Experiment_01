// Name: Abhisar Behera
// PRN: 24070123002
// Experiment 1(B)

#include <iostream>

using namespace std;

int main()
{
    int num_1, num_2, sum_out, sub_out, mul_out, div_out;

    cout << "Enter the first number: ";
    cin >> num_1;
    cout << "Enter the second number: ";
    cin >> num_2;

    sum_out = num_1 + num_2;
    sub_out = num_1 - num_2;
    mul_out = num_1 * num_2;
    div_out = num_1 / num_2;

    cout << "Sum of " << num_1 << " and " << num_2 << " is " << sum_out << endl;
    cout << "Subtraction of " << num_1 << " from " << num_2 << " is " << sub_out << endl;
    cout << "Multiplication of " << num_1 << " and " << num_2 << " is " << mul_out << endl;
    cout << "Division of " << num_1 << " and " << num_2 << " is " << div_out << endl;
    return 0;
}
