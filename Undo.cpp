#include <iostream>
#define max 100
using namespace std;

struct Stack {
    string data[max];
    int top;
};

void init(Stack &s);
bool isEmpty(Stack s);
bool isFull(Stack s);
void push(Stack &s, string aksi);
void pop(Stack &s);
void peek(Stack s);

int main() {
    Stack undo;
    init(undo);

    int pilihan;
    string aksi;

    do {
        cout << "\n=== MENU STACK UNDO ===" << endl;
        cout << "1. Tambah Aksi" << endl;
        cout << "2. Undo" << endl;
        cout << "3. Lihat Aksi Terakhir" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih: ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
            case 1:
                cout << "Masukkan aksi: ";
                getline(cin, aksi);
                push(undo, aksi);
                break;

            case 2:
                pop(undo);
                break;

            case 3:
                peek(undo);
                break;

            case 4:
                cout << "Program selesai." << endl;
                break;

            default:
                cout << "Pilihan tidak valid!" << endl;
        }

    } while (pilihan != 4);

    return 0;
}
void init(Stack &s) {
    s.top = -1;
}
bool isEmpty(Stack s) {
    return s.top == -1;
}
bool isFull(Stack s) {
    return s.top == max - 1;
}
void push(Stack &s, string aksi) {
    if (isFull(s)) {
        cout << "Stack penuh!" << endl;
    } else {
        s.top++;
        s.data[s.top] = aksi;
        cout << "Aksi disimpan." << endl;
    }
}
void pop(Stack &s) {
    if (isEmpty(s)) {
        cout << "Tidak ada aksi untuk di-undo." << endl;
    } else {
        cout << "Undo aksi: " << s.data[s.top] << endl;
        s.top--;
    }
}
void peek(Stack s) {
    if (isEmpty(s)) {
        cout << "Stack kosong." << endl;
    } else {
        cout << "Aksi terakhir: " << s.data[s.top] << endl;
    }
}
