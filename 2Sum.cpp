#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        vector<int>ans;
        int n = nums.size();
        for(int i =0; i<n; i++ ){
            int first = nums[i];
            int sec = target-first;
            if(m.find(sec)!=m.end()){
                ans.push_back(i);
                ans.push_back(m[sec]);
                break;
            }else{
                m[first]=i;
            }
        }
        return ans;
    }
    int main(){
        vector<int> nums = {5,2,11,7,15};
        int target = 9;
        vector<int> result = twoSum(nums, target);
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i] << " ";
        }
        cout << endl;
    }