//============================================================================
// Name        : BinarySearchTree.cpp
// Author      : James Roberts
// Version     : 1.0
// Copyright   : Copyright © 2017 SNHU COCE
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <time.h>

#include "CSVparser.hpp"

using namespace std;

//============================================================================
// Global definitions visible to all methods and classes
//============================================================================

// forward declarations
double strToDouble(string str, char ch);

// define a structure to hold bid information
struct Bid {
    string bidId; // unique identifier  ////should fix porblem on line 50 but it does not. 
    string title;
    string fund;
    double amount;
    Bid() {
        amount = 0.0;
    }
};

// Internal structure for tree node
// Finish setting up the structure for tree node//////////////////
// The structure is wrong for sure./////////
struct Node {
    Bid bid;
    bid = bidId; // Do not know why this does not fix problem on line 50
    Node * parent;
    Node * left;
    Node * right;

};
/////Now there are 12 problems instead of 11//////
//the hash is missing the argument// //////////////////
// bidId is undefined however I see it online 25 so....///////////

    // create the key for the given bid
    unsigned int key = hash(atoi(bidId.c_str()))
    Node* node = &(nodes.at(key));
    //nodes is undefined but removing the s  just changes the problem to wrong class type////////////

    // if entry found for the key
    //// if needs a declaration but it appeaps that the declaration is in the () like it should be.///////////
    if (node != nullptr && node->key != UINT_MAX
            && node->bid.bidId.compare(bidId) == 0) {
        return node->bid;
    }

    // if no entry found for the key
    if (node == nullptr || node->key == UINT_MAX) {
        return bid;
    }

    while (node != nullptr) {
        // if the current node matches, return it
        if (node->key != UINT_MAX && node->bid.bidId.compare(bidId) == 0) {
            return node->bid;
        }
        node = node->next;
    }

    return bid;

};///I dont know where the open { is for this /////////////

//============================================================================
// Binary Search Tree class definition
//============================================================================

/**
 * Define a class containing data members and methods to
 * implement a binary search tree
 */
class BinarySearchTree {

private:
    Node* root;

    void addNode(Node* node, Bid bid);
    void inOrder(Node* node);
    ////// added PostOrder
    void PostOrder(Node * node);
    ////// Added PreOrder()
    void preOrder(Node*node);
    Node* removeNode(Node* node, string bidId);

public:
    BinarySearchTree();
    virtual ~BinarySearchTree();
    void InOrder();
    ///added PostOrder
    void PostOrder();
    ///added PreOrder()
    void PreOrder();
    void Insert(Bid bid);
    void Remove(string bidId);
    Bid Search(string bidId);
};

/**
 * Default constructor
 */
BinarySearchTree::BinarySearchTree() {
    // FixMe (1): initialize housekeeping variables
    //root is equal to nullptr
    root = nullptr;
}

/**
 * Destructor
 */
BinarySearchTree::~BinarySearchTree() {
    // recurse from root deleting every node
}

/**
 * Traverse the tree in order
 */
// just a shot in the dark from hub.packtpub.com and the textbook/////////
// added Node * node after InOrder after ()
void BinarySearchTree::InOrder(Node * node) {
    // FixMe (2): In order root
    // call inOrder fuction and pass root 
    /// node does not look like it works. ///////////////////
    if (node == NULL)
        return;
InOrder(node->left);
InOrder(node ->right);
/// Can not see if this works becasue there are still problems with the structure///////////////    
    }
}

/**
 * Traverse the tree in post-order
 */
//PostOrder is not found in the text book.
// tutorial from  geeksforgeeks.org.///// 
/// added PostOrder to public and private class still broke////////////////////////
void BinarySearchTree::PostOrder(Node * node) {
    // FixMe (3): Post order root
    // postOrder root
    ///node does not look like it works. ////////////
    if (node == NULL)
    return;
    PostOrder(node->left);
    PostOrder(node ->right);
}

/**
 * Traverse the tree in pre-order
 */
//Pre order is not found in the text book
// tutorial from  geeksforgeeks.org.///////////////
/// added PreOrder to public and private class still broke////////////////////////
void BinarySearchTree::PreOrder(Node*node) {
    // FixMe (4): Pre order root
    // preOrder root
    ////Node does not look like it works. ///////////    
    if (node == NULL)
    return;
    PreOrder(node->left);
    PreOrder(node ->right);   

}

