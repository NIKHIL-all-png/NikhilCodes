#include<iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    int col;
    cin>>col;
    int** arr=new int*[row];
    //creating a 2d array
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }
    //taking input
    for(int j=0;j<row;j++){
        for(int k=0;k<col;k++){
            cin>>arr[j][k];
        }
        cout<<endl;
    }
    //taking output
    for(int j=0;j<row;j++){
        for(int k=0;k<col;k++){
            cout<<arr[j][k];
        }
        cout<<endl;
    }
    //releasing memory
    for(int i=0;i<row;i++){
        delete [] arr[i];
    }
    delete []arr;
}