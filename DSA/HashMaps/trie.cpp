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
        if(word.length() ==0){
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
        //Recursion
        insertUntil(child,word.substr(1));
    }
    bool searchUntil(TrieNode* root,string word){
        //base case

        if(word.length()==0){
            return root->isterminal;
        }
        int index=word[0]-'a';
        TrieNode* child;

        if(root->children[index] != NULL){
            child=root->children[index];
        }
        else{
            //absent
            return false;
        }
        return searchUntil(child,word.substr(1));

    }
    bool searchword(string word){
        return searchUntil(root,word);
    }
    void insertword(string word){
        insertUntil(root,word);
    }  
};
int main(){
    Trie *t=new Trie();
    t->insertword("abcd");
    cout<<"Inserted Sucessfully"<<endl;

    cout<<"present or not"<<endl<<t->searchword("abcd")<<endl;

    return 0;
}