/**
 * Insert a bid
 */
///Found information in the book/////////////////////////
//// dont know why the insert uses the bid instead of node////////////
void BinarySearchTree::Insert(Bid bid) {
    // FIXME (5) Implement inserting a bid into the tree
    // if root equarl to null ptr
    if(Bid->bid == NULL)
    Bid-> root = bid ; ////////// bid seem to be wrong and at this point i do not know which one it should be   
    node -> left = NULL
    node -> right = NULL
      // root is equal to new node bid
    // else
      // add Node root and bid
    else
        parent == Bid->bid  //// still have a problem in the structure
        while (parent != NULL)
            if(bid ->key < parent ->key)
                if (parent ->left == NULL) //////do not know why parent looks like it works here. 
                    parent -> left == bid
                    parent = nullptr
                else
                    parent = parent ->left
            else    
                if(parent ->right == NULL)
                    parent ->right == bid
                    parent == NULL
                else
                    parent == parent ->right
        bid ->left == NULL
        bid ->right == NULL
        
}

/**
 * Remove a bid
 */
///information from textbook looks like it will not work with the code below
/// using information from cppsecrets.com///////////////////////////////
void BinarySearchTree::Remove(string bidId) {
    // FIXME (6) Implement removing a bid from the tree
    // remove node root bidID
    Node * node =SearchNode(root,bidId);
    if(node== NULL){
        return;
    }
    else{
        node ->parent->left = node->left;
        node -> parent ->right = node->right;
        node -> left -> parent = node ->parent;
        node -> right -> parent =node ->parent;
        delete node;
//something is clearly wrong with this section need to check the structure again//////////
    }
}

/**
 * Search for a bid
 */
// information from textbook ////////////////////////
Bid BinarySearchTree::Search(string bidId) {
    // FIXME (7) Implement searching the tree for a bid
    // set current node equal to root
    if (parent->key == bidId ){
        return parent;
    }
    // keep looping downwards until bottom reached or matching bidId found
        // if match found, return current bid
    else if (bidId < parent ->key){
        //check left child 
    }        // if bid is smaller than current node then traverse left
        // else larger so traverse right
    else if (bidId > parent->key){
        //check right side
    }
    Bid bid;
    return bid;
}

/**
 * Add a bid to some node (recursive)
 *
 * @param node Current node in tree
 * @param bid Bid to be added
 */
void BinarySearchTree::addNode(Node* node, Bid bid) {
        if(Bid->bid == NULL)
    Bid-> root = bid ;   
    node -> left = NULL
    node -> right = NULL
  
    else
        parent == Bid->bid
        while (parent != NULL)
            if(bid ->key < parent ->key)
                if (parent ->left == NULL) 
                    parent -> left == bid
                    parent = nullptr
                else
                    parent = parent ->left
            else    
                if(parent ->right == NULL)
                    parent ->right == bid
                    parent == NULL
                else
                    parent == parent ->right
        bid ->left == NULL
        bid ->right == NULL
 /// I just copied from the insert on line 183 /////////
void BinarySearchTree::inOrder(Node* node) {
      // FixMe (9): Pre order root
      //if node is not equal to null ptr
      //InOrder not left
      //output bidID, title, amount, fund
      //InOder right
    if (node == NULL)
        return;
InOrder(node->left);
InOrder(node ->right);
cout <<bidId <<","<< title <<","<< amount<<","<< fund);
      //copied from line 137 and added the output. 
}
void BinarySearchTree::postOrder(Node* node) {
      // FixMe (10): Pre order root
      //if node is not equal to null ptr
      //postOrder left
      //postOrder right
      //output bidID, title, amount, fund
    if (node == NULL)
    return;
    PostOrder(node->left);
    PostOrder(node ->right);
    cout <<bidId <<","<< title <<","<< amount<<","<< fund);
    //Copied  from the post order in line 151 and added the output. 

}

