#include <iostream>
using namespace std;

typedef struct
{
    float real;
    float imaginary;
} complex;

int main()
{
    complex num1, num2, sum;

    cout << "Enter real and imaginary part of 1st complex number :\n";
    cin >> num1.real >> num1.imaginary;

    cout << "Enter real and imaginary part of 2nd complex number:\n";
    cin >> num2.real >> num2.imaginary;

    sum.real = num1.real + num2.real;
    sum.imaginary = num1.imaginary + num2.imaginary;

    cout<<"SUM = "<<sum.real <<" + i"<< sum.imaginary<<endl;

    sum.real = num1.real - num2.real;
    sum.imaginary = num1.imaginary - num2.imaginary;
    
    cout<<"Subtraction = "<<sum.real <<" + i"<< sum.imaginary;

    return 0;
}