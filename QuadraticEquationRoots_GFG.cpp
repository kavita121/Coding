// Quadratic Equation Roots GFG
//ACCEPTED

#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) 
    {
        int s1, s2;
        vector<int> ans;
        if( b*b >= 4*a*c )
        {
            s1=floor((-b + (double)sqrt(b*b - 4*a*c)) / (2*a));
            s2=floor((-b - (double)sqrt(b*b - 4*a*c)) / (2*a));
            ans.push_back(s1);
            ans.push_back(s2);
            //to sort in decreasing order
            sort(ans.rbegin(), ans.rend());
        }
        else
        {
            ans.push_back(-1);
        }
        return ans;
    }
};


int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
}