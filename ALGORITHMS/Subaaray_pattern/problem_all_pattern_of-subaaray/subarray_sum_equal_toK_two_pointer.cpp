
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
  
    int n = a.size();
    int i =  0 ;
    int j =  0;
    long long  sum   = a[0];
    int len = 0;
    while( j < n){
        while( i<=j && sum > k) {
            sum -= a[i++];
        }
        if(sum ==k)len = max(len , j- i +1);
        j++;
        if( j <  n) sum +=a[j];
    }
    return len ;
}
