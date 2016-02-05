
#ifndef _COUNTER_H
#define _COUNTER_H

/* Object definition */

typedef struct Counter {
    
    /* Methods */
    void    (*increment)    (struct Counter* this);
    void    (*decrement)    (struct Counter* this);
    int     (*getCount)     (struct Counter* this);
    
    /* Private fields */
    int     _private_count;
    
} Counter;

/* Public static method prototypes */

Counter* new_Counter(void);
void free_Counter(Counter* this);

#endif
