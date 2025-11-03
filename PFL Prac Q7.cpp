#include <stdio.h>

int main() {
    int arr[10];
    int i, searchNum, count = 0;

    printf("Enter 10 integers: \n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &searchNum);

    for (i = 0; i < 10; i++) {
        if (arr[i] == searchNum) {
            count++;
        }
    }

    if (count > 0) {
        printf("Number %d occurred %d time(s).\n", searchNum, count);
    } else {
        printf("Number not found.\n");
    }

    return 0;
}

