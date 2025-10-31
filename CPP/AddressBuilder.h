//
// Created by Nutzer on 22.08.2025.
//

#pragma once

#include "Address.h"
#include "AddressData.h"
#include <string>


class AddressBuilder {
public:
    virtual void buildLine1();
    virtual void buildLine2();
    virtual void buildLine3();
    virtual void buildLine4();
    virtual void buildLine5();
    virtual void buildLine6();
    Address getAddress();

    AddressBuilder(const address::AddressData& address_data);

protected:
    address::AddressData addressData;
    Address address;
    std::string title_f = "";
    std::string title_m = "";
};
