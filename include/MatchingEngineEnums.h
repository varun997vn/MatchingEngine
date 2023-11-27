#pragma once

#ifndef MatchingEngineEnums_h 
#define MatchingEngineEnums_h
 
namespace MatchingEngine
{
    // Order Types
    enum class OrderType {
        LIMIT,
        MARKET,
        IOC,
        FOK,
        GTC
    };

    // Order Status
    enum class OrderStatus {
        PENDING,
        EXECUTED,
        CANCELLED
    };
}

#endif