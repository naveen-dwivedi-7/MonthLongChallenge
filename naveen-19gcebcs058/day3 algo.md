Without Extra Space 
Algorithm
1.The concept behind this algorithm is to find the left and right boundary of the subarray
 by finding the minimum and maximum element of the unsorted subarray. 
 
 2.Since we need to sort the array, our final graph will be increasing. 

So our first task is to determine the point where the slope of our graph falls
 because whenever the slope falls, we know that the unsorted array has started.

3.We now determine the minimum element found till the end of the array ARR given by MINI.

4.Similarly, we traverse the array from the last index to find the point where the slope rises
 and find the maximum element, MAXI, until we reach the array's beginning.

5.Now, we traverse the array once again, find the first element that is larger than MINI,
 and store its index.

6.Similarly, we traverse the array from the last and find the first element that is smaller than
 MAXI and store its index.

7.We have the start and endpoints of our subarray, and its length can easily be determined. 

TC=O(N) and SC=O(1)
