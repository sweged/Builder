//
// Created by Nutzer on 22.08.2025.
//

#pragma once

#include "AddressBuilder.h"


class FrenchAddressBuilder : public AddressBuilder{

public:
        void buildLine3() override;
        explicit FrenchAddressBuilder(const address::AddressData& address_data);
};
