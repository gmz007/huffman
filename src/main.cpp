#include <algorithm>
#include <iostream>
#include <fstream>
#include <map>
#include <vector>

#include "huffman.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }

    

    // std::map<const char, int> char_counter;
    //
    // if (std::ifstream input_stream{argv[1]}; input_stream.good()) {
    //     char c;
    //     while (input_stream >> c) {
    //         char_counter[c]++;
    //     }
    // }
    // else {
    //     std::cerr << "File not found" << std::endl;
    // }
    //
    // std::vector<huffman_node> nodes;
    //
    // for (auto [character, frequency]: char_counter) {
    //     nodes.emplace_back(character, frequency);
    // }
    //
    //
    // while (nodes.size() > 1) {
    //     std::ranges::sort(nodes, [](const huffman_node &a, const huffman_node &b) { return a.freq > b.freq; });
    //     huffman_node node1 = nodes.back();
    //     nodes.pop_back();
    //     huffman_node node2 = nodes.back();
    //     nodes.pop_back();
    //
    //     nodes.emplace_back(huffman_node::combine_nodes(&node1, &node2));
    // }

    return 0;
}
