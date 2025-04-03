#include<iostream>
using namespace std;
class que
{
    public:
    int *arr;
    int front,rear,size;
    public:
        que(int size)
        {
            this->size=size;
            arr=new int[size];
            front=-1;
            rear=-1;
        }
        void enqueue(int val){
            if(front==-1&&rear==-1){
                front-0;
            }
            rear++;
            arr[rear]=val;
        }
        void dequque(){
            if(front==-1)
            {
                cout<<"Queue is empty"<<endl;
                return;
            }
            arr[front];
            front++;
        }
        void getfront()
        {
            int value=arr[front];
            cout<<"Front element is :"<<value<<endl;
        }
        void display()
        {
            for(int i=front;i<=rear;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};
int main()
{
    que *q=new que(4);
    q->enqueue(15);
    q->enqueue(25);
    q->enqueue(35);
    q->enqueue(45);
    q->display();
    q->dequque();
    q->display();
    q->getfront();
    return 0;
}