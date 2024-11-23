class NumArray {
public:
    vector <int> vec;
    NumArray(vector<int>& nums) {
        int cur=0;
        for (int i=0;i<nums.size();i++){
            vec.push_back (nums[i]+cur);
            cur=vec[i];
        }
    }

    int sumRange(int left, int right) {
        return (left==0)? vec[right]:vec[right]-vec[left-1];
    }
};

/**
time complexity O(n)=>due to prefix algorithm;
space complexity O(n)=>for prefix array;
 */
