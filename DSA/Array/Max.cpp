#include <iostream>
using namespace std;
int GetMax(int A[],int n){
    int max=INT8_MIN;
    for(int i=0;i<n;i++){
        if(A[i]>n){
            max=A[i];
        }

    }
    return max;
}



int main() {
   int size;
   cin>>size;
   int A[100];
   //taking input in array    
   for(int i=0;i<size;i++){
    cin>>A[i];
   }
   int p=GetMax(A,size);
   cout<<p;

    return 0; // Indicate successful program execution
}
