#include <stdio.h>

int main() {
    int arr[100];
    int n = 0;
    int choice;

    do {
        printf("\n--------- MENU ----------\n");
        printf("1. Nhap so phan tu va gia tri cho mang\n");
        printf("2. In gia tri cac phan tu trong mang\n");
        printf("3. Kiem tra mang co phai mang tang dan hay khong\n");
        printf("4. Sap xep mang theo thu tu tang dan \n");
        printf("5. Thoat chuong trinh\n");
        printf("==========================\n");
        printf("Chon mot chuc nang: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so phan tu cua mang: ");
                scanf("%d", &n);
                printf("Nhap cac phan tu cua mang:\n");
                for (int i = 0; i < n; i++) {
                    printf("Phan tu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                printf("Mang sau khi nhap:\n");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 2:
                printf("Gia tri cac phan tu trong mang:\n");
                for (int i = 0; i < n; i++) {
                    printf("arr[%d] = %d", i, arr[i]);
                    if (i < n - 1) {
                        printf(", ");
                    } else {
                        printf("\n");
                    }
                }
                break;

            case 3:
                if (n == 0) {
                    printf("Mang chua co phan tu nao. Vui long nhap phan tu truoc khi kiem tra.\n");
                } else {
                    int isSorted = 1;
                    for (int i = 0; i < n - 1; i++) {
                        if (arr[i] > arr[i + 1]) {
                            isSorted = 0;
                            break;
                        }
                    }
                    if (isSorted) {
                        printf("Mang la mang tang dan\n");
                    } else {
                        printf("Mang khong phai la mang tang dan\n");
                    }
                }
                break;

            case 4:
                if (n == 0) {
                    printf("Mang chua co phan tu nao. Vui long nhap phan tu truoc khi sap xep.\n");
                } else {
                    for (int i = 0; i < n - 1; i++) {
                        for (int j = 0; j < n - i - 1; j++) {
                            if (arr[j] > arr[j + 1]) {
                                int temp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = temp;
                            }
                        }
                    }
                    printf("Mang sau khi sap xep tang dan:\n");
                    for (int i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 5:
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n");
                break;
        }
    } while (choice != 5);

    return 0;
}

