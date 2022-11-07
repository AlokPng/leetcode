class Solution {
public:
    int maximum69Number (int num) {
        vector<int>ans;
        while(num)
        {ans.push_back(num%10);
        num=num/10;
        }
        reverse(ans.begin(),ans.end());
       for(int i=0;i<ans.size();i++)
       {if(ans[i]==6)
        {ans[i]=9;
        break;
        }
       }
        reverse(ans.begin(),ans.end());
        num=0;
        for(int i=0;i<ans.size();i++)
        {
            num += ans[i]*pow(10,i);
        }
        return num;
    }
};