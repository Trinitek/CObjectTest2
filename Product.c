
#include <stdlib.h>
#include "Product.h"

/* Private method prototypes */

double calculateFinalPrice(Product* this, double price, double taxRate);

/* Constructor */

Product* new_Product(void) {
    Product* product = malloc(sizeof(Product));
    
    product->calculateFinalPrice = calculateFinalPrice;
    
    return;
}

/* Destructor */

void free_Product(Product* this) {
    free(this);
    return;
}

/* Public methods */

double calculateFinalPrice(Product* this, double price, double taxRate) {
    return price * ++taxRate;
}
