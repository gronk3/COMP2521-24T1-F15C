#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
    int value;
    struct node *next;
};

struct list {
	struct node *head;
};

// HELPER FUNCTIONS SO WE CAN SEE WHAT'S HAPPENING
struct node *createNode(int value);
struct node *listPrepend(struct node *head, int value);
void listPrint(struct node *head);

int listLength(struct list *l) {

    // BASE CASES:
    if (l == NULL) {
        return 0;
    } else if (l->next == NULL) {
        return 1;
    }

    // RECURSIVE CASE:
    return 1 + listLength(l->next);

}

int listLengthR(struct node *n) {
    // TODO:
}


// ACTUAL RECURSIVE FUNCTIONS
int listLength(struct node *l);
int listCountOdds(struct node *l);
bool listIsSorted(struct node *l);
struct node *listDelete(struct node *l, int value);


struct node *createNode(int value) {
    struct node *n = malloc(sizeof(*n));
    if (n == NULL) {
		fprintf(stderr, "error: out of memory\n");
		exit(EXIT_FAILURE);
	}
    n->next = NULL;
    n->value = value;
    return n;
}

struct node *listPrepend(struct node *head, int value) {
    struct node *n = createNode(value);
    n->next = head;
    return n;
}

void listPrint(struct node *head) {

    if (head == NULL) { return; }

    for (struct node *curr; curr != NULL; curr = curr->next) {
        printf("%d ", curr->value);
    }
    printf("\n");
}


int listLength(struct node *l) {
    // TODO:
}

int listCountOdds(struct node *l) {
    // BASE CASE:
    if (n == NULL) return 0;

    // RECURSIVE CASES:
    else if (n->value % 2 == 0) {
        return 0 + listCountOdds(l->next);
    } else {
        return 1 + listCountOdds(l->next);
    }
}

bool listIsSorted(struct node *l) {
    // BASE CASE:
    if (l == NULL || l->next == NULL) {
        return true;
    }
    // RECURSIVE CASE:
    if (!listIsSorted(l->next) || l->value > l->next->value) {
        return false;
    }
    return true;

}

struct node *listDelete(struct node *l, int value) {
    // BASE CASE:
    if (l == NULL) {
        return NULL
    }

    if (l->value == value) {
        struct node *next = l->next;
        free(l);
        return next;
    } else {
        l->next = listDelete(l->next, value);
        return l;
    }
    
}



int listCountIterative(struct node *l) {
    // TODO:
}



int main(void) {

    struct node *head = NULL;
    head = listPrepend(head, 6);
    head = listPrepend(head, 5);
    head = listPrepend(head, 3);
    head = listPrepend(head, 2);
    head = listPrepend(head, 1);
    head = listPrepend(head, 20);
    head = listPrepend(head, 176);
    listPrint(head);

    printf("list length: %d\n", listLength(head));
    printf("number of odds: %d\n", listCountOdds(head));
    if (listIsSorted(head)) {
        printf("THIS IS SORTED!!\n");
    } else {
        printf("not sorted :(\n");
    }

    return 0;
}