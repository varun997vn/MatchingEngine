#include <OrderBook.h>

namespace MatchingEngine
{
    void OrderBook::addOrder(Order* order) {
        // Add order to the appropriate priority queue
    }

        // Function to match orders and execute trades
    void OrderBook::matchOrders() {
        // Matching logic
    }

    // Function to output the current state of the order book
    void OrderBook::printOrderBook() {
        // Output the current state of the priority queues
    }
        

    bool CompareOrder::operator()(const Order* lhs, const Order* rhs) const {
        // Comparison logic for Limit Orders
    }
}