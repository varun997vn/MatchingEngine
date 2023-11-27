#pragma once
#ifndef FOKOrder_h 
#define FOKOrder_h

#include <MatchingEngineEnums.h>
#include <Order.h>

namespace MatchingEngine
{
    class FOKOrder : public Order {
    public:
        FOKOrder(int orderId, double price, int quantity);

        void execute() override;
    };
}

#endif