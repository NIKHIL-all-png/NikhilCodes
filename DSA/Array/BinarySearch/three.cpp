#include<iostream>
//#include<vector>
#include<algorithm>
using namespace std;
int main (){
    int p=-1;
    //vector<int> arr={1,1,2,2,3,3};
    int arr[6]={1,1,2,2,3,3};
    //int n = arr.size();
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+6);
    //sort(arr.begin(), arr.end());
    int count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            count++;
            if (count >= 3) { 
                cout << arr[i] << endl;
                p=1;
                break;
            }
        } else {
            count = 1; 
        }
    }
    if(p==-1){
        cout<<-1<<endl;
    }
    return 0;
}