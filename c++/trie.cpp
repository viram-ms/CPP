class node {
    public:
        map<int,node*>mp;
        bool isLast;
};
class Trie {
public:
    node* root;
    /** Initialize your data structure here. */
    Trie() {
        root = new node();
        root->isLast=false;
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        node *tmp = root;
        for(int i=0;i<word.size();i++)
        {
            if(tmp->mp[word[i]-'a']==nullptr)
            {
                node *temp=new node();
                temp->isLast=false;
                tmp->mp[word[i]-'a']=temp;
            }
            tmp=tmp->mp[word[i]-'a'];
        }
        tmp->isLast=true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        node *tmp=root;
        for(int i=0;i<word.size();i++)
        {
            if(tmp->mp[word[i]-'a']==nullptr)
                return 0;
            else
                tmp=tmp->mp[word[i]-'a'];
        }
        return tmp->isLast;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string word) {
        node *tmp=root;
        for(int i=0;i<word.size();i++)
        {
            if(tmp->mp[word[i]-'a']==nullptr)
                return 0;
            else
                tmp=tmp->mp[word[i]-'a'];
        }
        return true;
    }
};