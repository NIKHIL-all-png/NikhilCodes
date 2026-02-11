#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    string A;
    string B;
    string C;
    for(int i=0;i<int(s.length());i++){
        if(s[i]=='a'){
            A.push_back(s[i++]);
            while(i< int(s.length()) &&s[i] !='b'){
                A.push_back(s[i]);
                i++;
            }
            B.push_back(s[i++]);
            while(i < int(s.length())&& s[i]!='a'){
                B.push_back(s[i]);
                i++;
            }
        }
        else{
            A.push_back(s[i++]);
            while(i < int(s.length())&& s[i] !='a'){
                A.push_back(s[i]);
                i++;
            }
            B.push_back(s[i++]);
            while(i < int(s.length())&& s[i]!='b'){
                B.push_back(s[i]);
                i++;
            }
        }

    }
    int c1=0;
    int c2=0;
    
        
        if(B[c1]=='a'){
            C.push_back(B[c1++]);
            B.pop_back();
            while(B[c1] !='a'){
                C.push_back(B[c1++]);
                B.pop_back();
            }
        }
        if(B[c2]=='b'){
            C.push_back(B[c1++]);
            B.pop_back();
            while(B[c1] !='b'){
                C.push_back(B[c1++]);
                B.pop_back();
            }
        }
        
    
    cout<<"A "<<A<<endl;
    cout<<"B "<<B<<endl;
    cout<<"C "<<C;
}