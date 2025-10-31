//
// Created by Nutzer on 22.08.2025.
//

#include "AddressBuilder.h"

#include <iostream>
#include <utility>

void AddressBuilder::buildLine1() {
    std::string title;
    switch(addressData.gender){
        case 'm': title = title_m; break;
        case 'f': title = title_f; break;
            // other cases empty string
    }
    address.addLine(title + " " + addressData.surname + " " + addressData.name + "\n");
}

void AddressBuilder::buildLine2() {
    address.addLine(addressData.number + " " + addressData.street + "\n");
}

void AddressBuilder::buildLine3() {}

void AddressBuilder::buildLine4() {
    address.addLine(addressData.state);
}

void AddressBuilder::buildLine5() {}
void AddressBuilder::buildLine6() {}

Address AddressBuilder::getAddress() {
    return address;
}

AddressBuilder::AddressBuilder(const address::AddressData& address_data)
    :addressData(address_data){}

