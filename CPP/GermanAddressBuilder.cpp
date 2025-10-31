//
// Created by Nutzer on 22.08.2025.
//
#include "GermanAddressBuilder.h"
#include <string>

void GermanAddressBuilder::buildLine2() {
    address.addLine(addressData.street + " " + addressData.number + "\n");
}

void GermanAddressBuilder::buildLine3() {
    address.addLine(addressData.zip + " " + addressData.city + "\n");
}

GermanAddressBuilder::GermanAddressBuilder(const address::AddressData& address_data)
    : AddressBuilder(address_data) {
    title_f = "Frau";
    title_m = "Herrn";
}
