#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next;
};

int main(void) {

    // Stack
	struct node n;
	n.value = 42;
	n.next = NULL;
}


// int main(void) {
//     // Stack
// 	int a[5];
// 	for (int i = 0; i < 5; i++) {
// 		a[i] = 42;
// 	}
// }