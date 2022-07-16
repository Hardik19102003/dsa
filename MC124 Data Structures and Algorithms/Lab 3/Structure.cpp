#include <iostream>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    int m1;
    int m2;
    int m3;
    int sum;
    int average;
    string grade;
};

int main()
{
    struct Student Data;

    cout << "Enter roll no : ";
    cin >> Data.rollNo;

    while (Data.rollNo != 0)
    {
        cout << "Enter name : ";
        cin >> Data.name;

        cout << "Enter m1,m2,m3 : ";
        cin >> Data.m1 >> Data.m2 >> Data.m3;

        Data.sum = Data.m1 + Data.m2 + Data.m3;
        cout << "Sum = " << Data.sum << endl;

        Data.average = (Data.m1 + Data.m2 + Data.m3) / 3;
        cout << "Average = " << Data.average << endl;

        if (Data.average < 50)
        {
            cout << "Grade = F" << endl;
        }
        else if (51 < Data.average && Data.average < 60)
        {
            cout << "Grade = C\n" << endl;
        }
        else if (61 < Data.average && Data.average < 70)
        {
            cout << "Grade = B\n" << endl;
        }
        else if (71 < Data.average && Data.average < 80)
        {
            cout << "Grade = B+\n" << endl;
        }
        else if (81 < Data.average && Data.average < 90)
        {
            cout << "Grade = A\n" << endl;
        }
        else
        {
            cout << "Grade = A+\n" << endl;
        }
        cout << "Enter roll no : ";
        cin >> Data.rollNo;
    }

    return 0;
}