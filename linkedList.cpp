/*
Eastern Oregon University
Emma Kennedy
CS 221 Fall 2023
Nov 27, 2023

Linked List
*/
#include <iostream>
using namespace std;

class Node {
  public: 
    Node(int val); 
    void setValue(int x); 
    int getValue(); 
    Node* getNext(); 
    void setNext(Node* n); 
    ~Node(); // Destructor


  private: 
    int value; 
    Node *next; 
  };

  Node::Node(int val) { //constructor
    value = val; 
    next = nullptr;
  }

  void Node::setValue(int x) { //sets value of a node after it's been created
    value = x;
  }

  int Node::getValue() { // retrieves value of node, returns current value
    return value;
  }

  Node* Node::getNext() { //used to retrieve pointer to next node
    return next;
  }

  void Node::setNext(Node* n) { // sets next node, Node*n is pointer to next node
    next = n;
  }

  Node::~Node(){
    cout << "Deleting Node value: " << value << endl;
  }




int main() { 
  cout << "Creating the list..." << endl;
  Node *root;         // This will be the unchanging first Node
  root = new Node(0); // root now points to a Node object
  

  // Step 2 code here
  
  Node *tail = root; // creates the list of 10 nodes, multiples of 2
  for (int i = 2; i <=18; i +=2){
    Node* temp = new Node(i);
    tail -> setNext(temp);
    tail = temp;
    cout << "Adding list Node: "<< i/2 <<","<<" value: "<< tail->getValue() << endl;
  };

  cout << endl;
  // Step 3 code here
  cout << "Printing the list..." << endl;
  Node *current = root;
  while (current != nullptr){ // while current is not null, return the value and move through the linked list
    cout << "Node value: "<< current -> getValue() << endl;
    current = current -> getNext();

  }

  cout << endl;
  cout << "Cleaning up the list..." << endl;
  current = root;
  while (current != nullptr){ // deletes each node and updates the current pointer to next node before deleting
    Node* nextNode = current -> getNext();
    delete current;
    current = nextNode;
  }

  // Step 4 code here

  return 0;
}

