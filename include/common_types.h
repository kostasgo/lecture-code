#pragma once // #include το πολύ μία φορά

// Τύποι που χρησιμοποιούνται σε πολλά modules

// Χρήση του τύπου "bool" για μεταβλητές που παίρνουν μόνο τιμές true / false
#include <stdbool.h> 

// Pointer προς ένα αντικείμενο οποιουδήποτε τύπου. Απλά είναι πιο ευανάγνωστο από το "void*" που μοιάζει με το "void"
typedef void* Pointer;

// Δείκτης σε συνάρτηση που συγκρίνει 2 στοιχεία a και b
typedef int (*CompareFunc)(const Pointer a, const Pointer b);