#pragma once
#ifndef IOCOrder_h 
#define IOCOrder_h

#include <MatchingEngineEnums.h>
#include <Order.h>

namespace MatchingEngine
{
    class IOCOrder : public Order {
    public:
        IOCOrder(int orderId, double price, int quantity);

        void execute() override;
    };
}

#endif