#pragma once
#ifndef Order_h 
#define Order_h

#include <MatchingEngineEnums.h>

namespace MatchingEngine
{
    class Order {
    public:
        Order(int orderId, OrderType type, double price, int quantity);
        virtual void execute() = 0;

        void cancel();

        int orderId;
        OrderType type;
        double price;
        int quantity;
        OrderStatus status;
    };
}

#endif