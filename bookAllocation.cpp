#include<iostream>
#include<vector>
using namespace std;
bool isValid(vector<int> arr,int n,int M,int maxAllowedPges){
    int student = 1;
    int pages = 0;
    for(int i =0;i<n;i++){
        if(arr[i]>maxAllowedPges){
            return false;
        }
        if(pages+arr[i]<=maxAllowedPges){
            pages+=arr[i];
        }else{
            student++;
            pages = arr[i];
        }
    }
    return student > M ? false : true;
}
int bookAllocation(vector<int>arr,int n,int M){
    if(M>n){
        return -1;
    }
    int sum = 0;
    for(int i =0; i<n; i++){
        sum = sum+arr[i];
    }
    int start = 0;
    int end = sum;
    int ans = -1;
    while(start<=end){
        int mid = start+(end-start)/2;

        if(isValid(arr,n,M,mid)){
            ans = mid;
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int>arr = {2,1,3,4};
    int n=4;;
    int M=2;
    int minimumMaximumPages=bookAllocation(arr,n,M);
    cout<<minimumMaximumPages<<endl;
    return 0;
}