#include <FOKOrder.h>

namespace MatchingEngine
{
    FOKOrder::FOKOrder(int orderId, double price, int quantity)
        : Order(orderId, OrderType::FOK, price, quantity) {}
    
    void execute(OrderBook* orderBook) 
    {
        // Implement Logic
    }
}