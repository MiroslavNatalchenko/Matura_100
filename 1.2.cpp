#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("mecz.txt", "r", stdin);
    string S;
    long long cnt_A=0,cnt_B=0;
    cin >> S;
    for (int i=0;i<S.size();i++)
    {
        if (S[i]=='A')
            cnt_A++;
        else
            cnt_B++;
        if ( (cnt_A>999) || (cnt_B>999) )
        {
            if (abs(cnt_A-cnt_B)>2)
            {
                if (cnt_A>cnt_B)
                    cout << "A ";
                else
                    cout << "B ";
                cout << cnt_A << ':' << cnt_B;
                break;
            }
        }
    }
    return 0;
}
