//#pragma GCC optimize("O3,unroll-loops")

static const auto fast_io = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();




class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()){
            return 0 ;
        }
        

        int l =0;
        int r = height.size()-1;
        int leftmax = height[l] , rightmax = height[r];
        int res = 0 ;
        while (l < r){
            if(leftmax < rightmax){
                l++;
                leftmax = max(leftmax , height[l]);
                res+= leftmax-height[l];

            }else {
                r--;
                rightmax = max(rightmax,height[r]);
                res+= rightmax - height[r];
            }
        }return res;


    }
};
