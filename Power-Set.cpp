#include <iostream>
#include <vector>
using namespace std;

void power(int index,int n,int arr[],vector<vector<int>>&ans,vector<int>curr){
  if(index==n){
    ans.push_back(curr);
    return;
  }
  power(index +1,n,arr,ans,curr);
  curr.push_back(arr[index]);
  power(index +1,n,arr,ans,curr);
  
}

int main() 
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<int>curr ;
    vector<vector<int>>ans;
    power(0,n,arr,ans,curr);
    for(auto vec:ans){
        cout<<"[";
      for(auto ele:vec){
        cout<<"{ "<<ele<<" }"<<"";
      }cout<<"]";
      cout <<endl;
    }
    
    return 0;
}
