#pragma once
#ifndef OrderBook_h
#define OrderBook_h

#include <Order.h>
#include <queue>

namespace MatchingEngine
{
    // Order Book
    class OrderBook {
    public:
        // Function to add an order to the order book
        void addOrder(Order* order);

        // Function to match orders and execute trades
        void matchOrders();

        // Function to output the current state of the order book
        void printOrderBook();

    private:
        std::priority_queue<Order*, std::vector<Order*>, CompareOrder> buyQueue;
        std::priority_queue<Order*, std::vector<Order*>, CompareOrder> sellQueue;
    };

    struct CompareOrder {
    bool operator()(const Order* lhs, const Order* rhs) const; {
        // Comparison logic for Limit Orders
    }
};
}

#endif
