// Daily Coding Problem #3
//Kth Row Of Pascal's Triangle
//interviewbit  https://www.interviewbit.com/problems/kth-row-of-pascals-triangle/


void pascalRow(int n, vector<int> &ans)
{
    if(n == 1)
        return;
    
    vector<int> temp;
    temp.push_back(1);
    for(int i=0; i<ans.size()-1; i++)
    {
        temp.push_back(ans[i]+ans[i+1]);
    }
    temp.push_back(1);
    ans = temp;
    
    pascalRow(n-1, ans);
    
}

vector<int> Solution::getRow(int n) 
{
    //trying a recursive solution
    vector<int> ans;
    ans.push_back(1);
    if(n == 0)
        return ans;
    
    ans.push_back(1);
    if(n == 1)
        return ans;
    
    pascalRow(n, ans);
    
    return ans;
}