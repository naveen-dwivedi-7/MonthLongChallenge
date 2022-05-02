#include<bits/stdc++.h>
using namespace std;
void sortArrayByParity(vector<int>&nums){
 int l, r;
 l=0;
 r=nums.size()-1;
 while(l<r){
     while(nums[l]%2==0 && l<r){
      l++; }
      while(nums[r]%2!=0 && l<r){
      r--;  }

      if(l<r){
          swap(nums[l], nums[r]);
          l++;
          r--;
      }
 }
  vector<int>:: iterator it;
  for(it=nums.begin();it!=nums.end();it++){
      cout<<*it<<"  ";
  }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>nums(arr, arr+n);
    sortArrayByParity(nums);

}