#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

    int n;
    cin>>n;

    // [2 2 2 1 1 4 3 4]

    // 2 3
    // 1 2
    // 3 1
    // 4 2

    vector<int>V;

    int a;

    for(int i=0;i<n;i++){
        cin>>a;
        V.push_back(a);
    }
    
    unordered_map <int,int>mp;

    // mp[2]=1;
    // mp[2]=1+1;




    for(int i=0;i<n;i++){
        mp[V[i]]=mp[V[i]]+1;
    }

    unordered_map<int,int>::iterator it;

    for(it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
     }
   return 0;
}