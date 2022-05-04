#include<bits/stdc++.h>
using namespace std;
/* two pointer approach */
int count_pairs(vector<int>& nums, int k){
int n= nums.size();
// step1: sort the vector in ascending order
sort(nums.begin(), nums.end());
//step 2. initialize two pointer l and r 
int l=0;
int r=n-1;
// step 3 initialiaze count var ans=0 , for counting no of pairs
int ans=0;

//step 4. if sum of two no- nums[l], nums[r] pointed by left and right pointers 
 // strictly less or greater than target i.e. k (pair not found) , then inc l and dec r  by 1 respectively till l<r
        
while(l<r){
 if(nums[l]+ nums[r]<k){
     l++;
 } 
 else if(nums[l] + nums[r]>k){
    r--;
 }
 //step5 if nums[l]+ nums[r] equals to k(target), pair found and inc the count of 
 // var ans by 1 , inc l by 1 and dec r by 1 
else{
   ++ans;
   l++;
   r--;
}
//step 6 return ans
 
}
return ans;


}




int main(){
int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     cin>>k;
    vector<int>nums(arr, arr+n);
    cout<<count_pairs(nums,k);
}


// Tc= O(n* logn)+O(n)==O(n*logn)
// SC=O(1)