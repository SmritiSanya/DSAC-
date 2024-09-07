#include<bits/stdc++.h>
using namespace std;


//algo #1

/*
string longestCommonPrefix(vector<string> &arr, int n){
    string ans="";
    for(int i=0;i<arr[0].length();i++){
        char ch=arr[0][i];

        bool match=true;
        for(int j=1;j<n;j++){
            if(arr[j].size()<i|| ch!=arr[j][i]){
                match=false;
                break;
            }
        }
        if(match==false)
            break;
        else    ans.push_back(ch);
    }
    return ans;
}
*/


class TrieNode {
public:
    char data;
    TrieNode* children[26];
    int childCount;
    bool isTerminal;

    TrieNode(char ch) {
        data = ch;
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        childCount = 0;
        isTerminal = false;
    }
};

class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode* root, string word) {
        // Base case
        if (word.length() == 0) {
            root->isTerminal = true;
            return;
        }

        int index = word[0] - 'a';
        TrieNode* child;

        // Present
        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            // Absent
            child = new TrieNode(word[0]);
            root->childCount++;
            root->children[index] = child;
        }

        // Recursion
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word) {
        insertUtil(root, word);
    }

    string longestCommonPrefix() {
        TrieNode* current = root;
        string prefix = "";

        while (current->childCount == 1 && !current->isTerminal) {
            // Find the only child
            TrieNode* nextChild = NULL;
            for (int i = 0; i < 26; i++) {
                if (current->children[i] != NULL) {
                    nextChild = current->children[i];
                    prefix += nextChild->data;
                    break;
                }
            }
            current = nextChild;
        }

        return prefix;
    }
};

string longprefix(vector<string>& arr, int n) {
    Trie* t = new Trie();

    // Insert all words into the Trie
    for (int i = 0; i < n; i++) {
        t->insertWord(arr[i]);
    }

    // Return the longest common prefix found in the Trie
    return t->longestCommonPrefix();
}