#include <IOCOrder.h>

namespace MatchingEngine
{
    IOCOrder::IOCOrder(int orderId, double price, int quantity)
        : Order(orderId, OrderType::IOC, price, quantity) {}
    
    void execute(OrderBook* orderBook) 
    {
        // Implement Logic
    }
}