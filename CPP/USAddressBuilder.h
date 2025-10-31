//
// Created by Nutzer on 22.08.2025.
//

#pragma once

#include "AddressBuilder.h"


class USAddressBuilder : public AddressBuilder{

public:
    void buildLine3() override;
    explicit USAddressBuilder(const address::AddressData& address_data);
};
