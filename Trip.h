
#ifndef _TRIP_H
#define _TRIP_H

/* Object definition */

typedef struct Trip {
    
    /* Methods */
    double  (*getAverageMPH)    (struct Trip* this, double distance, double time);
    
} Trip;

/* Public static method prototypes */

Trip* new_Trip(void);
void free_Trip(Trip* this);

#endif
