int ans=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=i+2;k<nums.size();k++){
                    if(nums[i]==nums[j]==nums[k]){
                        ans =abs(i - j) + abs(j - k) + abs(k - i);
                    }
                }
            }
        }
        return ans;