#include <stdio.h>

#define MAX_SIZE 10

int top = -1; // Stack'in boş olduğunu gösteren başlangıç değeri
int S[MAX_SIZE]; // Stack dizisi

void stackyaz() {
    printf("--------------------------------------\n");
    for (int i = MAX_SIZE; i >= 0; i--) {
        printf("%d\n", S[i]);
    }
    printf("--------------------------------------\n");
}

void push(int data) {
    if (top == MAX_SIZE - 1) {
        printf("Stack dolu\n");
    } else {
        top++;
        S[top] = data;
        
    }
}

void pop() {
    if (top == -1) {
        printf("Stack boş\n");
    } 
    else{
        S[top]=0;
        top--;
    }
}

void peek() {
    if (top == -1) {
        printf("Stack boş\n");
    } else {
        printf("peek değeri=%d\n", S[top]);
        
    }
}

void clean() {
    for (int i = 0; i < MAX_SIZE; i++) {
        S[i] = 0; // S[i] = NULL yerine 0 olarak ayarlanmalıdır
    }
    top = -1;
    printf("Stack boşaldı\n");
}

int main() {
    int secim, data;
    
    while (1) {
        printf("İşlem seçiniz.\n");
        printf("1_push\n");
        printf("2_pop\n");
        printf("3_peek\n");
        printf("4_clean\n");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                printf("Input giriniz:\n");
                scanf("%d", &data);
                push(data);
                stackyaz();
                break;
            case 2:
                pop();
                stackyaz();
                break;
            case 3:
                peek();
                stackyaz();
                break;
            case 4:
                clean();
                stackyaz();
                break;
            default:
                printf("Yanlış seçim! Geçerli bir işlem giriniz.\n");
                break;
        }
    }

    return 0;
}
