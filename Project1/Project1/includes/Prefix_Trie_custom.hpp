//
//  Prefix_Trie.hpp
//  Project1
//
//  Created by jr2339 on 4/19/17.
//  Copyright © 2017 jr2339. All rights reserved.
//

#ifndef Prefix_Trie_custom_hpp
#define Prefix_Trie_custom_hpp

#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include "Pointer.hpp"

/***************************************************************************//**
*                                      Node
*  @brief A Node made specifically for DNA sequencing trees/tries.
*
*  This node class is made primarily for DNA sequencing trees/tries due to the
*    ACTG pointers, but could easily be adapted for other uses.
*******************************************************************************/

class Node{
public:
    Node();
    ~Node();
    pointer deepCopy();
    pointer getChild(char);
    pointer setChild(char, int*);
    bool isTerminal();
    void setTerminal(bool);
private:
    pointer A;
    pointer C;
    pointer G;
    pointer T;
    bool terminal;
};


/***************************************************************************//**
*                                      Trie
*  @brief A prefix Trie.
*
*  Breaks a sequence into characters and inserts them in one by one into a
*    quaternary trie.
*******************************************************************************/
class Trie {
public:
    Trie();
    Trie(char **, int, int);
    Trie(Trie*);
    ~Trie();
  //void setMemLayer(void *);
    void addWord(char *, int);
    bool searchWord(char *, int);
    std::vector<int> traverse(char *, int, int);
    int getSize();
private:
  // MemoryAllocator<Node> *memLayer;
    pointer root;
    int size;
};

#endif /* Prefix_Trie_custom_hpp */
