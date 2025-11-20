#include <stdio.h>

struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student sv[5];

    for (int i = 0; i < 5; i++) {
        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);

        printf("Nhap ten: ");
        getchar();
        fgets(sv[i].name, sizeof(sv[i].name), stdin);

        p

