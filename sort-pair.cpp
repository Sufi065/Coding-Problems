#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool kyaswapkarega(pair<int,int>x,pair<int,int>y){
    if(x.first!=y.first){
        if(x.first>y.first)
    return true;
    return false;
    }
    else{
        if(x.second<y.second){
            return true;
        }
        return false;
    }
}


int main()
{
    int n;
    vector<pair<int,int>>v(n);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>v[i].first>>v[i].second;
        
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(kyaswapkarega(v[i],v[j]))
                swap(v[i],v[j]);
        
    
    for(int i=0;i<n;i++)
        cout<<v[i].first<<" "<<v[i].second<<endl;
    return 0;
}
