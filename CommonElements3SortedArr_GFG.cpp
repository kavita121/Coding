//Common elements in 3 sorted array
//ACCEPTED

#include <bits/stdc++.h>
using namespace std;


class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            map<int, int> num;
            for(int i=0; i<n1; i++)
            {
                num.insert({A[i], 1});
            }
            for(int i=0; i<n2; i++)
            {
                auto itr = num.find(B[i]);
                if(itr != num.end() && itr->second == 1)
                {
                    itr->second += 1;
                }
            }
            for(int i=0; i<n3; i++)
            {
                auto itr = num.find(C[i]);
                if(itr != num.end() && itr->second == 2)
                {
                    itr->second += 1;
                }
            }
            vector<int> common;
            for(auto itr = num.begin(); itr != num.end(); itr++)
            {
                if(itr->second == 3 )
                    common.push_back(itr->first);
            }
            return common;
        }

};



int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;public:    
       vector<int> commonElements (int ar1[], int ar2[], int ar3[], int n1, int n2, int n3) 
{ 
    vector<int> common;
    // Initialize starting indexes for ar1[], ar2[] and ar3[] 
    int i = 0, j = 0, k = 0; 
  
    // Iterate through three arrays while all arrays have elements 
    while (i < n1 && j < n2 && k < n3) 
    { 
         // If x = y and y = z, print any of them and move ahead  
         // in all arrays 
         if (ar1[i] == ar2[j] && ar2[j] == ar3[k]) 
         {   common.push_back(ar1[i]); } 
  
         // x < y 
         else if (ar1[i] < ar2[j]) 
             i++; 
  
         // y < z 
         else if (ar2[j] < ar3[k]) 
             j++; 
  
         // We reach here when x > y and z < y, i.e., z is smallest 
         else
             k++; 
    } 
    return common;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}  