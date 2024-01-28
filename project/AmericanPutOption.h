#pragma once
#include "AmericanOption.h"

class AmericanPutOption : public AmericanOption {
private:
    double _strikePrice; 

public:
    AmericanPutOption(double expiry, double strikePrice);
    virtual double payoff(double spotPrice) const override;
};
