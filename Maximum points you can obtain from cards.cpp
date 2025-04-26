tc=O(2*k)


class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0,rsum=0, maxScore=0;
        for(int i=0;i<k;i++){
            lsum=lsum+cardPoints[i];
            maxScore=lsum;}
            int rInd=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--){
            lsum=lsum-cardPoints[i];
            rsum=rsum+cardPoints[rInd];
            rInd = rInd-1;
            maxScore=max(maxScore,lsum+rsum);
        
        }
       
        return maxScore;
        
    }
};
