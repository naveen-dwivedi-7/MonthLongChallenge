#include<bits/stdc++.h>
using namespace std;
int find (vector<int>&nums){
int n=nums.size();


int maxi=INT_MIN ,mini=INT_MAX;
bool sorted=true;
  // falls
for(int i=1;i<n;i++){
    if(nums[i]<nums[i-1]){
        sorted=false;
    }
    
     if(!sorted){
            mini=min(mini,nums[i]);
    }
    
}
  //rises
sorted =true;
for(int i=n-2;i>=0;i--){
    if(nums[i]>nums[i+1]){
        sorted=false;
    }
    
     if(!sorted){
            maxi=max(maxi,nums[i]);
    }
    
}
 int startIndex, endIndex;
// Finding the first element from the start, which is just larger than the minimum element.

for (int i = 0; i < n; i++)
    {
        if (nums[i] > mini)
        {
            startIndex = i;
            break;
        }
    }

    // Finding the first element from the last that is just smaller than the maximum element.
    for (int i = n - 1; i >= 0; i--)
    {
        if (nums[i] < maxi)
        {
            endIndex = i;
            break;
        }
    }

    // Returning the length of the shortest unsorted continuous subarray.
    return ((endIndex - startIndex > 0) ? endIndex - startIndex + 1 : 0);
  

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>nums(arr, arr+n);
    cout<<find(nums);

}