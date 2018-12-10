#include "shoppingcart.h"

ShoppingCart::ShoppingCart()
{
   purchase = new Purchase();
   allPurchasesTotal = 0;
}

ShoppingCart::~ShoppingCart()
{
    delete purchase;
}


/***************************************************************************//**
 * @brief ShoppingCart::addToCart
 * @param sellerF
 * @param priceF
 * @param quantityF
 *
 * Function 'Adds' purcahse to the cart.
 ******************************************************************************/
void ShoppingCart::addToCart(STRING sellerF, double priceF, int quantityF)
{
    qDebug() << ("stop total before purchase: " + STRING::number(purchase->grandTotal));

    qDebug() << ("New Item Added To Cart");
    qDebug() << ("Purchased at: " + sellerF);
    qDebug() << ("quantity: " + STRING::number(quantityF));
    qDebug() << ("price: "    + STRING::number(priceF));
    qDebug() << ("Cost: " + STRING::number(priceF * quantityF));

    purchase->seller = sellerF;
    purchase->numberOfItems += quantityF;
    purchase->grandTotal += priceF * quantityF;
    qDebug() << ("stop total after purchase: " + STRING::number(purchase->grandTotal));
    qDebug() << ("curent grand Total " + STRING::number(allPurchasesTotal));
    qDebug();
}

/***************************************************************************//**
 * @brief ShoppingCart::completePurchase
 ******************************************************************************/
void ShoppingCart::completePurchase()
{
    allPurchasesTotal += purchase->grandTotal;
    purchaseHistory.push_back(*purchase);
    purchase = new Purchase();
}

/***************************************************************************//**
 * @brief ShoppingCart::clearPurchaseHistory
 ******************************************************************************/
void ShoppingCart::clearPurchaseHistory()
{
    purchaseHistory.clear();
    allPurchasesTotal = 0;
}

/***************************************************************************//**
 * @brief ShoppingCart::isEmpty
 * @return
 ******************************************************************************/
bool ShoppingCart::isEmpty()
{
    return purchase->numberOfItems == 0;
}

/***************************************************************************//**
 * @brief ShoppingCart::getAllPurchasesTotal
 * @return
 ******************************************************************************/
double ShoppingCart::getAllPurchasesTotal() const
{
    return allPurchasesTotal;
}

/***************************************************************************//**
 * @brief ShoppingCart::getPurchaseHistory
 * @param index
 * @return
 ******************************************************************************/
Purchase ShoppingCart::getPurchaseHistory(int index)
{
    return purchaseHistory.at(index);
}

/***************************************************************************//**
 * @brief ShoppingCart::getPurchaseHistorySize
 * @return
 ******************************************************************************/
int ShoppingCart::getPurchaseHistorySize()
{
    return purchaseHistory.size();
}

