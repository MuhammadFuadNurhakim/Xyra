
#include <iostream>
#include "stack.h"

using namespace std;

void createStack(Stack &S) {
    S.top = 0;
}

void push(Stack &S, infotype x) {
    if (S.top < 20) {
        S.top++;
        S.info[S.top] = x;
    }
}

infotype pop(Stack &S) {
    if (S.top > 0) {
        infotype x = S.info[S.top];
        S.top--;
        return x;
    }
    return 0;
}

void printInfo(Stack S) {
    cout << "[TOP]";

    for (int i = S.top; i >= 1; i--) {
        cout << " " << S.info[i];
    }

    cout << endl;
}

void balikStack(Stack &S) {
    int kiri = 1;
    int kanan = S.top;

    while (kiri < kanan) {
        infotype temp = S.info[kiri];
        S.info[kiri] = S.info[kanan];
        S.info[kanan] = temp;

        kiri++;
        kanan--;
    }
}