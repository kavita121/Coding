//Implement atoi() function GFG
//ACCEPTED

 #include <bits/stdc++.h>
using namespace std;

int atoi(string str);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<atoi(s)<<endl;
	}
}


int atoi(string str)
{
    int num, m = 1;
    for(int i=str.size()-1; i>=0; i--)
    {
        //for negative numbers
        if(str[i] == '-' && i==0)
        {
            num = -(num);
            break;
        }
        else if(!isdigit(str[i]))
            return -1;
        int temp = str[i] - (int)'0';
        num += temp*m;
        m *= 10;
    }
    return num;
}