class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int  l = 0 , h = arr.size()-1;
        // two pointers 
        
        // while window size > k 
        while( (h-l+1) > k )
        {
            // shrink from left
            if(abs(arr[l]- x) > abs(arr[h] -x)){
                l++;
            }
            // shrink from right
            else{
                h--;
            }
        }
        return vector<int> (arr.begin()+l, arr.begin()+h+1);
    }
};