#include <iostream>

using namespace std;

int main()
{
    long a, b;

    while(cin >> a >> b){
        if((a>b)){
            cout << a-b;
        }else{
            cout << b-a;
        }
        cout << endl;
    }

    return 0;
}
