#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int getNum(vector<int>& v)
{
 int n = v.size();
 srand(time(NULL));
int index = rand() % n;
 int num = v[index];
 swap(v[index], v[n - 1]);
    v.pop_back();
 return num;
}
 void generateRandom(int n)
{
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        v[i] = i + 1;
    while (v.size()) {
        cout << getNum(v) << " ";
    }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
int n;
cin>>n;
cout<<n<<"\n";
generateRandom(n);
 return 0;
}
 // taken from geeks for geeks
