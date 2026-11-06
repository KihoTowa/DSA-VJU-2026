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
void tobinary(Stack &S, int n)
{
    while(n!=0)
    {
        int r=n%2;
        Push(r,S);
        n=n/2;
    }
}
void display(Stack &S,int n)
{
    Node *p = S.top;
    cout<<"So "<<n<<" trong he nhi phan la: ";
    while(p!=NULL)
    {
        cout<<p->data;
        p=p->next;
    }
}
int main()
{
    Stack S;
    int n;
    cin>>n;
    tobinary(S,n);
    display(S,n);
}