class Solution {
public:
    void sortColors(vector<int>& nums) {
       // sort(nums.begin(),nums.end());
      /*vector<int> count(3, 0);
        int temp, j=0;
        for(int i=0;i<nums.size();i++)
           count[nums[i]]++;
        
        int i=0;
        while(j<3){
            temp=count[j];
            while(temp--)
                nums[i++]=j;
            j++;
        }*/
        int len = nums.size();
        int colornum[3] = {0};
        
        for(int i = 0; i < len; i++){
            colornum[nums[i]]++;
        }
        
        for(int i = 0; i < len; i++){
            if(colornum[0]){
                nums[i] = 0;
                colornum[0]--;
            }
            else if(colornum[1]){
                nums[i] = 1;
                colornum[1]--;
            }
            else{
                nums[i] = 2;
            }
        }
    }
};