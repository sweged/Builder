//
// Created by Nutzer on 22.08.2025.
//

#pragma once

#include "AddressBuilder.h"


class GermanAddressBuilder : public AddressBuilder{
public:

    void buildLine2() override;
    void buildLine3() override;

    explicit GermanAddressBuilder(const address::AddressData& address_data);
};
