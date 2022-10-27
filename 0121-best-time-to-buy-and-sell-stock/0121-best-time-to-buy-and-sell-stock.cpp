class Solution {
public:
    int maxProfit(vector<int>& p) {
        int min=INT_MAX;
        int pr=0;
        for(int i=0;i<p.size();i++)
        {
            if(p[i]<min)
                min=p[i];
            
            pr=max(pr,p[i]-min);
            
        }
        return pr;
    }
};