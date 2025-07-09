#ifndef ORDERBOOK_HPP
#define ORDERBOOK_HPP

#include "Order.hpp"
#include <map>
#include <queue>
#include <iostream>

class OrderBook {
private:
    std::map<double, std::queue<Order>> buyOrders;  // High price to low
    std::map<double, std::queue<Order>> sellOrders; // Low price to high
    int nextOrderId = 1;

    void matchOrders();

public:
    void addOrder(OrderType type, double price, int quantity);
    void printOrderBook();
};

#endif
