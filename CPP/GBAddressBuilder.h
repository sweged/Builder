//
// Created by Nutzer on 22.08.2025.
//

#pragma once

#include "AddressBuilder.h"

class GBAddressBuilder : public AddressBuilder{

public:
    void buildLine3() override;
    void buildLine4() override;
    void buildLine5() override;
    explicit GBAddressBuilder(const address::AddressData& address_data);
};
