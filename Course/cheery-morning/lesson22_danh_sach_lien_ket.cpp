#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *makeNode(int x)
{
    node *newNode = new node;
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

void duyet(node *head) {
    while (head != NULL) {
        cout << head->data;
        head = head->next;
    }
}

int kichThuoc(node *head) {
    int count = 0;
    while (head != NULL) {
        ++count;
        head = head->next;
    }
    return count;
}


int main()
{

    return 0;
}