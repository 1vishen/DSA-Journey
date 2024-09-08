//https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1?page=1&category=Arrays&difficulty=Basic,Easy&sortBy=submissions
// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        int sum = 0;
        for(int i = 0; i < n - 1; i++) {
            sum += array[i];
        }
        
        int sumByFormula = (n * (n + 1)) / 2;
        
        return abs(sumByFormula - sum);
    }
};