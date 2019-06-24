#include <stdio.h>
#include <stdlib.h>
typedef struct Link {
    int num;
    struct Link * next;
} link;

link * initLink(int arr [], int len);
void displayLink(link * thisLink);


int main (void) {
    int arr [] = {1,2,3,4,5,6,7,87,89};
    link * thisLink = initLink(arr, sizeof(arr) / sizeof (int));
    displayLink(thisLink);
    return 0;
}


link * initLink (int arr [], int len) {
    link * head = (link *) malloc(sizeof(link));
    link * last = NULL;
    for (int index = 0; index < len; index++) {
        link * tmp = !last ? head : (link *) malloc(sizeof(link));
        tmp->num = arr[index];
        if (last) {
            last->next = tmp;
        }
        last = tmp;
    }
    return head;
}


void displayLink(link * thisLink) {
    link * _thisLink = thisLink;
    printf("%d", _thisLink->num);
    while (_thisLink->next != NULL) {
        _thisLink = _thisLink->next;
        printf("%d", _thisLink->num);
    }
    printf("\n");
}
