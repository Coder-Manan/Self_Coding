#include <iostream>
using namespace std;

struct node{
    int key;
    node* next;
};
node* head = NULL;

int display(node* pt){
    try{
        node *ptr = pt;
        cout << ptr->key << '\n';
        while (ptr->next != NULL) {
            ptr = ptr->next;
            cout << ptr->key << '\n';
        }
        return 0;
    }
    catch (...){
        return 1;
    }
}

int insert_start(node* &ptr, node &x){
    try{
        x.next = ptr;
        ptr = &x;
    }
    catch(...){
        return 1;
    }
    return 0;
}

int insert_end(node* &ptr, node &x){
    try{
        node *pt = ptr;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = &x;
        x.next = NULL;
        ptr = pt;
    }
    catch (...){
        return 1;
    }
    return 0;

}

int insert_after_j(node* &ptr, node &x, int j){
    try{
        node *pt = ptr;
        int i = 1;
        while (ptr->next != NULL && i != j) {
            ptr = ptr->next;
            i++;
        }
        x.next = ptr->next;
        ptr->next = &x;
        ptr = pt;
    }
    catch (...) {
        return 1;
    }
    return 0;
}

//void

int main(){
    node n1 = {3};
    node n2 = {4};
    node n3 = {5};
    insert_start(head, n1);
    insert_end(head, n2);
    insert_after_j(head, n3, 1);
    display(head);
}