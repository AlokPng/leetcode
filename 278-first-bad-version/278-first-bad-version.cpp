

class Solution {
public:
    int firstBadVersion(int n){
        int start = 1 ;
        int end = n;
        int last_one = -1 ;
        while(end>= start){
            int mid = start + (end-start)/2;
            if(isBadVersion(mid)){
                last_one = mid ;
                end = mid -1;
            }else{
                start = mid + 1;
            }
        }
        return last_one ;
    }
};