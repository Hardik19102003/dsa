#include<iostream>
using namespace std;

int main()
{
    int n, i, j, f;
    cout<<"Enter the number of users: ";
    cin >> n;
    int facebook[n][n];
    cout<< "Enter elements: ";
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cin >> facebook[i][j];
        }
    }
    int r[n*n], c[n*n], k = 0;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(facebook[i][j] == 1)
            {
                r[k] = i + 1;
                c[k] = j + 1;
                k = k + 1;
            }
        }
    }
    cout << "\nList of row is: [";
    for(i = 0; i < k; i++)
    {
        cout << r[i] << ", ";
    }
    cout<< "]\n"<< "list of column is: [";
    for(i = 0; i < k; i++)
    {
        cout << c[i] << ", ";
    }
    cout<<"]\n\n"<<"B) Number of friends each user has is (User1, User2...... User"<< n <<"): ";
    for (i = 1; i <= n; i++)
    {
        f = 0;
        for(j = 0; j < k; j++)
        {
            if(r[j] == i)
            {
                f = f + 1;
            }
        }
        cout<< f <<", ";
    }
    float AverageFriends = (float)k/(float)n;
    cout<< "\n\nC) Average number of friendships in the Facebook Network: "<< AverageFriends << "\n";

    return 0;
}