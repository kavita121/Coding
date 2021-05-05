//B. Ordinary Numbers
//Codeforces Round 719 Div 3

#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        long long n, temp, ans = 0;
        cin >> n;
        temp = 10;
        if (n < 11)
        {
            if(n <= 9)
                ans = n;
            else
                ans = 9;
        }
        else
        {
            int count = 0;
            while (temp < n)
            {
                count++;
                ans += 9;
                temp *= 10;
            }

            temp = pow(10, count);
            //cout<<"temp "<<temp<<endl;

            if(n != temp)
                ans += (n / temp) - 1;
            //cout<<"mid "<<(n / temp) - 1<<endl;
            

            int dig = n / temp;
            //cout<<"dig "<<dig<<endl;

            long long num = dig;
            while (count--)
            {
                num = num * 10 + dig;
            }
            //cout<<"num "<<num<<endl;

            if (n >= num && n > temp)
                ans++;
        }

        cout << ans << endl;
    }
    return 0;
}