#include <iostream>
using namespace std;

void swap(int* a,int* b);

int main()
{
    int num1,num2;
    cout<<"Enter two Numbers : ";
    cin>>num1>>num2;
    cout<<"Before swaping values are num1="<<num1<<" and num2="<<num2<<endl;
    swap(&num1,&num2);
    cout<<"After swaping values are num1="<<num1<<" and num2="<<num2;
    return 0;
}

void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}