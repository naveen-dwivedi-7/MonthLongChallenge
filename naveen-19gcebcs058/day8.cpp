/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
    //initialize cuurent as 0
 int curr=0;
    vector<int> flattenList;
public:
    
    void helperFunc(vector<NestedInteger> &nestedList){
        
        int n=nestedList.size(),temp;        
        vector<NestedInteger> temp2;
        
        for(int i=0;i<n;i++){
            // if element in a list is integet , get pushesd into temp
            if(nestedList[i].isInteger()){
                temp=nestedList[i].getInteger();
                flattenList.push_back(temp);
            }else{
                // if element is a list , call recursively to check it is list or element
                temp2=nestedList[i].getList();
                helperFunc(temp2);
            }
        } 
        
    }
    NestedIterator(vector<NestedInteger> &nestedList) {
        // call recursive function to check list or element
         helperFunc(nestedList);     
    }
    
    int next() {
        // Returns the next integer in the nested list.
      int ans=flattenList[curr];
        curr++;
        return ans;  
    }
    
    bool hasNext() {
       //Returns true if there are still some integers in the nested list and false otherwise.
        if(curr==flattenList.size()) return false;    
        return true;
    }
};

// TC=O(exp)
// SC=O(stack memory )
  
