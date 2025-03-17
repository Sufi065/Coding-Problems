#include <iostream>
#include <vector>
using namespace std;
void display(vector <int>t){
    for(int i=0;i<t.size();++i){
        cout<<t[i]<<" ";
    }
}
int main(){   
    vector<int> v;hcg
    vector<int> v1(6);
    vector<int> v2(10,100);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v1.size()<<endl;
    cout<<v1.capacity()<<endl;
    cout<<v2.size()<<endl;
    cout<<v2.capacity()<<endl;
    vector<int>::iterator it;
    it=v.begin();
    cout<<*it<<endl;
    it++;
    cout<<*it<<endl;
    it++;
    cout<<*it<<endl;
    vector<int>v5={10,20,30,40,50};
    for(it=v5.begin();it!=(v5.begin()+3);it++)
    cout<<*it<<"  " ;
    cout<<endl;
    cout<<v5.at(1)<<endl;
    cout<<v5.back()<<endl;
    v5.erase(v5.begin());
    for(auto x:v5)
    cout<<x<<" "<<endl;
    v5.insert(v5.begin()+2,10);
    for(auto x:v5)
    cout<<x<<" ";
    v5.insert(v5.begin(),4,0);
    for(auto x:v5)
    cout<<x<<" ";
    int n;
    cout<<"Enter the Number of item to add"<<endl;
    cin>>n;
    for (int i=0;i<n;++i){
        int x;
        cin>>x;
        v.push_back(x);
    }
    v.pop_back();
    display(v);
    return 0;
}

void pair(){
    
    pair<int,int> p=make_pair(1,2);
    pair<int,pair<int,int>> p1={10,{20,30}};
    pair<int,string> p2={27,"Sufi"};
    cout<<p2.first<<" "<<p2.second<<" "<<endl;
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
    cout<<p.first<<" "<<p.second;
  
}

