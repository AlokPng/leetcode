//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
   public:
// calculation of next smaller element to right.
    void NSR(long long arr[] , int n,vector<long long> &ans){
        stack<pair<int,int>> s;
        s.push({arr[n-1],n-1});
        ans.push_back(n);
        for(int i = n-2; i >= 0; i--){
            while(!s.empty() && (s.top().first >= arr[i]))
            s.pop();
            
            if(s.empty()){
                ans.push_back(n);
                s.push({arr[i],i});
            }
            else{
                ans.push_back(s.top().second);
                s.push({arr[i],i});
            }
        }
        reverse(ans.begin(),ans.end());
    }

// calculation of next smaller element to left.
void NSL(long long arr[], int n,vector<long long> &ans){
        stack<pair<int,int>> s;
        s.push({arr[0],0});
        ans.push_back(-1);
        for(int i = 1; i < n; i++){
            while(!s.empty() && (s.top().first >= arr[i]))
            s.pop();
            
            if(s.empty()){
                ans.push_back(-1);
                s.push({arr[i],i});
            }
            else{
                ans.push_back(s.top().second);
                s.push({arr[i],i});
            }
        }
    }

// function call
long long getMaxArea(long long arr[], int n)
    {
        vector<long long> v1;
        NSR(arr,n,v1);
        
        vector<long long> v2;
        NSL(arr,n,v2);
        
        long long res = 0;
        for(long long i = 0; i < n ; i++){
            long long temp = arr[i]*(v1[i] - v2[i] -1);
            res = max(res,temp);
        }
        return res;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends