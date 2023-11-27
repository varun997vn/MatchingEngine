#include <MarketOrder.h>

namespace MatchingEngine
{
    MarketOrder::MarketOrder(int orderId, double price, int quantity)
        : Order(orderId, OrderType::MARKET, price, quantity) {}
    
    void execute() 
    {
        // Implement Logic
    }
}