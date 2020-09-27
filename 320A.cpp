//320 A Magic Numbers

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string ip;
    int f=0, i=0, j;
    cin >> ip;
    while( i != ip.size() )
    {
        if( ip[i] == '1' )
        {
            i++;
            if(ip[i] == '4' && i<ip.size())
            {
                i++;
                if(ip[i] =='4' && i<ip.size())
                    i++;
            }
            f=1;
        }
        else
        {
            f=0;
            break;
        }
    }
    if(f == 0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
