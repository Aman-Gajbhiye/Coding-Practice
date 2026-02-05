#include <iostream>
using namespace std;
int main()
{
    int m;
    cin >> m;
    int n = (m+1)/2;
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j<=i-1; j++){
            cout<<"-";
        }

        if (i % 2 != 0)
        {
            for (int j = 1; j <= m; j++)
            {
                if (j % 2 != 0)
                    cout << 1;
                else
                    cout << 0;
            }
        }
        for(int j = 1; j<=i-1; j++){
            cout<<"-";
        }
        if (i % 2 == 0)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j % 2 == 0)
                    cout << 1;
                else
                    cout << 0;
            }
        }
    

    cout << endl;
    }
}
