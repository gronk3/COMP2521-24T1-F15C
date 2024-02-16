// Representation 1
struct node {
    int value;
    struct node *next;
};

// note the type of struct in the parameters
int listLength(struct node *list) {

    int length = 0;

    for (struct node *curr = list; curr != NULL; curr = curr->next) {
        length += 1;
    }

    return length;

}
void appendNode(struct node *list, struct node *n) {

    for (struct node *curr = list; curr->next != NULL; curr = curr->next) {
        curr->next = n;
    }

}

int listSum(struct node *list) {

    // Base case
    if (list == NULL) {
        return 0;
    }

    // Recursive call
    return list->value + listSum(list->next);
}


// Representation 2
struct node {
    int value;
    struct node *next;
};

struct list {
    struct node *head;
    struct node *tail;
    int length;
    int sum;
};

// note the type of struct in the parameters
int listLength(struct list *list) {
    return list->length;
}

void appendNode(struct list *list, struct node *n) {

    tail->next = n;
    list->tail = n;
}

// int listSum(struct list *list);