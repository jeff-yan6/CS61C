#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
    node *p_st_slow = head;
    node *p_st_fast = head;
    while(NULL != p_st_fast && NULL != p_st_fast->next) {
        p_st_slow = p_st_slow->next;
        p_st_fast = p_st_fast->next->next;
        if (p_st_slow == p_st_fast) {
            return 1;
        }
    }
    return 0;
}