// https://www.geeksforgeeks.org/problems/binary-search-1587115620/1?page=1&category=Arrays&difficulty=Basic,Easy&sortBy=submissions



// User function Template for javascript

class Solution {
    binarysearch(arr, k) {
        // Code Here
        let left = 0;
        let right = arr.length - 1;
        
        while (left <= right) {
            let mid = Math.floor((left + right) / 2);
            
            if(arr[mid] === k) {
                return mid;
            }
            else if (arr[mid] < k) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        
        return -1
    }
}