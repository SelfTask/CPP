/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BalancedTree.h
 * Author: DangerousPirate
 *
 * Created on June 3, 2018, 4:25 PM
 */

#ifndef BALANCEDTREE_H
#define BALANCEDTREE_H
#include <iostream>
#include <queue>
using namespace std;
class BalancedBT{
private:
    struct Node{
        string data;
        Node *left;
        Node *right;
    };
    Node *root;
    Node *newNode;
    Node *temp;
    
    int cntPost;
    int cntIn;
    int cntPre;
    
    int getLength(Node *);
    Node* rightToRight(Node *);
    Node* leftToLeft(Node *);
    Node* leftToRight(Node *);
    Node* rightToLeft(Node *);
    Node* balance(Node *);
    Node* insert(Node *, string);
    void print_PreOrder(Node *);
    void print_InOrder(Node *);
    void print_PostOrder(Node *);
    void print_Level(Node *);
    Node* deleteByVal(Node*,string);



public:
    BalancedBT();
    void show_PreOrder();
    void show_InOrder();
    void show_PostOrder();
    void show_LevelOrder();
    void show_allOrder();
    void run_delete(string);
    void runInsert(string);
    //Returns values from trees in their respective order
    string getWordIn(int i){return wordIn[i];}
    string getWordPre(int i){return wordPre[i];}
    string getWordPost(int i){return wordPost[i];}
    
    string wordIn[5];
    string wordPre[5];
    string wordPost[5];
    
    queue<string> qIn;
    queue<string> qPre;
    queue<string> qPost;
};


#endif /* BALANCEDTREE_H */

