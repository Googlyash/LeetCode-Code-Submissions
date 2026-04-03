// Apr'3, 2026 09:13 pm
// LLD Practice

class Trie {
public:
    bool isEnd= false;
    Trie* next[26]=  { nullptr };
};

class WordDictionary {
    Trie* node;

    bool dfs(string word, Trie* cur, int i){
        if(i== word.size()){
            return cur->isEnd;
        }

        for(i;i<word.size(); i++){
            if(word[i]=='.'){
                for(int j=0;j<26;j++){
                    if(cur->next[j]!= nullptr && dfs(word, cur->next[j], i+1)){
                        return true;
                    }
                }
                return false;
            }

            int k= word[i]-'a';
            if(cur->next[k]== nullptr){
                return false;
            }
            return dfs(word, cur->next[k], i+1);
        }
        return false;
    }
public:
    WordDictionary() {
        node= new Trie();
    }
    
    void addWord(string word) {
        Trie* cur= node;
        for(auto c: word){
            int i= c-'a';
            if(cur->next[i] == nullptr){
                cur->next[i]= new Trie();
            }
            cur= cur-> next[i];
        }
        cur->isEnd= true;
    }
    
    bool search(string word) {
        return dfs(word, node, 0);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */

// 43 min