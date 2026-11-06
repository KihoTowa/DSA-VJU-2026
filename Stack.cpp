#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
struct Stack
{
    Node *top=NULL;
};
void Push(int i, Stack &S)
{
    Node *p = new Node;
    p->data = i;
    p-> next = NULL;
    if(S.top == NULL)
    {
        S.top=p;
    }
    else
    {
        p->next = S.top;
        S.top= p;
    }
}
void display(Stack &S)
{
    Node *p = S.top;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main()
{
    Stack S;
    Push(2,S);
    Push(4,S);
    Push(9,S);
    display(S);
}