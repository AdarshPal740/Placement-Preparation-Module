class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mi=0;
        int ma=0;
        int res=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]>prices[ma]){
                ma=i;
            }
            else if(prices[i]<prices[mi]){
            ma=i;
            mi=i;
            
            }
            res=max(res,prices[ma]-prices[mi]);
                                             }
        return res;
    }
    
};