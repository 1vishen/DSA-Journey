// https://www.geeksforgeeks.org/problems/square-pattern-1662666141/0

class Solution {
  public:
    void printSquare(int n) 
    {
        // code here
        for (int i = 0; i < 2*n - 1; i++)
        {
            for (int j = 0; j < 2*n - 1; j++)
            {
                // making an new matrix by (n - num at that position) = value
                // finally num at that position =  n - value
                int top = i;
                int left = j;
                int bottom = (2*n - 1) - 1 - i;
                int right = (2*n - 1) - 1 -j;
                
                int value = min(top, min(bottom, min(left, right))); 
                //num at that posn is minimun of it's position form all four sides (in new matrix)
                
                cout << n -  value << ' ';
                
            }
            
            cout << endl;
        }
    }
};