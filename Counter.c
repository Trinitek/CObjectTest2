
#include <stdlib.h>
#include "Counter.h"

/* Private method prototypes */

void increment(Counter* this);
void decrement(Counter* this);
int getCount(Counter* this);

/* Constructor */

Counter* new_Counter(void) {
    Counter* counter = malloc(sizeof(Counter));
    
    counter->increment = increment;
    counter->decrement = decrement;
    counter->getCount = getCount;
    
    counter->_private_count = 0;
    
    return counter;
}

/* Destructor */

void free_Counter(Counter* this) {
    free(this);
    return;
}

/* Public methods */

void increment(Counter* this) {
    this->_private_count++;
    return;
}

void decrement(Counter* this) {
    this->_private_count--;
    return;
}

int getCount(Counter* this) {
    return this->_private_count;
}
