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

    void insertuntil(TrieNode* root,string word){
        if(word.length()==0){
            root->isterminal=true;
            return;
        }
        int index=word[0]-'a';
        TrieNode* child;
        if(root->children[index] !=NULL){
            child=root->children[index];
        }
        else{
            child=new TrieNode(word[0]);
            root->children[index]=child;
        }

        //Recursion

        insertuntil(child,word.substr(1));
    }

    bool searchuntil(TrieNode* root,string word){
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
        return searchuntil(child,word.substr(1));
    }
    bool searchword(string word){
        return searchuntil(root,word);
    }

    void insertword(string word){
        insertuntil(root,word);
    }
};

int main(){
    Trie t;
    t.insertword("abcd");
    cout<<"insert sucessfully"<<endl;

    cout<<"present or not"<<endl<<t.searchword("abcd")<<endl;
}
