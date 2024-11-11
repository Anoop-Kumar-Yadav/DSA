#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *arr;       // Pointer to the array
    int size;       // Current size of the array
    int capacity;   // Maximum capacity of the array
} DynamicArray;

// Function to initialize the dynamic array
void initArray(DynamicArray *dArray, int capacity) {
    dArray->capacity = capacity;
    dArray->size = 0;
    dArray->arr = (int *)malloc(capacity * sizeof(int));
}

// Function to resize the dynamic array
void resizeArray(DynamicArray *dArray) {
    dArray->capacity *= 2;
    dArray->arr = (int *)realloc(dArray->arr, dArray->capacity * sizeof(int));
}

// Function to insert an element at the end of the dynamic array
void insertEnd(DynamicArray *dArray, int element) {
    if (dArray->size == dArray->capacity) {
        resizeArray(dArray);  // Resize the array if it's full
    }
    dArray->arr[dArray->size] = element;
    dArray->size++;
}

// Function to insert an element at a specific index
void insertAt(DynamicArray *dArray, int index, int element) {
    if (index < 0 || index > dArray->size) {
        printf("Index out of bounds.\n");
        return;
    }
    if (dArray->size == dArray->capacity) {
        resizeArray(dArray);  // Resize if needed
    }
    for (int i = dArray->size; i > index; i--) {
        dArray->arr[i] = dArray->arr[i - 1];  // Shift elements to the right
    }
    dArray->arr[index] = element;
    dArray->size++;
}

// Function to delete an element at a specific index
void deleteAt(DynamicArray *dArray, int index) {
    if (index < 0 || index >= dArray->size) {
        printf("Index out of bounds.\n");
        return;
    }
    for (int i = index; i < dArray->size - 1; i++) {
        dArray->arr[i] = dArray->arr[i + 1];  // Shift elements to the left
    }
    dArray->size--;
}

// Function to delete the last element
void deleteEnd(DynamicArray *dArray) {
    if (dArray->size == 0) {
        printf("Array is already empty.\n");
        return;
    }
    dArray->size--;
}

// Function to search for an element
int search(DynamicArray *dArray, int element) {
    for (int i = 0; i < dArray->size; i++) {
        if (dArray->arr[i] == element) {
            return i;  // Return the index if element is found
        }
    }
    return -1;  // Return -1 if element is not found
}

// Function to update an element at a specific index
void update(DynamicArray *dArray, int index, int newElement) {
    if (index < 0 || index >= dArray->size) {
        printf("Index out of bounds.\n");
        return;
    }
    dArray->arr[index] = newElement;
}

// Function to traverse and display the elements of the dynamic array
void traverse(DynamicArray *dArray) {
    for (int i = 0; i < dArray->size; i++) {
        printf("%d ", dArray->arr[i]);
    }
    printf("\n");
}

// Function to free the memory used by the dynamic array
void freeArray(DynamicArray *dArray) {
    free(dArray->arr);
    dArray->arr = NULL;
    dArray->size = 0;
    dArray->capacity = 0;
}

int main() {
    DynamicArray dArray;

    // Initialize the dynamic array with a capacity of 2
    initArray(&dArray, 2);

    // Inserting elements at the end
    insertEnd(&dArray, 10);
    insertEnd(&dArray, 20);
    insertEnd(&dArray, 30); // This will cause a resize

    printf("Array after inserting 10, 20, and 30: ");
    traverse(&dArray);

    // Inserting at a specific index
    insertAt(&dArray, 1, 25);
    printf("Array after inserting 25 at index 1: ");
    traverse(&dArray);

    // Deleting an element at index 2
    deleteAt(&dArray, 2);
    printf("Array after deleting element at index 2: ");
    traverse(&dArray);

    // Deleting the last element
    deleteEnd(&dArray);
    printf("Array after deleting the last element: ");
    traverse(&dArray);

    // Searching for an element
    int searchIndex = search(&dArray, 20);
    if (searchIndex != -1) {
        printf("Element 20 found at index: %d\n", searchIndex);
    } else {
        printf("Element 20 not found.\n");
    }

    // Updating an element at index 0
    update(&dArray, 0, 100);
    printf("Array after updating element at index 0 to 100: ");
    traverse(&dArray);

    // Freeing the memory used by the dynamic array
    freeArray(&dArray);

    return 0;
}
