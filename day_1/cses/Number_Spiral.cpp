#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        long long int y, x;
        cin >> y >> x;
        long long int maxi = max(y, x);
        long long int squre = (maxi - 1) * (maxi - 1);

        if (maxi & 1)
        {

            if ( y > x )
            {
              cout<< squre + x <<endl;
            }
            else
            {
                cout<< (maxi*maxi) - y + 1<<endl;
            }
        }
        else
        {

            if ( y > x )
            {
                cout<< ( maxi * maxi ) - x + 1<<endl;
            }

            else
            {
                cout<< squre + y<<endl;
            }
        }
    }
    return 0;
}