#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int a[1000000];
    for(int i = 1 ; i <= n; i++)
    {
        cin >> a[i];
    }
    int left = 1;
    int right = n;
    while(left <= right)
    {
        int mid = (left + right)/2;
        if(a[mid] == x) {
            cout <<"YES";
            return 0;
        }
        if(a[mid] > x){
            right = mid - 1;
        }
        else left = mid + 1;
    }
    cout << "NO" << endl;

}
