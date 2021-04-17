//Irrefutable Outcome
//code jam women i/o 
//Solved

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int c = 0; c<t; c++)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++)  
            cin>>arr[i];
        string ans="A";
        char curr = 'A';
        int pos = 1;
        int f = 1;  //1 = odd(greater), 2 = even(smaller)
        
        for(int i=0; i<n; i++)
        {
            if(f)
            {
                for(int j=0; j<arr[i]; j++)
                {
                    pos++;
                    curr++;
                    ans += curr;
                }
                f = 0;
                
                if(i<n-1)
                {
                    if(pos <= arr[i+1])
                        ans[ans.size()-1]='A'+arr[i+1];
                    curr = 'A' + arr[i+1];
                    pos = 1+arr[i+1];
                }
            }
            else
            {
                for(int j=0; j<arr[i]; j++)
                {
                    pos--;
                    curr--;
                    ans += curr;
                }
                f = 1;
            }
        }
        cout<<"Case #"<<c+1<<": "<<ans<<endl;
        
    }
    return 0;
}