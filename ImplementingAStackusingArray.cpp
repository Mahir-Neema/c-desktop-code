#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
#define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL));


class Stack{
    int size;
    int* arr;
    int top=-1;
    public:
        Stack(){
            top=-1;
            size=10000;
            arr = new int[size];
        } 
        
        void Push(int x){
            top++;
            arr[top]=x;
        }

        int Pop(){
            int x = top;
            top--;
            return arr[x];
        }

        int Top(){
            return arr[top];
        }
        int Size(){
            return top+1;
        }
};


int main(){

    Stack s;
    s.Push(5);
    s.Push(6);
    s.Push(1);
    s.Push(8);

    
    cout << "Top of stack is before deleting any element " << s.Top() << endl;
    cout << "Size of stack before deleting any element " << s.Size() << endl;
    cout << "The element deleted is " << s.Pop() << endl;
    cout << "Size of stack after deleting an element " << s.Size() << endl;
    cout << "Top of stack after deleting an element " << s.Top() << endl;
    return 0;
}


