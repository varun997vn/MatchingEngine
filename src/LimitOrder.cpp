#include <LimitOrder.h>

namespace MatchingEngine
{
    LimitOrder::LimitOrder(int orderId, double price, int quantity)
        : Order(orderId, OrderType::LIMIT, price, quantity) {}
    
    void execute() 
    {
        // Implement Logic
    }
}