#include <stdio.h>
#include <stdlib.h>

#include "Set.h"

int numOddOccurrences(int arr[], int size) {

    Set s = SetNew();
    for (int i = 0; i < size; ++i) {
        if (SetContains(s, arr[i])) {
            SetDelete(s, arr[i]);
        } else {
            SetInsert(s, arr[i]);
        }
    }

    return SetSize(s);
}


int numSingleOccurrences(int arr[], int size) {
    // TODO
}