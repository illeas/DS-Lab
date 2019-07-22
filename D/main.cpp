#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int p=1; p<=t; p++)
    {
        int n, th=0, tl=0;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        if(n>1)
        {
            for(int j=0; j<n-1; j++)
            {
                if(a[j]<a[j+1])
                {
                    th++;
                }
                else if(a[j]>a[j+1])
                {
                    tl++;
                }
            }
        }
        cout << "Case " << p << ": " << th << " " << tl <<endl;
    }

    return 0;
}
