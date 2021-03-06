// 好困难。


class Solution {
public:
    int jump(vector<int>& nums) {
        int step = 0;
        int last = 0;
        int cur = 0;
        for(int i = 0; i < nums.size(); ++i){
            if(i>cur)
                return -1;
            if(i>last){
                last = cur;
                ++step;
            }
            cur = max(cur, i+nums[i]);
        }
        return step;
    }
};