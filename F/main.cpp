#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum, av, x[55], result, cou = 1;

    while (cin >> n, n)
    {
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
            sum += x[i];
        }
        av = sum / n;
        result = 0;
        for (int i = 0; i < n; i++)
        {
            if (x[i] > av)
            {
                result += x[i] - av;
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n", cou++, result);
    }

    return 0;
}
