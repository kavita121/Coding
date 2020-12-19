//First and last occurrences of X
//GFG ACCEPTED

#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x;
        cin>>n>>x;
        int first = -1, last = -1;
        for(int i=0; i<n; i++)
        {
            int in;
            cin>>in;
            if(in == x)
            {
                if(first == -1)
                    first = last = i;
                else
                    last = i;
            }
        }
        if(first == -1)
            cout<<-1<<endl;
        else
            cout<<first<<" "<<last<<endl;
    }
	return 0;
}