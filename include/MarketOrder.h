#pragma once
#ifndef MarketOrder_h 
#define MarketOrder_h

#include <MatchingEngineEnums.h>
#include <Order.h>

namespace MatchingEngine
{
    class MarketOrder : public Order {
    public:
        MarketOrder(int orderId, double price, int quantity);

        void execute(OrderBook* orderBook) override;
    };
}

#endif