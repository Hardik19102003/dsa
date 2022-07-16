#include <time.h>
#include<iostream>
using namespace std;
void random(int array[47][6],int m,int n,int max);

int main()
{
    int i,j;
    float sum = 0,total = 0;
    srand( time(NULL) );
    int test[47][6];
    float arr[47];
    random(test,47,6,100);

    cout<<"Number wise Marks of all students in each subjects:\n";
    for(i = 0; i < 47; i++)
    {
        for(j = 0; j < 6; j++)
        {
            cout<<test[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(j = 0;j < 6; j++)
    {
        for(i = 0;i < 47; i++)
        {
            sum = sum + test[i][j];
        }
        float ave = (sum / 47);
        cout<<"\nAverage marks of subject = "<<j + 1,ave;
        sum = 0;
    }
    sum = 0;
    for(i = 0; i < 47; i++)
    {
        for(j = 0; j < 6; j++)
        {
            sum = sum + test[i][j];
        }
        float per = (sum / 6);
        arr[i] = per;
        total = total + per;
        cout<<"\nPercentage of Student = "<<i + 1,per;
        sum = 0;
    }

     for (int i = 0; i < 47; i++) {
        for (int j = i+1; j < 47; j++) {
           if(arr[i] > arr[j]) {
               int t = arr[i];
               arr[i] = arr[j];
               arr[j] = t;
           }
        }
    }

    float mean = total / 47;
    float median = arr[24];//24 = [(1 + 47) / 2]

    int count = 0,num = 0,n = 0;
    for(i = 0; i < 47 ; i++)
    {
        for(j = 0 ; j < 6 ; j++)
        {
            if(test[i][j] < 34)
            {
                count++;
            }
        }
        if(count == 6)
        {
            num++;
        }
        if(count >= 2)
        {
            n++;
        }
        count = 0;
    }
    cout<<"\n\nNumber of students who have failed in each subject = "<<num;
    cout<<"\n\nNumber of students who have failed in more than 2 subject = "<<n;
    cout<<"\n\nMean of the class performance : "<<mean;
    cout<<"\n\nMedian of the class performance : "<<median;

    return 0;
}
void random(int array[47][6],int m,int n,int max)
{
    int i,j;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            array[i][j] = (rand() % max);
        }
    }
}