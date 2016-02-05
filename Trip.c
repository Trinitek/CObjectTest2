
#include <stdlib.h>
#include "Trip.h"

/* Private method prototypes */

double getAverageMPH(Trip* this, double distance, double time);

/* Constructor */

Trip* new_Trip(void) {
    Trip* trip = malloc(sizeof(Trip));
    
    trip->getAverageMPH = getAverageMPH;
    
    return trip;
}

/* Destructor */

void free_Trip(Trip* this) {
    free(this);
    return;
}

/* Public methods */

double getAverageMPH(Trip* this, double distance, double time) {
    return distance/time;
}
