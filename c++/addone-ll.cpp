#include <bits/stdc++.h> 
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node* newnode(int data){
        Node* new_node = new Node;
        new_node -> data = data;
        new_node ->next = nullptr;
        return new_node;
    }

    Node* reverse(Node* head){
        Node* curr = head;
        Node* prev = nullptr;
        Node* succ = nullptr;
        while(curr != nullptr){
            succ = curr->next;
            curr->next = prev;
            prev = curr;
            curr = succ;
        }
        return prev;
    }

    Node* addOneUtil(Node* head){
        Node* res = head;
        Node* temp, *prev = nullptr;
        int carry = 1,sum;

        while(head!=nullptr){
            sum = carry + head->data;
            carry = sum>=10 ? 1: 0;
            sum = sum % 10;
            head->data = sum;
            temp = head;
            head = head->next;
        } 

        if(carry>0){
            temp->next = newnode(carry);
        }
        return res;
    }

    Node* addOne(Node* head){
        head = reverse(head);

        head = addOneUtil(head);

        return reverse(head);
    }

    void printlist(Node* head){
        while(head!= nullptr){
            cout<<head->data;
            head = head->next;
        }
        cout<<endl;
    }
}