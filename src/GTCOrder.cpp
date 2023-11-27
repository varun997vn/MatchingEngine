#include <GTCOrder.h>

namespace MatchingEngine
{
    GTCOrder::GTCOrder(int orderId, double price, int quantity)
        : Order(orderId, OrderType::GTC, price, quantity) {}
    
    void execute(OrderBook* orderBook) 
    {
        // Implement Logic
    }
}