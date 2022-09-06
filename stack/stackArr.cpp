#include <iostream>
using namespace std;

// Stack using Array

class Stack
{
public:
        int size;
        int top;
        int *arr;
};

// To check whether the stack is empty
int isEmpty(Stack *ptr)
{
        if (ptr->top == -1)
        {

                return 1;
        }
        else
        {
                return 0;
        }
}

// To check whether the Stack is overflow(Full)
int isFull(Stack *ptr)
{
        if (ptr->top >= (ptr->size - 1))
        {
                return 1;
        }
        else
        {

                return 0;
        }
}

// to push
void push(Stack *ptr, int value)
{
        if (isFull(ptr))
        {
                cout << "Stack Overflow! you cannot push anymore\n";
        }
        else
        {
                ptr->top++;
                ptr->arr[ptr->top] = value; 
        }
}

// topop
int pop(Stack *ptr)
{
        if (isEmpty(ptr))
        {
                cout << "Stack underflow! There is no element left to pop\n";
        }
        else
        {
                int value = ptr->arr[ptr->top];
                ptr->top--;
                return value;
        }
}

int main()
{
        Stack *spicy = new Stack();
        spicy->size = 6;
        spicy->top = -1;
        spicy->arr = new int[spicy->size];

        cout << "Before pushing: " << isFull(spicy) << endl;//1->True,0->false
        cout << "Before pop: " << isEmpty(spicy) << endl;

        push(spicy, 1);
        push(spicy, 2);
        push(spicy, 3);
        push(spicy, 4);
        cout << pop(spicy) << " has been poped" << endl;
        push(spicy, 5);
        push(spicy, 6);
        cout << pop(spicy) << " has been poped" << endl;
        cout << pop(spicy) << " Has been poped" << endl;
        cout << "After pushing: " << isFull(spicy) << endl;
        cout << "After pop: " << isEmpty(spicy) << endl;

        return 0;
}