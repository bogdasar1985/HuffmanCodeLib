#ifndef HUFFMAN
#define HUFFMAN
#include "priority_queue.hpp"
#include "tree_node.hpp"
class huffman
{
public:
    huffman();
    ~huffman();
    /*
    Методы всякие
    */
private:
    priority_queue<tree_node> _huff_tree;
};
#include "huffman.cpp"
#endif