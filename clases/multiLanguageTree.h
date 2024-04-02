#ifndef MULILENGUAJTREE_H // Prevenir inclusión múltiple
#define MULILENGUAJTREE_H

#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <iostream>

using namespace std;


struct TreeNode {
    string spanish;
    string italian;
    string french;
    string german;
    string english;
    TreeNode* left;
    TreeNode* right;

    TreeNode(string spa, string ita, string fre, string ger, string eng)
        : spanish(spa), italian(ita), french(fre), german(ger), english(eng), left(nullptr), right(nullptr) {}
};


class MultiLanguageTree {
private:
    TreeNode* root;

    void insertWord(TreeNode*& node, const string& spanish, const string& italian, const string& french, const string& german, const string& english) {
        if (node == nullptr) {
            node = new TreeNode(spanish, italian, french, german, english);
        } else if (spanish < node->spanish) {
            insertWord(node->left, spanish, italian, french, german, english);
        } else {
            insertWord(node->right, spanish, italian, french, german, english);
        }
    }

public:
    MultiLanguageTree() : root(nullptr) {}

    void insert(const string& spanish, const string& italian, const string& french, const string& german, const string& english) {
        insertWord(root, spanish, italian, french, german, english);
    }

    TreeNode* getRoot() const {
        return root;
    }

    void display(TreeNode* node) const {
        if (node != nullptr) {
            display(node->left);
            cout << "Spanish: " << node->spanish << ", Italian: " << node->italian << ", French: " << node->french << ", German: " << node->german << ", English: " << node->english << endl;
            display(node->right);
        }
    }

    int leerArchivo();
};

 
       


#endif 