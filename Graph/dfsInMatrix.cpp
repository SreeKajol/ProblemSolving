#include<bits/stdc++.h>
using namespace std;

//-------Ordered_set-------
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
typedef tree< long long, null_type, less_equal<long long>, rb_tree_tag, tree_order_statistics_node_update > ordered_set; 
// cout<<*X.find_by_order(1)<<endl; // iterator to the k-th element
// cout<<X.order_of_key(-5)<<endl;  // number of items in a set that are strictly smaller than our item
#define int long long
#define scan(v) for(auto &it : v) cin >> it;
#define print(v) for(int i=0; i<v.size(); i++) cout << v[i] << " "; cout << "\n";
#define joldi_kor_beta ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define TC int t=1; cin >> t; for(int i=1; i<=t; i++)
#define pi acos(-1)
#define all(x) x.begin(), x.end()
#define numSize(n) floor(log2(n)) + 1; //O(1)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

//Debuger
template<typename F,typename S>ostream&operator<<(ostream&os,const pair<F,S>&p){return os<<"("<<p.first<<", "<<p.second<<")";}
template<typename T>ostream&operator<<(ostream&os,const vector<T>&v){os<<"{";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"}";}
template<typename T>ostream&operator<<(ostream&os,const set<T>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<",";os<<*it;}return os<<"]";}
template<typename T>ostream&operator<<(ostream&os,const multiset<T>&v) {os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"]";}
template<typename F,typename S>ostream&operator<<(ostream&os,const map<F,S>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<it->first<<" = "<<it->second;}return os<<"]";}
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu(){cerr << endl;}
template<typename T>void faltu(T a[],int n){for(int i=0;i<n;++i)cerr<<a[i]<<' ';cerr<<endl;}
template<typename T,typename...hello>void faltu(T arg,const hello&...rest){cerr<<arg<<' ';faltu(rest...);}

//Comparetor
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    if(a.first!=b.first)
    return (a.first < b.first);
    else return(a.second > b.second);
}
// Bit manupulation 
#define    cntone(n)                    __builtin_popcount(n)
#define    Bit_off(val,pos)             (val & (~(1<<pos)))
#define    Bit_on(val,pos)              (val | (1<<pos))
#define    Bit_toggle(val,pos)          (val ^ (1<<pos))
#define    Bit_check(val,pos)           (bool)(val & (1<<pos))
//Normal output
#define DIST(x1,x2, y1, y2) (((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)))
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl cout<<"\n";
const int Mod=1e9+7;
const int N=1e6;
const int Inf=1e15+10;

/*---------------<--Let's Start-->-----------------*/

signed main()
{
    joldi_kor_beta;
    
    //funtion part
   auto SreeKajol = [&](int Case) /* ->vector<int> */ {  
    int n, m, k, l, r, t, x = 0, y = 0, z = 0, temp = 0;
    string str, s, s1, s2;
    cin>>n>>m>>str;
    map<char,int>mp;
    for(auto ch:str){
        mp[ch]++;
    }
    cout<<(10-mp.size())*m<<"\n";
    
};
    //Testcse part
    int Case=0;
    TC
    SreeKajol(++Case);
    
    return 0;
}