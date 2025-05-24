#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void per(vector<int> nums,vector<vector<int>> &ans,int count){
    if(count>= nums.size()){
        ans.push_back(nums);
        return;
    }
    //Main Recursion Function
    for(int i=count;i<nums.size();i++){
        swap(nums[i],nums[count]);
        per(nums,ans,count+1);
        swap(nums[i],nums[count]);//Bcaktrack
    }
}
int main(){
    vector<int> nums={123};
    int count=0;
    vector<vector<int> > ans;
    per(nums,ans,0);
    for(int i=0;i<ans.size();i++){
        for(int j=0;i<ans[i].size();j++){
            
        }
    }

}