//
// Created by Nutzer on 22.08.2025.
//

#include "GBAddressBuilder.h"

void GBAddressBuilder::buildLine3() {
    address.addLine(addressData.city + "\n");
}

void GBAddressBuilder::buildLine4() {
    address.addLine(addressData.zip + "\n");
}

void GBAddressBuilder::buildLine5() {
    address.addLine(addressData.state);
}

GBAddressBuilder::GBAddressBuilder(const address::AddressData& address_data)
    :AddressBuilder(address_data){
    title_f = "Ms";
    title_m = "Mr";
}