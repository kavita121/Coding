    //Codechek
    //July cookoff 
    //Accepted ( after tutorial )

    #include<bits/stdc++.h>

    using namespace std;

    long long gcd(long long a, long long b)
    {
        if(a == 0)
            return b;
        
        return gcd(b%a, a);
    }

    int main()
    {
        long t;
        cin>>t;
        while(t--)
        {
            long long x, y;
            cin>>x>>y;

            long long op = 0;
            if( gcd(x, y) > 1)
            {
                op = 0;
            }
            else
            {
                if((x % 2 == 0 && y % 2 == 1) || (x % 2 == 1 && y % 2 == 0))
                {
                    op = 1;
                }
                else
                {
                    //increment x and check
                    if(gcd(x+1, y) > 1)
                    {
                        op = 1;
                    }
                    //increment y and check
                    else if( gcd(x, y+1) > 1 )
                    {
                        op = 1;
                    }
                    //if both need to be made even
                    else
                    {
                        op = 2;
                    }
                }
            }
            cout<<op<<endl;
        }
        return 0;
    }