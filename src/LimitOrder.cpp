#include <LimitOrder.h>

namespace MatchingEngine
{
    LimitOrder::LimitOrder(int orderId, double price, int quantity)
        : Order(orderId, OrderType::LIMIT, price, quantity) {}
    
    void execute(OrderBook* orderBook) 
    {
        // Implement Logic
    }
}