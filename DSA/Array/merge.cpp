#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void merge(vector<int> &nums1,int m,vector<int> &nums2,int n){
    vector<int> ans;
    for(int i=0;i<m;i++){
        ans.push_back(nums1[i]);
    }
    for(int i=0;i<n;i++){
        ans.push_back(nums2[i]);
    }
    sort(ans.begin(),ans.end());

    for(int i=0;i<m+n;i++){
        cout<<ans[i];
    }

}
int main(){
    vector<int> arr={1,2,3,0,0,0};
    vector<int> brr={2,5,6};
    merge(arr,3,brr,3);
    return 0;
}