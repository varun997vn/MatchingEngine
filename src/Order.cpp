#include <Order.h>

namespace MatchingEngine
{
    Order::Order(int orderId, OrderType type, double price, int quantity) 
        : orderId(orderId), type(type), price(price), quantity(quantity), status(OrderStatus::PENDING) {}
    
    void Order::cancel() 
    {
        status = OrderStatus::CANCELLED;
    }
}
