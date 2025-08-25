class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        unordered_map<int, int> mpp;
        int sum =  0;
        int len = 0;
        for(int i = 0;i<n;i++) {
            sum +=arr[i];
            if(sum== k) len = max(len  , i+1);
            
            int ch = sum - k;
            if( mpp.find(ch) !=mpp.end()) {
                len = max(len , i  - mpp[ch]);   
            }
            if(mpp.find(sum) == mpp.end()) mpp[sum] = i;
        }
        return len;
    }
};
//hashing o n which  find the prefix sunm and then check wether my psum ids present in hash map or not fif yes then you are my new len , o/w 
//-> move it before that , put value intot he hashmap if it is not previously exist  , then only i wil l  , keep it , 
// basicallly initially hash array is empty -> ask him (present or not) and then put it into the hashmap -<?> 
