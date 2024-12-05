#include<iostream>
using namespace std;
class CircularQueue{
    private:
    int front;
    int rear;
    int arr[5];
    int itemcount ;
    public:
    CircularQueue(){
        front =-1;
        rear=-1;
        int itemcount=0;
        for (int i=0;i<5;i++)
        {
            arr[i]=0;
        }}
        bool isEmpty()
        {
            if (front==-1 && rear == -1)
            {
                return true;
            }
            else
             {return false;}
 }
        bool isFull()
        {
            if ((rear+1)%5 == 4)
            {
                return true;
            }
            else return false;
        }
        void Enqueue(int value)
        {
            if (isFull())
            {
                cout<< " Queue is Full."<< endl;
            }
            else if (isEmpty()){
                front =0;
                rear=0;
                arr[rear]=value;
                }
                else {
                    rear=(rear+1)%5;
                    arr[rear]=value;
                }
                itemcount++;
                }
        int dequeue()
        {
            int temp;
            if (isEmpty())
            {
               cout<< " Queue is Empty."<< endl; 
            }
            else if(front==rear)
            {
                temp=arr[front];
                arr[front]=0;
                rear=-1;
                front =-1;
                itemcount--;
                return temp;}
            else {
                temp=arr[front];
                arr[front]=0;
                front =(front +1)%5;
                itemcount--;
                return temp;
            }
            return 0;
        }
        int count ()
        {
            return itemcount;
        }
        void display()
        {
            cout << " all values in the queue are :"<<endl;
            for (int i=0;i<5;i++)
            {
                cout<< arr[i]<<" ";
            }}};
int main ()
{
    CircularQueue Q;
    int option, value;
    do 
    {
        cout <<" What operation do you want to perform?"<<endl;
        cout<<"1.Enqueue()"<<endl;
        cout<<"2.Dequeue()"<< endl;
        cout << "3.isEmpty()"<<endl;
        cout<<"4.isFull()"<<endl;
        cout <<"5.count()"<<endl;
        cout<<"6.display()"<<endl;
        cout<<"7.Clear screen"<<endl;
        cout <<"Enter your choice(enter 0 for exist):";
        cin>>option;
        cout <<endl;
        switch(option)
        {
            case 0: break;
            case 1:cout <<"Enqueue operation"<<endl;
            cout <<"Enter the value";
            cin >>value;
            cout <<endl;
            Q.Enqueue(value);
            break;
            case 2:
            cout << " Dequeue operation"<<endl;
            cout <<Q.dequeue()<<endl;
            case 3:
            if(Q.isEmpty())
            {
                cout <<"Queue is Empty"<<endl;

            }
            else{
                cout <<"Queue is not Empty"<<endl;
                break;
            }
            case 4:
            if (Q.isFull())
            {
                cout <<"Queue is FULL"<<endl;

            }
            else{
                cout <<"Queue is not Full"<<endl;
            }break;
            case 5:
            cout <<"Count operation : number of items in the queue is :"<<Q.count()<< endl;
            break;
            case 6:
            cout <<"Queue items display"<<endl;
            Q.display();
            break;}}
            while(option!=0);
            return 0;
            }