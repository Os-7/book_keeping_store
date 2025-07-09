#include "OrderBook.hpp"

int main() {
    OrderBook ob;

    ob.addOrder(OrderType::BUY, 100.0, 10);
    ob.addOrder(OrderType::SELL, 99.0, 5);
    ob.addOrder(OrderType::SELL, 98.0, 10);
    ob.addOrder(OrderType::BUY, 101.0, 5);
    ob.addOrder(OrderType::BUY, 99.0, 3);
    ob.addOrder(OrderType::SELL, 100.0, 5);

    ob.printOrderBook();

    return 0;
}
