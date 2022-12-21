#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("mecz.txt", "r", stdin);
    string S;
    long long cnt_A=0,cnt_B=0,cnt_max_A=0,cnt_max_B=0;
    cin >> S;
    for (int i=0;i<S.size()-1;i++)
    {
       if (S[i]=S[i+1])
       {
           if(S[i]=='A')
            cnt_A++;
           else cnt_B++;
       }
       else
       {
           if (S[i]=='A')
           {
               if (cnt_A>cnt_max_A)
               {
                   cnt_max_A=cnt_A;
               }
               cnt_A=0;
           }
           if (S[i]=='B')
           {
               if (cnt_B>cnt_max_B)
               {
                   cnt_max_B=cnt_B;
               }
               cnt_B=0;
           }
       }
    }
    if (S[S.size()-1]=='A')
    {
        if (cnt_A>cnt_max_A)
        {
            cnt_max_A=cnt_A;
            cnt_A=0;
        }
    }
    if (S[S.size()-1]=='B')
    {
        if (cnt_B>cnt_max_B)
        {
            cnt_max_B=cnt_B;
            cnt_B=0;
        }
    }
    if (cnt_max_A>cnt_max_B)
        cout << "A " << cnt_max_A;
    else
        cout << "B " << cnt_max_B;
    return 0;
}
