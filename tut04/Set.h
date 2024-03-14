typedef struct *set Set;

// Creates a new empty set
// O(1)
Set SetNew(void);

// Frees memory allocated to the set
// O(n)
void SetFree(Set s);

// Inserts an element into the set
void SetInsert(Set s, int elem);

// Deletes an element from the set
void SetDelete(Set s, int elem);

// Returns true if the given element is in the set, and false otherwise
bool SetContains(Set s, int elem);

// Returns the number of elements in the set
int SetSize(Set s);