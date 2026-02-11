#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<queue>
using namespace std;

class heap{
    public:
    int arr[100];
    int size=0;
    void insert(int val){
        size=size+1;
        int index=size;
        arr[index]=val;

        while(index>1){
            int parent=index/2;
            if(arr[parent]<arr[index]){
                swap(arr[index],arr[parent]);
                index=parent;
            }
            else{
                return;
            }
        }
    }
    void print() {
            for(int i=1;i<=size;i++){
                cout<<arr[i]<<" ";
            }cout<<endl;
    }
    void deletefromheap(){
        if(size==0){
            cout<<"Nothing to delete";
            return;
        }

        // step : put last elembnt into first index
        arr[1]=arr[size];
        size--;
        //take root node to its correct position
        int i=1;
        while(i<size){
            int leftIndex=2*i;
            int rightindex=2*i +1;
            if(leftIndex<size && arr[i]< arr[leftIndex]){
                swap(arr[i],arr[leftIndex]);
                i=leftIndex;

            }
            else if(rightindex <size &&arr[i] <arr[rightindex]){
                swap(arr[i],arr[rightindex]);
                i=rightindex;
            }
            else{
                return;
            }
        }
    }

    
};
void heapify(int arr[],int n,int i){
        int largest=i;
        int left=2*i;
        int right=2*i + 1;

        if(left <=n && arr[largest] <arr[left]){
            largest =left;
        }
        if(right <=n && arr[largest] <arr[right]){
            largest=right;
        }
        if(largest != i){
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }
    }

    void heapsort(int arr[],int n){
        int t=n;
        while(t>1){
            //step !; swap
            swap(arr[t],arr[1]);
            t--;
            heapify(arr,t,1);
        }
    }
int main(){
    heap h;
    // h.insert(10);
    // h.insert(50);
    // h.insert(20);
    // h.insert(80);
    // h.insert(40);
    // h.print();
    // h.deletefromheap();
    // h.print();

    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }     
    cout<<"print the array new"<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    heapsort(arr,n);
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }

    priority_queue<int> pq;
    pq.push(10); pq.push(50); pq.push(20);
    cout << "Top of priority_queue: " << pq.top();
}