#include<stdio.h>

int deleteElement();
int insertElement();
int searchElement();

int a[20], n, i, c=0;

int main() 
{
    printf("Enter the n value: ");
    scanf("%d", &n);

    printf("Enter the Elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("The Elements of the array are: ");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    
    int choice;
    
    printf("\nChoose an operation:\n");
    printf("1. Delete\n");
    printf("2. Insert\n");
    printf("3. Search\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
            case 1:
            deleteElement();
            break;
            case 2:
            insertElement();
            break;
            case 3:
            searchElement();
            break;
            default:
            printf("Invalid choice...\n");
    }

    return 0;
}

int deleteElement() {
    int position;

    printf("Enter the position to delete: ");
    scanf("%d", &position);

    if (position < 0 || position >= n) {
        printf("Invalid position...\n");
        return 1;
    }

    for (i = position; i < n; i++) {
        a[i] = a[i + 1];
    }
    n=n-1;

    printf("Element deleted successfully...\n");

    printf("Updated array: ");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }

    return 0;
}


int insertElement() {
    int position, newElement;

    printf("Enter the position to Insert: ");
    scanf("%d", &position);

    if (position < 0 || position >= n) {
        printf("Invalid position...\n");
        return 1;
    }

    printf("Enter the new element to insert: ");
    scanf("%d", &newElement);

    for (i = n - 1; i >= position; i--) {
        a[i + 1] = a[i];
    }

    a[position] = newElement;
    n++;  

    printf("Element Inserted successfully...\n");

    printf("Updated array: ");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }

    return 0;
}




int searchElement()
{
    int x;
    printf("\nEnter Element to search: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {  
        if (x == a[i]) {
            c = 1;
            printf("The element is found...\n");
            printf("The position of the element is: %d",i);
        }
    }

    if (c == 0) {
        printf("The element is not found....\n");
    }

    return 0;
}



