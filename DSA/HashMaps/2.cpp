#include<iostream>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isterminal;

    TrieNode(char ch){
        data=ch;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        isterminal=false;
    }
};

class Trie{
    public:
    TrieNode* root;
    Trie(){
        root=new TrieNode('\0');
    }
    void insertUntil(TrieNode* root,string word){
        //base case
        if(word.length()==0){
            root->isterminal=true;
            return;
        }
        int index=word[0]-'a';
        TrieNode* child;
        if(root->children[index] != NULL){
            child=root->children[index];
        }
        else{
            //absent
            child=new TrieNode(word[0]);
            root->children[index]=child;
        }
        //recursion
        insertUntil(child,word.substr(1));
    }

    void insertword(string word){
        insertUntil(root,word);
    }
};

int main(){
    Trie t;
    t.insertword("abcd");
    cout<<"inserted SucessFully"<<endl;

    
    return 0;
}