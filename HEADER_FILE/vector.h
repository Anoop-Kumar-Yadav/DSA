#ifndef VECTOR_H
#define VECTOR_H

#include <stdbool.h>

// Vector Structure
typedef struct {
    int *data;      // Pointer to the elements
    int size;       // Current number of elements
    int capacity;   // Current allocated capacity
} Vector;

// Function Prototypes

// Initialization and Cleanup
void Vec_Init(Vector *vec);
void Vec_Destroy(Vector *vec);

// Capacity Management
int Vec_Size(const Vector *vec);
int Vec_Capacity(const Vector *vec);
bool Vec_IsEmpty(const Vector *vec);
void Vec_Reserve(Vector *vec, int new_capacity);

// Element Access
int Vec_At(const Vector *vec, int index);
int Vec_Front(const Vector *vec);
int Vec_Back(const Vector *vec);

// Modifiers
void Vec_PushBack(Vector *vec, int value);
void Vec_PopBack(Vector *vec);
bool Vec_Insert(Vector *vec, int index, int value);
bool Vec_Erase(Vector *vec, int index);
void Vec_Clear(Vector *vec);

// Utility Functions
void Vec_Print(const Vector *vec);

#endif // VECTOR_H
