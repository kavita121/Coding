// Run Length Encoding
//GFG ACCEPTED

#include <bits/stdc++.h>
using namespace std;

char *encode(char *src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		char str[10000];
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


char *encode(char *src)
{     
    char *ans = new char[200];
    
    int i=0;
    int j=0;
    
    char prev = src[0];
    while(src[i] != '\0')
    {
        int count = 0;
        while(src[i] != '\0' && prev == src[i])
        {
            i++;
            count++;
        }
        ans[j++] = prev;
        
        char ind[5];
        int k = 0;
        while(count>0)
        {
            ind[k++] = (char)(count%10+'0');
            count /= 10;
        }
        for(int p = k-1; p>=0; p--)
        {
            ans[j++] = ind[p];  
        }
        
        
        prev = src[i];
    }
    
    ans[j] = '\0';
    
    
    return ans;
}     
 
