#include <iostream>

using namespace std;

typedef int itemType;

const int MAXSTACK = 10;

typedef struct stack
{
    itemType Item[MAXSTACK];
    int Count;
} Stack;

void initStack(Stack *M);
int Full(stack *M);
int empty(stack *M);
void pop(stack *M, itemType *Y);
void push(stack *M, itemType *Y);

int main(int argc, char const *argv[])
{
    cout << "Hello World!" << endl;

    return 0;
}

void initStack(Stack *M)
{
    M->Count = 0;
}

int Full(stack *M)
{
    return (M->Count == MAXSTACK);
}

int empty(stack *M)
{
    return (M->Count == 0);
}

void pop(stack *M, itemType *Y){
    if (empty(M)){
        cout << "Stack Masih Kosong" << endl;
    } else {
        --(M->Count);
        *Y = M->Item[M->Count];
    }
}