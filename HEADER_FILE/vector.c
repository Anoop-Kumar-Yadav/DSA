#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

// Initial capacity for the vector
#define INITIAL_CAPACITY 4

// Initialize the vector
void Vec_Init(Vector *vec) {
    vec->size = 0;
    vec->capacity = INITIAL_CAPACITY;
    vec->data = (int *)malloc(INITIAL_CAPACITY * sizeof(int));
}

// Destroy the vector and free memory
void Vec_Destroy(Vector *vec) {
    free(vec->data);
    vec->data = NULL;
    vec->size = 0;
    vec->capacity = 0;
}

// Return the size of the vector
int Vec_Size(const Vector *vec) {
    return vec->size;
}

// Return the capacity of the vector
int Vec_Capacity(const Vector *vec) {
    return vec->capacity;
}

// Check if the vector is empty
bool Vec_IsEmpty(const Vector *vec) {
    return vec->size == 0;
}

// Reserve capacity for the vector
void Vec_Reserve(Vector *vec, int new_capacity) {
    if (new_capacity > vec->capacity) {
        vec->capacity = new_capacity;
        vec->data = (int *)realloc(vec->data, vec->capacity * sizeof(int));
    }
}

// Resize the vector when needed
static void Vec_Resize(Vector *vec) {
    Vec_Reserve(vec, vec->capacity * 2);
}

// Access element at a given index with bounds checking
int Vec_At(const Vector *vec, int index) {
    if (index < 0 || index >= vec->size) {
        fprintf(stderr, "Index out of bounds.\n");
        exit(EXIT_FAILURE);
    }
    return vec->data[index];
}

// Access the first element
int Vec_Front(const Vector *vec) {
    return Vec_At(vec, 0);
}

// Access the last element
int Vec_Back(const Vector *vec) {
    return Vec_At(vec, vec->size - 1);
}

// Push a new element to the end of the vector
void Vec_PushBack(Vector *vec, int value) {
    if (vec->size == vec->capacity) {
        Vec_Resize(vec);
    }
    vec->data[vec->size++] = value;
}

// Pop the last element from the vector
void Vec_PopBack(Vector *vec) {
    if (Vec_IsEmpty(vec)) {
        fprintf(stderr, "Cannot pop from an empty vector.\n");
        return;
    }
    vec->size--;
}

// Insert an element at a specified index
bool Vec_Insert(Vector *vec, int index, int value) {
    if (index < 0 || index > vec->size) {
        return false;
    }
    if (vec->size == vec->capacity) {
        Vec_Resize(vec);
    }
    for (int i = vec->size; i > index; i--) {
        vec->data[i] = vec->data[i - 1];
    }
    vec->data[index] = value;
    vec->size++;
    return true;
}

// Erase an element at a specified index
bool Vec_Erase(Vector *vec, int index) {
    if (index < 0 || index >= vec->size) {
        return false;
    }
    for (int i = index; i < vec->size - 1; i++) {
        vec->data[i] = vec->data[i + 1];
    }
    vec->size--;
    return true;
}

// Clear all elements from the vector
void Vec_Clear(Vector *vec) {
    vec->size = 0;
}

// Print the elements of the vector
void Vec_Print(const Vector *vec) {
    printf("Vector: ");
    for (int i = 0; i < vec->size; i++) {
        printf("%d ", vec->data[i]);
    }
    printf("\n");
}
