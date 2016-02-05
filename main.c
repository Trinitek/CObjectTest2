
#include <stdio.h>
#include "Trip.h"
#include "Product.h"
#include "Counter.h"

/* Prototypes */
void calculateExamplePrice(void);
void calculateExampleMPH(void);
void testExampleCounter(void);

/* Methods */

int main(void) {
    calculateExamplePrice();
    calculateExampleMPH();
    testExampleCounter();
    return;
}

void calculateExamplePrice(void) {
    Product* product = new_Product();
    double price = product->calculateFinalPrice(product, 18.02, 0.07);
    printf("Final price = %f\n", price);
    free_Product(product);
    return;
}

void calculateExampleMPH(void) {
    Trip* trip = new_Trip();
    double mph = trip->getAverageMPH(trip, 1000, 18);
    printf("Average MPH = %f\n", mph);
    free_Trip(trip);
    return;
}

void testExampleCounter(void) {
    Counter* counter = new_Counter();
    counter->increment(counter);
    counter->increment(counter);
    counter->increment(counter);
    counter->increment(counter);
    printf("Counter = %d\n", counter->getCount(counter));
    free_Counter(counter);
    return;
}
