#pragma once

#include <string>
#include <map>
#include "OrderBookEntry.h"

using namespace std;

class Wallet {
    public:
        Wallet();
        void insertCurrency(string type, double amount);
        bool removeCurrency(string type, double amount);
        bool containsCurrency(string type, double amount);
        string ToString();
        bool canFulfillOrder(OrderBookEntry order);
        void processSale (OrderBookEntry& sale); //updates contents of the wallet (assume order is done by the owner)
        
    private:
      map<string, double> currencies;
};