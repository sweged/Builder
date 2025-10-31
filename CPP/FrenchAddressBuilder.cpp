//
// Created by Nutzer on 22.08.2025.
//

#include "FrenchAddressBuilder.h"

void FrenchAddressBuilder::buildLine3() {
    address.addLine(addressData.zip + " " + addressData.city + "\n");
}

FrenchAddressBuilder::FrenchAddressBuilder(const address::AddressData& address_data)
    :AddressBuilder(address_data){
    title_f = "Madame";
    title_m = "Monsieur";
}