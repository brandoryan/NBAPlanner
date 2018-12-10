#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include "databasemanager.h"
#include <QVector>

struct Purchase
{
    STRING seller;
    int    numberOfItems;
    double grandTotal;

    Purchase(){
        numberOfItems = 0;
        grandTotal   = 0;
    }
};

class ShoppingCart
{
    public:
        ShoppingCart();
        ~ShoppingCart();

        /*****************************************************************
         *					ACCESSORS
         *****************************************************************/
        bool   isEmpty();

        // Gets purchase related data
        double getAllPurchasesTotal() const;
        Purchase getPurchaseHistory(int index);
        int      getPurchaseHistorySize();

        /*****************************************************************
         *					MUTATOR
         *****************************************************************/
        void addToCart(STRING seller, double price, int quantity);
        void completePurchase();
        void clearPurchaseHistory();

private:
        double allPurchasesTotal;
        Purchase *purchase;
        QVector<Purchase> purchaseHistory;
\
};

#endif // SHOPPINGCART_H
