#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> a={5,2,8,1,9};
    sort(all(a));

    cout<<"Vector : ";
    for(auto x:a) cout<<x<<" ";
    cout<<"\n";

    set<int> b;
    b.insert(10);
    b.insert(5);
    b.insert(20);

    cout<<"Set : ";
    for(auto x:b) cout<<x<<" ";
    cout<<"\n";

    unordered_set<int> c;
    c.insert(7);
    c.insert(1);
    c.insert(7);

    cout<<"Unordered Set : ";
    for(auto x:c) cout<<x<<" ";
    cout<<"\n";

    map<string,int> d;
    d["apple"]=3;
    d["banana"]=7;

    cout<<"Map :\n";
    for(auto x:d)
        cout<<x.ff<<" "<<x.ss<<"\n";

    unordered_map<int,string> e;
    e[1]="one";
    e[2]="two";

    cout<<"Unordered Map :\n";
    for(auto x:e)
        cout<<x.ff<<" "<<x.ss<<"\n";

    queue<int> f;
    f.push(10);
    f.push(20);
    f.push(30);

    cout<<"Queue : ";
    while(!f.empty()){
        cout<<f.front()<<" ";
        f.pop();
    }
    cout<<"\n";

    stack<int> g;
    g.push(5);
    g.push(10);
    g.push(15);

    cout<<"Stack : ";
    while(!g.empty()){
        cout<<g.top()<<" ";
        g.pop();
    }
    cout<<"\n";

    priority_queue<int> h;
    h.push(4);
    h.push(10);
    h.push(2);

    cout<<"Max Heap : ";
    while(!h.empty()){
        cout<<h.top()<<" ";
        h.pop();
    }
    cout<<"\n";

    priority_queue<int,vector<int>,greater<int>> i;
    i.push(4);
    i.push(10);
    i.push(2);

    cout<<"Min Heap : ";
    while(!i.empty()){
        cout<<i.top()<<" ";
        i.pop();
    }
    cout<<"\n";

    deque<int> j;
    j.push_back(10);
    j.push_front(5);
    j.push_back(20);

    cout<<"Deque : ";
    for(auto x:j) cout<<x<<" ";
    cout<<"\n";

    pair<int,string> k={1,"CPP"};
    cout<<"Pair : "<<k.ff<<" "<<k.ss<<"\n";

    vector<pair<int,int>> l;
    l.pb({1,5});
    l.pb({2,3});
    l.pb({3,8});

    cout<<"Vector of Pairs :\n";
    for(auto x:l)
        cout<<x.ff<<" "<<x.ss<<"\n";

    string s="competitive";
    reverse(all(s));
    cout<<"Reverse String : "<<s<<"\n";

    return 0;
}