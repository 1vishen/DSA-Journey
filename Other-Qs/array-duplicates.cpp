// https://www.geeksforgeeks.org/problems/find-duplicates-in-an-array/1?page=1&category=Arrays&difficulty=Basic,Easy&sortBy=submissions

class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        // code here
        unordered_map<int, int> dup;
        vector<int> result;
        
        for(int i = 0; i < n; i++) {
            dup[arr[i]]++;
        }
        
        for(auto &duplicate : dup) {
            if(duplicate.second > 1) {
                result.push_back(duplicate.first); 
            }
        }
        
        if(result.empty()) {
            result.push_back(-1);
        }
        
        sort(result.begin(), result.end());
    
        return result;
    }
};
