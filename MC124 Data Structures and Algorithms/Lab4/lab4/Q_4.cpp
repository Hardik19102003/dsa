#include <iostream>
#include <string.h>
using namespace std;

int random(int min,int max){
    return min+ rand()%(max-min);
}

int main()
{
    int n, i, j;
    cout<< "Enter the number of students: ";
    cin>> n;
    string city[8] = {"Surat", "Baroda", "Ramnagar", "Kutch", "Jamnagar", "Bhavnagar", "Gandhinagar", "Mumbai"};
    string stn[7] = {"Dev", "Nenci", "Sejal", "Nidhi", "Aman", "Shrey", "Nirali"};
    string a[n][n];
    for (int i = 0; i < n; i++)
    {
        a[i][0] = stn[random(0,16)];
        a[i][1]= city[random(0,16)];
        cout<<a[i][0]<<" "<<a[i][1]<<"\n";

    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i][0] > a[j][0])
            {
                string b = a[i][0];
                a[i][0] = a[j][0];
                a[j][0]= b;
                string c=a[i][1];
                a[i][1]=a[j][1];
                a[j][1]=c;
            }
        }
    }
    cout<<endl<<endl;
    for (int i = 0; i < n; i++)
    cout << a[i][0]<<" "<<a[i][1]<< endl;

    for (int i = 0; i < (n-1); i++)
    {
        for (int j = i+1; j <n; j++)
        {
            if (a[i][1]>a[j][1])
            {
                string e=a[i][1];
                a[i][1]=a[j][1];
                a[j][1]=e;
                string f=a[i][0];
                a[i][0]=a[j][0];
                a[j][0]=f;
            }

        }

    }
    cout<<endl<<endl;
    for (int i = 0; i < n; i++)
    cout << a[i][0]<<" "<<a[i][1]<< endl;
    string cn;
    cout<< "\nEnter the city name: ";
    cin >> cn;
    cout<< "\nStudents names are: ";
    for(i = 0; i < n; i++)
    {
        if(a[i][1] == cn)
        {
            cout <<  a[i][0] << ", ";
        }
    }

    return 0;
}