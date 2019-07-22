#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, day, party, a[100];
    cin >> t;

    while(t--){
        int losworkingday = 0;
        cin >> day >> party;
        for(int i=0;i<party;i++){
            cin >> a[i];
        }
        for(int i=1;i<=day;i++){
            if((i%7==6) || (i%7==0)){
                continue;
            }
            bool found = false;
            for(int j=0;j<party;j++){
                if(i%a[j]==0){
                    found = true;
                }
            }
            if(found){
                losworkingday++;
            }
        }
        cout << losworkingday << endl;
    }

    return 0;
}
