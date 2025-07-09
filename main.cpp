#include "OrderBook.hpp"

int main() {
    OrderBook ob;

    // Simulated BUY orders
    ob.addOrder(OrderType::BUY, 101.0, 10);
    ob.addOrder(OrderType::BUY, 100.5, 20);
    ob.addOrder(OrderType::BUY, 99.0, 30);
    ob.addOrder(OrderType::BUY, 102.0, 5);
    ob.addOrder(OrderType::BUY, 98.5, 25);
    ob.addOrder(OrderType::BUY, 100.0, 15);
    ob.addOrder(OrderType::BUY, 101.5, 12);
    ob.addOrder(OrderType::BUY, 103.0, 8);
    ob.addOrder(OrderType::BUY, 97.0, 50);
    ob.addOrder(OrderType::BUY, 100.75, 7);
    ob.addOrder(OrderType::BUY, 101.25, 9);
    ob.addOrder(OrderType::BUY, 99.5, 17);
    ob.addOrder(OrderType::BUY, 98.0, 22);
    ob.addOrder(OrderType::BUY, 102.5, 6);
    ob.addOrder(OrderType::BUY, 96.0, 40);

    // Simulated SELL orders
    ob.addOrder(OrderType::SELL, 104.0, 12);
    ob.addOrder(OrderType::SELL, 102.5, 10);
    ob.addOrder(OrderType::SELL, 103.5, 6);
    ob.addOrder(OrderType::SELL, 105.0, 20);
    ob.addOrder(OrderType::SELL, 100.0, 15);
    ob.addOrder(OrderType::SELL, 101.0, 10);
    ob.addOrder(OrderType::SELL, 99.5, 25);
    ob.addOrder(OrderType::SELL, 98.5, 30);
    ob.addOrder(OrderType::SELL, 97.0, 35);
    ob.addOrder(OrderType::SELL, 96.5, 10);
    ob.addOrder(OrderType::SELL, 102.0, 7);
    ob.addOrder(OrderType::SELL, 100.5, 13);
    ob.addOrder(OrderType::SELL, 99.0, 18);
    ob.addOrder(OrderType::SELL, 95.5, 50);

    // Mixed orders for matching
    ob.addOrder(OrderType::BUY, 98.0, 40);
    ob.addOrder(OrderType::BUY, 99.0, 30);
    ob.addOrder(OrderType::SELL, 98.0, 20);
    ob.addOrder(OrderType::SELL, 99.0, 15);
    ob.addOrder(OrderType::BUY, 100.0, 25);
    ob.addOrder(OrderType::SELL, 100.0, 10);
    ob.addOrder(OrderType::BUY, 101.0, 5);
    ob.addOrder(OrderType::SELL, 101.0, 5);
    ob.addOrder(OrderType::BUY, 102.0, 3);
    ob.addOrder(OrderType::SELL, 102.0, 2);
    ob.addOrder(OrderType::BUY, 97.5, 60);
    ob.addOrder(OrderType::SELL, 97.5, 10);

    // Print the full order book
    ob.printOrderBook();

    return 0;
}
