struct node {
	int value;
	struct node *left;
	struct node *right;
};

int bstCountOdds(struct node *t) { 
    if (t == NULL) return 0;

    if (t->value % 2 == 0) {
        return 0 + bstCountOdds(t->left) + bstCountOdds(t->right);
    } else {
        return 1 + bstCountOdds(t->left) + bstCountOdds(t->right);
    }
}

int bstCountInternal(struct node *t) {
    if (t == NULL) return 0;
    if (t->right == NULL && t->left == NULL) {
        return 0;
    } else {
        return 1 + bstCountInternal(t->left) + bstCountInternal(t->right);
    }
}



int bstNodeLevel(struct node *t, int key) {
    if (t == NULL) return -1;

    if (t->value == key) return 0;

    if (t->value < key) {
        int height = bstNodeLevel(t->right, key);
        if (height == -1) {
            return -1;
        } else {
            return height + 1;
        } 
    } else {
        int height = bstNodeLevel(t->left), key;
        if (height == -1) {
            return -1;
        } else {
            return height + 1;
        } 
    }
}

int bstCountGreater(struct node *t, int val) {
    if (t == NULL) return 0;

    int currCountGreater = 0;
    if (val < t->value) {
        currCountGreater = 1 + bstCountGreater(t->left);
    } 

    currCounterGreater += bstCountGreater(t->right);
    return currCountGreater;
}