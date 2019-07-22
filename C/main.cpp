#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, a, b, c;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        cin >> a >> b >> c;
        if(((a>b) && (c>a)) || ((a<b)&&(a>c)))
        {
            cout << "Case " << i << ": " << a;
        }
        else if(((b>a)&&(b<c)) || ((b<a)&&(b>c)))
        {
            cout << "Case " << i << ": " << b;
        }
        else if(((c>a)&&(c<b)) || ((c<a)&&(c>b)))
        {
            cout << "Case " << i << ": " << c;
        }
        cout << endl;
    }

    return 0;
}
