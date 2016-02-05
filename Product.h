
#ifndef _PRODUCT_H
#define _PRODUCT_H

/* Object definition */

typedef struct Product {
    
    /* Methods */
    double  (*calculateFinalPrice)  (struct Product* this, double price, double taxRate);
    
} Product;

/* Public static method prototypes */

Product* new_Product(void);
void free_Product(Product* this);

#endif
