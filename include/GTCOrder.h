#pragma once
#ifndef GTCOrder_h 
#define GTCOrder_h

#include <MatchingEngineEnums.h>
#include <Order.h>

namespace MatchingEngine
{
    class GTCOrder : public Order {
    public:
        GTCOrder(int orderId, double price, int quantity);

        void execute() override;
    };
}

#endif