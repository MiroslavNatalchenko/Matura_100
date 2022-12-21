#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("mecz.txt", "r", stdin);
    string S;
    long long cnt=0;
    cin >> S;
    for (int i=0;i<S.size()-1;i++)
        if (S[i]!=S[i+1])
           cnt++;
    cout << cnt;
    return 0;
}
