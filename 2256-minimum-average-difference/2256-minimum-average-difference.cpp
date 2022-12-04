class Solution {
public:
    int minimumAverageDifference(vector<int>& arr) {
        int n = arr.size()  , ind = 0;
        int ans = INT_MAX;
        vector<long long>sum(n) ;
        sum[0] = arr[0];
        for(int i = 1 ; i < n ; i++)
        {
            sum[i] = sum[i-1]+arr[i];
        }
        for(int i = 0 ; i < n-1 ; i++)
        {
     int temp = abs( int(sum[i] / (i+1))-  int((sum[n-1] - sum[i]) / (n-i-1))   ) ;
            //cout<<temp<<endl;
           if(temp < ans)
            {
                ans = temp;
                ind = i;
            }
        }
        int k = int(sum[n-1] / n+1) ;
        if( k <= ans) return n-1;
        
        return ind ;
    }
};
