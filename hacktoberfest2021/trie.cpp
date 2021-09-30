#include<bits/stdc++.h>
using namespace std;
class TrieNode{
    public:
    char c;
    int endHere;
    TrieNode *trie[26];
    TrieNode(char x, int endH)
    {
        c = x;
        endHere=endH;
        for(int i=0;i<26;i++)
        {
            trie[i]=NULL;
        }
    }
};
    TrieNode* makeTrieNode(char x, bool isEnd)
    {
        TrieNode *t1 = new TrieNode(x,isEnd);
        return t1;
    }
    void addWord(string word, TrieNode *t)
    {
        TrieNode *temp = t;
        for(int i=0;i<word.size()-1;i++)
        {
            int idx = word[i]-'a';
            if(!temp->trie[idx])
            {
                temp->trie[idx]= makeTrieNode(word[i],false);
            }
             temp = temp->trie[idx];
        }
       temp->trie[word[word.size()-1]-'a']= makeTrieNode(word[word.size()-1],true);
    }
    bool searchWord(string word,TrieNode *t,int curr)
    {
        TrieNode* temp = t;
        for(int i=0;i<word.size();i++)
        {
            int idx = word[i]-'a';
            if(!temp->trie[idx])
            {
                return false;
            }
            temp = temp->trie[idx]; 
        }
        return temp->endHere;
    }
    void deleteWord(string word, TrieNode *t)
    {
        TrieNode *temp = t;
        for(int i=0;i<word.size();i++)
        {
            int idx = word[i]-'a';
            if(!temp->trie[idx])
            {
                return;
            }
            temp=temp->trie[idx];
        }
        if(temp->endHere==true)
        {
            temp->endHere=false;
        }
    }
int main()
{
    TrieNode *t = makeTrieNode('/',false);
    addWord("bab",t);
    addWord("absg",t);
    cout<< searchWord("bab",t,0)<<endl;
    cout<< searchWord("kfl",t,0)<<endl;
    cout<< searchWord("absg",t,0)<<endl;
    deleteWord("bab",t);
    cout<<searchWord("bab",t,0)<<endl;
}