#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, n, m;
    cin >> a >> n >> m;
    int x = 1;
    for(int i = 0 ; i< n ; i++)
    {
        x = x * a%m;
    }
    cout << x % m;
    return 0;
}
