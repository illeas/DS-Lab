#include<stdio.h>
using namespace std;
int Convert(char ch[]) {
    int top = 1, ans=0;
    for (int i=9; i>=1; i--)
        if (ch[i]!='.') {
            if (ch[i]=='o') ans += top;
            top *= 2;
        }
      return ans;
}
int main() {
    char ab[15];
    gets(ab);
    while (gets(ab)) {
        if (ab[0]=='_') break;
        printf("%c", Convert(ab));
    }
}
