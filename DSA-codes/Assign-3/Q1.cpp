#include <iostream>
using namespace std;
void push(int value, int *arr, int &pos, int size)
{
    if (pos + 1 == size)
        cout << "Stack is Full";
    else
    {
        arr[pos + 1] = value;
        pos++;
    }
}
void pop(int *arr, int &pos)
{
    if (pos >= 0)
    {
        cout << arr[pos];
        pos--;
    }
    else
        cout << "Stack is already empty";
}
void isFull(int *arr, int &pos, int size)
{
    if (pos + 1 == size)
        cout << "Stack is already Full";
    else
        cout << "Stack is not Full";
}
void peek(int *arr, int &pos)
{
    if (pos > -1)
        cout << "The peek element is " << arr[pos];
    else
        cout << "Stack is empty";
}
void isEmpty(int &pos)
{
    if (pos == -1)
        cout << "Stack is empty";
    else
        cout << "Stack is not empty";
}
void display(int *arr, int &pos)
{
    for (int i = pos; i >= 0; i--)
    {
        cout << arr[pos] << " ";
    }
}
int main()
{
    int size = 5;
    int st[size];
    int top = -1;
    // for push
    int value;
    cin >> value;
    push(value, st, top, size);
    // for pop
    pop(st, top);
    // for display
    display(st, top);
    // for is empty
    isEmpty(top);
    // for peek
    peek(st, top);
    // for isFull
    isFull(st, top, size);
    return 0;
}