void BinarySearchTree::preOrder(Node* node) {
      // FixMe (11): Pre order root
      //if node is not equal to null ptr
      //output bidID, title, amount, fund
      //postOrder left
      //postOrder right     
    if (node == NULL)
    return;
    PreOrder(node->left);
    PreOrder(node ->right); 
    cout <<bidId <<","<< title <<","<< amount<<","<< fund);
    // copied from line 167 above and added the output
}

//============================================================================
// Static methods used for testing
//============================================================================

/**
 * Display the bid information to the console (std::out)
 *
 * @param bid struct containing the bid info
 */
void displayBid(Bid bid) {
    cout << bid.bidId << ": " << bid.title << " | " << bid.amount << " | "
            << bid.fund << endl;
    return;
}

/**
 * Load a CSV file containing bids into a container
 *
 * @param csvPath the path to the CSV file to load
 * @return a container holding all the bids read
 */
void loadBids(string csvPath, BinarySearchTree* bst) {
    cout << "Loading CSV file " << csvPath << endl;

    // initialize the CSV Parser using the given path
    csv::Parser file = csv::Parser(csvPath);

    // read and display header row - optional
    vector<string> header = file.getHeader();
    for (auto const& c : header) {
        cout << c << " | ";
    }
    cout << "" << endl;

    try {
        // loop to read rows of a CSV file
        for (unsigned int i = 0; i < file.rowCount(); i++) {

            // Create a data structure and add to the collection of bids
            Bid bid;
            bid.bidId = file[i][1];
            bid.title = file[i][0];
            bid.fund = file[i][8];
            bid.amount = strToDouble(file[i][4], '$');

            //cout << "Item: " << bid.title << ", Fund: " << bid.fund << ", Amount: " << bid.amount << endl;

            // push this bid to the end
            bst->Insert(bid);
        }
    } catch (csv::Error &e) {
        std::cerr << e.what() << std::endl;
    }
}

/**
 * Simple C function to convert a string to a double
 * after stripping out unwanted char
 *
 * credit: http://stackoverflow.com/a/24875936
 *
 * @param ch The character to strip out
 */
double strToDouble(string str, char ch) {
    str.erase(remove(str.begin(), str.end(), ch), str.end());
    return atof(str.c_str());
}

/**
 * The one and only main() method
 */
int main(int argc, char* argv[]) {

    // process command line arguments
    string csvPath, bidKey;
    switch (argc) {
    case 2:
        csvPath = argv[1];
        bidKey = "98109";
        break;
    case 3:
        csvPath = argv[1];
        bidKey = argv[2];
        break;
    default:
        csvPath = "eBid_Monthly_Sales_Dec_2016.csv";
        bidKey = "98109";
    }

    // Define a timer variable
    clock_t ticks;

    // Define a binary search tree to hold all bids
    BinarySearchTree* bst;

    Bid bid;

    int choice = 0;
    while (choice != 9) {
        cout << "Menu:" << endl;
        cout << "  1. Load Bids" << endl;
        cout << "  2. Display All Bids" << endl;
        cout << "  3. Find Bid" << endl;
        cout << "  4. Remove Bid" << endl;
        cout << "  9. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            bst = new BinarySearchTree();

            // Initialize a timer variable before loading bids
            ticks = clock();

            // Complete the method call to load the bids
            loadBids(csvPath, bst);

            //cout << bst->Size() << " bids read" << endl;

            // Calculate elapsed time and display result
            ticks = clock() - ticks; // current clock ticks minus starting clock ticks
            cout << "time: " << ticks << " clock ticks" << endl;
            cout << "time: " << ticks * 1.0 / CLOCKS_PER_SEC << " seconds" << endl;
            break;

        case 2:
            bst->InOrder();
            break;

        case 3:
            ticks = clock();

            bid = bst->Search(bidKey);

            ticks = clock() - ticks; // current clock ticks minus starting clock ticks

            if (!bid.bidId.empty()) {
                displayBid(bid);
            } else {
            	cout << "Bid Id " << bidKey << " not found." << endl;
            }

            cout << "time: " << ticks << " clock ticks" << endl;
            cout << "time: " << ticks * 1.0 / CLOCKS_PER_SEC << " seconds" << endl;

            break;

        case 4:
            bst->Remove(bidKey);
            break;
        }
    }

    cout << "Good bye." << endl;

	return 0;
}
