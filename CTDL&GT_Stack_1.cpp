
nguon: GPT

const int MAX = 100; // Kích thu?c t?i da c?a stack
class Stack {
private:
    int top; // V? trí ph?n t? d?u tiên trong stack
    int a[MAX]; // M?ng ch?a các ph?n t? trong stack
public:
    Stack() { top = -1; } // Kh?i t?o stack v?i top = -1 (stack r?ng)

    bool isEmpty() { return top == -1; } // Ki?m tra stack có r?ng không

    bool isFull() { return top == MAX - 1; } // Ki?m tra stack dã d?y chua

    bool push(int x) { // Thêm m?t ph?n t? vào d?u stack
        if (isFull()) return false; // N?u stack dã d?y thì không th? thêm du?c
        a[++top] = x; // Thêm ph?n t? vào v? trí d?u tiên c?a stack và tang top lên 1
        return true;
    }

    bool pop() { // Xóa ph?n t? d?u tiên kh?i stack
        if (isEmpty()) return false; // N?u stack r?ng thì không th? xóa du?c
        top--; // Gi?m top xu?ng 1 d? lo?i b? ph?n t? d?u tiên kh?i stack
        return true;
    }

    int getTop() { // L?y giá tr? ph?n t? d?u tiên trong stack
        if (isEmpty()) return -1; // N?u stack r?ng thì không th? l?y du?c
        return a[top];
    }
};
