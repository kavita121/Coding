//118A String Task

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str, res="";
    int i, j;
    cin>>str;
    for( i=0; i<str.size(); i++ )
    {
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'Y'  || str[i] == 'y' )
        {
            ;
        }
        else
        {
            if(isupper(str[i]))
            {
                str[i] = tolower(str[i]);
            }
            res += '.' ;
            res = res + str[i];
        }
        
    }
    cout<<res;
    return 0;
}
