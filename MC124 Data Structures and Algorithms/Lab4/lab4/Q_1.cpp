#include<iostream>
using namespace std;

void leftRotatebyOne(int A[], int N);
 
void leftRotate(int A[], int M, int N)
{
    int i;
    for (i = 0; i < M-1; i++)
        leftRotatebyOne(A, N);
}
 
void leftRotatebyOne(int A[], int N)
{
    int temp = A[0], i;
    for (i = 0; i < N-1 ; i++)
        A[i] = A[i + 1];
        A[N-1]= temp;
}
 
void printArray(int A[], int N)
{
    int i;
    for (i = 0; i < N; i++)
        cout<<A[i]<<" ";
}
 
int main()
{
    int A[100],N,M;
    cout<<"\nEnter the number of elements of the array : "<<endl;
    cin>>N;

    cout<<"\nEnter the elements of array : "<<endl;
    for(int i=0 ; i<N; i++)
    {
        cin>>A[i];
    }

    cout<<"\nEnter the number of times to be rotated  : "<<endl;
    cin>>M;

    leftRotate(A, M, N);
    cout<<"\nThe roatated array is : "<<endl;
    printArray(A, N);
    return 0;
}
