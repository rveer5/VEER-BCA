class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water=0;
        int l=0;
        int h=height.size()-1;
        while(l<h){
            int curr_area=min(height[l],height[h])*h-l;
        
            max_water=max(curr_area,max_water);
        if(height[l]<height[h]){
            l++;
        }
        else{
            h--;
        }
        
    }
    return max_water;
    }
    
};

