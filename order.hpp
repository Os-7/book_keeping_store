#ifndef ORDER_HPP
#define ORDER_HPP

#include <string>

enum class OrderType { BUY, SELL };

struct Order {
    int id;
    OrderType type;
    double price;
    int quantity;

    Order(int id, OrderType type, double price, int quantity)
        : id(id), type(type), price(price), quantity(quantity) {}
};

#endif
