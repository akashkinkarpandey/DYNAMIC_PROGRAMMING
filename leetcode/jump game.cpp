question: You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.

Return true if you can reach the last index, or false otherwise.

 

Example 1:

Input: nums = [2,3,1,1,4]
Output: true
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.


code:
class Solution {
public:
    bool canJump(vector<int>& nums) {
    int goal=nums.size()-1;
        for(int i=goal;i>=0;--i){
            if(i+nums[i]>=goal){
                goal=i;
            }
        }
        if(goal==0)return true;
        else
            return false;
    }
};
approch:
1) Take goal as the last index .
2) we have to iterate from last to first and try to shift the goal untill goal become 0.
3) if(goal==0)return true else return false.
tc-o(n)
sc-o(1)
