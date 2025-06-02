#include <iostream>

using namespace std;

typedef int itemType;

const int MAXSTACK = 10;

typedef struct Stack
{
    itemType Item[MAXSTACK];
    int Count;
} Stack;

void initStack(Stack *M);
int Full(Stack *M);
int empty(Stack *M);
void pop(Stack *M, itemType *y);
void push(Stack *M, itemType y);
void display(Stack *M);

int main(int argc, char const *argv[])
{
    Stack M;
    itemType y;

    initStack(&M);

    push(&M, 3);
    push(&M, 7);
    push(&M, 4);
    push(&M, 2);
    push(&M, 9);
    pop(&M, &y);
    display(&M);

    return 0;
}

void initStack(Stack *M)
{
    M->Count = 0;
}

int Full(Stack *M)
{
    return (M->Count == MAXSTACK);
}

int empty(Stack *M)
{
    return (M->Count == 0);
}

void pop(Stack *M, itemType *y)
{
    if (empty(M))
    {
        cout << "Stack Masih Kosong" << endl;
    }
    else
    {
        --(M->Count);
        *y = M->Item[M->Count];
    }
}

void push(Stack *M, itemType y)
{
    if (Full(M))
    {
        cout << "Stack Sudah Penuh" << endl;
    }
    else
    {
        M->Item[M->Count] = y;
        ++(M->Count);
    }
}

void display(Stack *M)
{
    cout << "Menampilkan Data Stack" << endl;

    for (int i = (M->Count) - 1; i >= 0; --i)
    {
        cout << M->Item[i] << endl;
    }
}