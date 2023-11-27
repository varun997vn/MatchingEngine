#pragma once
#ifndef LimitOrder_h 
#define LimitOrder_h

#include <MatchingEngineEnums.h>
#include <Order.h>

namespace MatchingEngine
{
    class LimitOrder : public Order {
    public:
        LimitOrder(int orderId, double price, int quantity);

        void execute() override;
    };
}

#endif