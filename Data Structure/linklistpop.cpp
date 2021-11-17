#include <iostream>
using namespace std;
struct Node{
   int data;
   struct Node *next;
};
struct Node* head = NULL;

void in(int n_data) {
   struct Node* n_node=(struct Node*)malloc(sizeof(struct Node));
   n_node->data=n_data;
   n_node->next=head;
   head=n_node;
}
void pop()
{
    struct Node* temp;
    if (head == NULL)
    {
        cout << "\Error"<< endl;
        exit(1);
    }
    else
    {
        temp=head;
        head = head->next;
        temp->next= NULL;
        free(temp);
    }
}
void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
   cout<<endl;
}
int main() {
   in(3);
   in(1);
   in(7);
   in(2);
   in(9);
   cout<<"List  : ";
   display();
   cout<<"Poped : ";
   pop();
   display();
   cout<<"Poped : ";
   pop();
   display();
   cout<<"Poped : ";
   pop();
   display();

 return 0;
}
