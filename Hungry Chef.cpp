//https://www.codechef.com/problems/BURGERS2
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n, r;
        cin >> x >> y >> n >> r;
        if (x * n > r)
        {
            cout << "-1\n";
        }
        else
        {
            int countY = (r - (n * x)) / (y - x);
            if (countY > n)
            {
                countY = n;
            }
            cout << n - countY << " " << countY << endl;
        }
    }
}
