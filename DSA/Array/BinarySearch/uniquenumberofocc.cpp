#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool uniqueoccurence(vector<int>& arr){
    vector<int> ans;
    int size=arr.size();
    sort(arr.begin(),arr.end());
    int i=0;
    while(i<size){
        int count=1;
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            
        }
        ans.push_back(count);
        i=i+count;
    }
    sort(ans.begin(),ans.end());
    int s=ans.size();
    for(int i=0;i<s-1;i++){
        if(ans[i]==ans[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    vector<int> arr={1,1,2,2,1,3};
    cout<<uniqueoccurence(arr);
    return 0;
}