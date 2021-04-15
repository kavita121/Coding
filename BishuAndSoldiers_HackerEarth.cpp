//Bishu and Soldiers
//HackerEarth ACCEPTED

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int q, n, m;
	cin>>n;
	vector<int> power(n);
	for(int i=0; i<n; i++)
		cin>>power[i];
	cin>>q;
	sort(power.begin(), power.end());
	while(q--)
	{
		cin>>m;
		int count = 0, sum = 0, i=0;
		while(i<n && power[i] <= m)
		{
			count++;
			sum += power[i];
			i++;
		}
		cout<<count<<" "<<sum<<endl;
	}
	return 0;
}