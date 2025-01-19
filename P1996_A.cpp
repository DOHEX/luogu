#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    struct node *head, *p, *now, *prev;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 1;
    head->next = NULL;
    now = head;
    for (int i = 2; i <= n; i++) {
        p = (struct node *)malloc(sizeof(struct node));
        p->data = i;
        p->next = NULL;
        now->next = p;
        now = p;
    }
    now->next = head;
    now = head, prev = head;
    while ((n--) > 1) {
        for (int i = 1; i < m; i++) {
            prev = now;
            now = now->next;
        }
        printf("%d ", now->data);
        prev->next = now->next;
        free(now);
        now = prev->next;
    }
    printf("%d", now->data);
    free(now);
    return 0;
}