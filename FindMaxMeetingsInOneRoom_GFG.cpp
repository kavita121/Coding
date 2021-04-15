//Find maximum meetings in one room
//GFG CORRECT 


//we will use a structure as we want to sort an array according to another array and also additional info needs to be saved about them
struct meeting
{
    int start, end;
    int pos;
}


//using this comparator we will sort the array according to the ending time in ascending order
static bool compare(struct meeting m1, struct meeting m2)
{
    return m1.end < m2.end;
}


vector<int> maxMeetingInRoom(vector<int> s, vector<int> f)
{
    vector<int> ans;

    vector<struct meeting> meet(n);
    for(int i=0; i<s.size(); i++)
    {
        meet[i].start = s[i];   
        meet[i].end = f[i];   
        meet[i].pos = i+1;   
    }

    sort(meet.begin(), meet.end(), compare);
    
    //taking the first meeting in the answer
    ans.push_back(meet[0].pos);

    //we put the limit for next meeting to be the ending time of the first meeting
    int fin = meet[0].end;

    for(int i=1; i<n; i++)
    {
        if(meet[i].start >= fin)
        {
            meet.push_back(meet[i].pos);
            fin = meet[i].start;
        }
    }
    return ans;
}