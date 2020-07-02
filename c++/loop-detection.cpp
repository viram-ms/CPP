#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void push(Node** head_ref, int data){
    Node* new_node = new Node();
    new_node -> data = data;
    new_node -> next = (*head_ref);
    (*head_ref) = new_node;
}

int detectloop(Node* list){
    Node *slow_p = list, fast_p= list;
    while (slow_p && fast_p && fast_p->next)
    {
        /* code */
        slow_p = slow_p -> next;
        fast_p = fast_p ->next->next;
        if(slow_p == fast_p){
            cout<<"Loop detected"<<endl;
            return 1;
        }
    }
    return 0;
}

int findlength(Node* list){
    if(list == NULL){
        return 0;
    }
    return 1 + findlength(list->next);
}

int main(){
    Node* head = NULL;
    push(&head, 20);
    push(&head, 10);
    push(&head, 30);
    push(&head, 40);

    head->next->next->next = head;
    detectloop(head);
    return 0;

}

int mapmap(){
    map<int,int> m;
    m.insert(pair<int,int>(1,40));
    m.insert({2,30});
    map<int,int> :: iterator itr;
    for(itr = m.begin();itr != m.end();itr++){
        cout<< "\t " <<itr->first << " " << itr->second;
    }

    for(auto i = m.begin(); i != m.end(); i++){
        cout<<*i.first<<*i.second;
    }
}

