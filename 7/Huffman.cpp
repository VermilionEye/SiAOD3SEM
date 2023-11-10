#include "Huffman.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;

struct CompareNodes {
    bool operator()(HuffmanNode* a, HuffmanNode* b) {
        return a->frequency > b->frequency;
    }
};

HuffmanNode* buildHuffmanTree(map<char, unsigned>& frequencies) {
    priority_queue<HuffmanNode*, vector<HuffmanNode*>, CompareNodes> pq;
    for (auto& freq : frequencies) {
        pq.push(new HuffmanNode(freq.first, freq.second));
    }

    while (pq.size() > 1) {
        HuffmanNode* left = pq.top();
        pq.pop();
        HuffmanNode* right = pq.top();
        pq.pop();

        HuffmanNode* newNode = new HuffmanNode('#', left->frequency + right->frequency);
        newNode->left = left;
        newNode->right = right;

        pq.push(newNode);
    }

    return pq.top();
}


void encodeHuffmanTree(HuffmanNode* root, string code, map<char, string>& huffmanCodes) {
    if (root == nullptr) {
        return;
    }

    if (!root->left && !root->right) {
        huffmanCodes[root->data] = code;
    }

    encodeHuffmanTree(root->left, code + "0", huffmanCodes);
    encodeHuffmanTree(root->right, code + "1", huffmanCodes);
}

string line;

void encodeHuffman() {
    map<char, unsigned> frequencies;
	cout << "Enter a line: ";
	getline(cin, line);

	for (char ch : line)
        frequencies[ch] ++;

    HuffmanNode* root = buildHuffmanTree(frequencies);

    map<char, string> huffmanCodes;
    encodeHuffmanTree(root, "", huffmanCodes);

    string compressedData = "";
    for (char c : line) {
        compressedData += huffmanCodes[c] + " ";
    }

    cout << "Result: " <<compressedData;
}
