#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool check[1000000];
    for(int i = 2; i <= n ; i++)
    {
        check[i] = true;
    }
    for(int i = 2 ; i <= n;  i++)
    {
        for(int j = i; j<= n; j++)
        {
            check[i*j] = false;
        }
    }
    for(int i = 2 ; i <= n;  i++)
    {
        if(check[i]== true)
        {
            cout << i<< " ";
        }
    }

    return 0 ;
}
