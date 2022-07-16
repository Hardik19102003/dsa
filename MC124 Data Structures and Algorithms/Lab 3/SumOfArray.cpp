#include <iostream>
using namespace std;

int main()
{
    int array[] = {1,2,3,4};
    int *ptr;
    ptr = array;
    int sum = 0;
    int size = sizeof(array)/sizeof(array[0]);
    for (int i = 0; i < size; i++)
    {
        sum += *ptr;
        ptr++;
    }

    cout<<"Sum of an array = " <<sum;
    
    return 0;
}