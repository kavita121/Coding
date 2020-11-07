//Pyramid Solitaire 
//Accepted

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int t;
    long long n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> pyramid{2,7};
        int i=1, count=0;
        if(n>=7)
        {
            while(pyramid[i] <= n)
            {
                i++;
                pyramid.push_back(2*pyramid[i-1] - pyramid[i-2] + 3);
            }
            while(n>pyramid[0])
            {
               for(int i=pyramid.size() - 1; i>=0; )
                {
                    if(pyramid[i]<=n)
                    {
                        count++;
                        n -= pyramid[i];
                    }
                    else i--;
                }
            }
            if(n==2)
                count++;
        }  
        else
            count=n/2;
        cout<<count<<endl;
    }
    return 0;
}
