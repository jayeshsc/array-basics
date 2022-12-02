#include <iostream>
#include <time.h>
using namespace std;

int main()
//formation of a random matrix with 0s and 1s  with given dimensions
{
    srand(time(0));
    int m, n;
    cout << "enter number of rows:";
    cin >> m;
    cout << "enter number of columns: ";
    cin >> n;
    int arr[m][n];
    arr[0][0] = 1;//storing first element as 1
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i | j != 0)
                arr[i][j] = rand() % 2;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
