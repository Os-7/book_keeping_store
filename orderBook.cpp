#include "OrderBook.hpp"

void OrderBook::addOrder(OrderType type, double price, int quantity) {
    Order order(nextOrderId++, type, price, quantity);
    
    if (type == OrderType::BUY) {
        buyOrders[price].push(order);
    } else {
        sellOrders[price].push(order);
    }

    matchOrders();
}

void OrderBook::matchOrders() {
    while (!buyOrders.empty() && !sellOrders.empty()) {
        auto highestBuy = buyOrders.rbegin();
        auto lowestSell = sellOrders.begin();

        if (highestBuy->first >= lowestSell->first) {
            Order& buyOrder = highestBuy->second.front();
            Order& sellOrder = lowestSell->second.front();

            int tradeQty = std::min(buyOrder.quantity, sellOrder.quantity);
            std::cout << "Trade executed: "
                      << "Buy ID " << buyOrder.id << " <--> "
                      << "Sell ID " << sellOrder.id << " | Qty: " 
                      << tradeQty << " @ Price: " << sellOrder.price << "\n";

            buyOrder.quantity -= tradeQty;
            sellOrder.quantity -= tradeQty;

            if (buyOrder.quantity == 0) highestBuy->second.pop();
            if (sellOrder.quantity == 0) lowestSell->second.pop();

            if (highestBuy->second.empty()) buyOrders.erase(highestBuy->first);
            if (lowestSell->second.empty()) sellOrders.erase(lowestSell->first);
        } else {
            break; // No more matches possible
        }
    }
}

void OrderBook::printOrderBook() {
    std::cout << "\n=== Order Book ===\n";
    std::cout << "SELL Orders:\n";
    for (auto it = sellOrders.begin(); it != sellOrders.end(); ++it) {
        double price = it->first;
        auto& q = it->second;
        std::cout << price << " -> " << q.size() << " order(s)\n";
    }

    std::cout << "BUY Orders:\n";
    for (auto it = buyOrders.rbegin(); it != buyOrders.rend(); ++it) {
        double price = it->first;
        auto& q = it->second;
        std::cout << price << " -> " << q.size() << " order(s)\n";
    }

    std::cout << "==================\n";
}

