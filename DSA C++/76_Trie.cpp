#include <bits/stdc++.h>
using namespace std;

class TrieNode {
public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch) {
        data = ch;
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
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
            root->children[index] = child;
        }

        // Recursion
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word) {
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode* root, string word) {
        // Base case
        if (word.length() == 0) {
            return root->isTerminal;
        }

        int index = word[0] - 'a';
        TrieNode* child;

        // Present
        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            // Absent
            return false;
        }

        // Recursion
        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word) {
        return searchUtil(root, word);
    }

    bool removeUtil(TrieNode* root, string word) {
        // Base case
        if (word.length() == 0) {
            if (root->isTerminal) {
                root->isTerminal = false;
                // Check if this node is a leaf node (no children)
                for (int i = 0; i < 26; i++) {
                    if (root->children[i] != NULL) {
                        return false; // Do not delete this node, it has children
                    }
                }
                return true; // This node can be deleted
            }
            return false; // Word was not found
        }

        int index = word[0] - 'a';
        TrieNode* child = root->children[index];

        if (child == NULL) {
            return false; // Word not found
        }

        bool shouldDeleteChild = removeUtil(child, word.substr(1));

        // If the child can be deleted, do so
        if (shouldDeleteChild) {
            delete child;
            root->children[index] = NULL;

            // Check if this root can also be deleted
            // No other child and not terminal
            if (!root->isTerminal) {
                for (int i = 0; i < 26; i++) {
                    if (root->children[i] != NULL) {
                        return false; // Do not delete this node, it has other children
                    }
                }
                return true; // This node can be deleted
            }
        }

        return false;
    }

    void removeWord(string word) {
        removeUtil(root, word);
    }

        bool startsWithUtil(TrieNode* root, string prefix) {
        // Base case
        if (prefix.length() == 0) {
            return true;
        }

        int index = prefix[0] - 'a';
        TrieNode* child;

        // Present
        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            // Absent
            return false;
        }

        // Recursion
        return startsWithUtil(child, prefix.substr(1));
    }

    bool startsWith(string prefix) {
        return startsWithUtil(root, prefix);
    }
};


int main() {
    Trie* t = new Trie();
    t->insertWord("abcd");
    t->insertWord("abc");

    cout << "Present or not (abcd): " << t->searchWord("abcd") << endl;
    cout << "Present or not (abc): " << t->searchWord("abc") << endl;

    // Remove a word
    t->removeWord("abcd");
    cout << "Present or not (abcd) after removal: " << t->searchWord("abcd") << endl;
    cout << "Present or not (abc) after removal of abcd: " << t->searchWord("abc") << endl;

    return 0;
}
