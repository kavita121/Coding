//Find the two non-repeating elements in an array of repeating elements
//ACCEPTED


#include<bits/stdc++.h>
using namespace std;


class Solution
{
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        vector<int> res;
        int c =0;
        //first taking the xor of all the numbers the duplicate numbers will get cancelled out as: A^A = 0 
        for(int i=0; i<nums.size(); i++)
        {
            c ^= nums[i];
        }
        int index;

        //This is to find the first set bit in the xor of a and b i.e. if 10100 then index = 4 if 110000 index = 16 and so on
        index = c & ~(c-1);     

        //maintaining two variables one for the ones having the bit set and other having the bit unset
        //the bit is set in xor means that this bit is different in both the repeating elements in the array
        //now the array will be divided into two sets: one having this bit set(x) and other having this unset(y) 
        int x = 0, y = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] & index)
            {
                x ^= nums[i];
            }
            else
            {
                y ^= nums[i];
            }
        }
        //pushing the result values in result vector
        res.push_back(x);
        res.push_back(y);
        //sorting the vector
        sort(res.begin(), res.end());
        return res;
    }
};


/*

My approach:

vector<int> singleNumber(vector<int>& nums) 
    {
        vector<int> res;
        int c =0;
        for(int i=0; i<nums.size(); i++)
        {
            c ^= nums[i];
        }
        int t = c;
        int index = 0;
        while(t>0)
        {
            //when we get the first set bit
            if(t%2)
                break;
            index++;
            t /= 2;
        }
        //the number corresponding to the first set bit in xor of a and b
        index = pow(2, index);
        //rest is same
        int x = 0, y = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] & index)
            {
                x ^= nums[i];
            }
            else
            {
                y ^= nums[i];
            }
        }
        res.push_back(x);
        res.push_back(y);
        sort(res.begin(), res.end());
        return res;
    }
*/

int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  