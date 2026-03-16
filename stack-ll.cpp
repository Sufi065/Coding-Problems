#include<iostream>
using namespace std;


    template<class T>
    class Node{
        T data;
        Node* next;
    
    public:
           Node(T val){
            data = val;
            next = NULL;
           }
    };
    template<class T>
    class Stack{
        Node* head;
        Node* tail;

        public:
               void push(T val){
                Node* newNode = new Node(val);
                if(head==NULL){
                    head = newNode;
                }else{
                    newNode -> next =head;
                    head = newNode; 
                }
               }
    
}