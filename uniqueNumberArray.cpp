#include<iostream>
#include<vector>

using namespace std;

int uniqueNum(vector<int>&nums){
    int ans = 0;
    for(int val: nums ){
        ans = ans^val;
    }
    return ans;
}
int main(){
    vector<int> nums = {1,2,1,4,2};
    int ans = uniqueNum(nums);
    cout<<ans<<endl;
}
