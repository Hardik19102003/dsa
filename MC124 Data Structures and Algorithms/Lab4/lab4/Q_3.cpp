#include<iostream>
#include<climits>
using namespace std;

int random(int min,int max){
    return min+ rand()%(max-min);
}

int maxSubArraySum(int a[], int size)
{
	int mfar = INT_MIN, mend = 0, start = 0, end = 0, s = 0;

	for (int i=0; i< size; i++ )
	{
		mend += a[i];

		if (mfar < mend)
		{
			mfar = mend;
			start = s;
			end = i;
		}

		if (mend < 0)
		{
			mend = 0;
			s = i + 1;
		}
	}
	cout << "\n\nMaximum subsequent sum is: " << mfar << endl;
}

int main()
{
	int a[100];
	cout<<"Randomly generated numbers are: ";
	for (int i=0; i < 80; i++)
	{
		a[i] = random(-5,20);
	}
	for (int i=0; i < 80; i++)
	{
		cout<<a[i]<<", ";
	}
	int max_sum = maxSubArraySum(a, 80);
	return 0;
}