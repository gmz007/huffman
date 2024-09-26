//
// Created by tony on 19/9/2024.
//

#ifndef HUFFMAN_TREE_H
#define HUFFMAN_TREE_H

#include <map>
#include <string>


struct huffman_node {
    char data;
    int freq;
    huffman_node *left;
    huffman_node *right;

    huffman_node(const char data, const int freq): data(data), freq(freq) {
        left = right = nullptr;
    }
};

class huffman {
public:
    huffman();
    void encode(std::string filename);
    void decode(std::string filename);

private:
    huffman_node tree;
    std::map<char, std::string> encode_map;

    void count_frequency();
    void build_tree();
    void build_encode_map();
};



#endif //HUFFMAN_TREE_H
