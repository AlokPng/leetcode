class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int directly_satisfied=0;
        int indirectly_satisfied=0;
        int max_indirectly_satisfied = INT_MIN;
        int i=0,j=0;
        while(j<customers.size())
        {   
            if(grumpy[j]==0) 
            {
				directly_satisfied+=customers[j];
				customers[j] = 0;
			}
            
            indirectly_satisfied+=customers[j];
            
            int k=j-i+1; //window size
            
            if(k<minutes) 
                j++;
            else if(k==minutes)
            {
                max_indirectly_satisfied= max(max_indirectly_satisfied,indirectly_satisfied);
                indirectly_satisfied-=customers[i];
                i++;
                j++;
            }
        }
        return max_indirectly_satisfied + directly_satisfied;
    }
    
};