//227 B maps used
#include <bits/stdc++.h>
 
using namespace std;
 
 
int main ()
{
    long int n, m, i, j;
    long long int vasya = 0, petya = 0;
    cin >> n;
    long int v = 1,p = n;
    map<long int, long int> vasyaMap, petyaMap;
    vector < long int >arr (n);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        vasyaMap.insert({arr[i], v++});
        petyaMap.insert({arr[i], p--});
    }
    cin >> m;
    auto itrV = vasyaMap.begin();
    auto itrP = petyaMap.begin();
    vector < long int >query (m);
    for (i = 0; i < m; i++)
    {
        cin >> query[i];
        itrV = vasyaMap.find(query[i]);
        itrP = petyaMap.find(query[i]);
        vasya += itrV->second;
        petya += itrP->second;
    }
    cout<<vasya<<" "<<petya; 
    return 0;
}