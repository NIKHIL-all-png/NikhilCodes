#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void merge(vector<int> &nums1,int m,vector<int> &nums2,int n){
    vector<int> ans;
    int i=0;
    int j=0;
    while(i<m&&j<n){
        if(nums1[i]<nums2[j]){
            ans.push_back(nums1[i]);
            i++;

        }
        else{
            ans.push_back(nums2[j]);
            j++;
        }
    }
    while(i<m){
        ans.push_back(nums1[i]);
        i++;
    }
    while(j<n){
        ans.push_back(nums2[j]);
        j++;
    }
    
    for(int i=0;i<m+n;i++){
        cout<<ans[i];
    }
}
int main(){
    vector<int> arr={1,2,3};
    vector<int> brr={2,5,6};
    merge(arr,3,brr,3);
    return 0;
}