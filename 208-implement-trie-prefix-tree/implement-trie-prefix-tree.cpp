// Apr'3, 2026 04:20 pm
// LLD Practice

class TrieNode {
public:
    bool isEnd= false;
    unordered_map<char, TrieNode*>next;
};

class Trie {
    TrieNode* node;
public:
    Trie() {
        node= new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* cur =node;
        for(char c: word){
            if(!cur->next.count(c)){
                cur->next[c]= new TrieNode();
            }
            cur= cur->next[c];
        }
        cur->isEnd= true;
    }
    
    bool search(string word) {
        TrieNode* cur= node;

        for(char c:word){
            if(!cur->next.count(c)){
                return false;
            }
            cur= cur->next[c];
        }
        return cur->isEnd;
    }
    
    bool startsWith(string prefix) {
        TrieNode* cur= node;

        for(char c:prefix){
            if(!cur->next.count(c)){
                return false;
            }
            cur= cur->next[c];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */

// 43 min
// Basic logic coorect, implementation corrected with gpt