
//      problem link---->>>> https://www.geeksforgeeks.org/problems/-minimum-number-of-coins4426/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article




class Solution {
  public:
    int findMin(int n) {
        // code here
        int coins[] = {10, 5, 2, 1};
      //  int a= coins.size();
      if(n<=0) return 0;
        
        int count=0;
        for(int i=0;i<4;i++){
            if(n>=coins[i]){
                int ans=(n/coins[i]);
                count+=ans;
                n=n%coins[i];
            }
            
        }
        return count;
    }
};