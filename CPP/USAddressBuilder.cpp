//
// Created by Nutzer on 22.08.2025.
//

#include "USAddressBuilder.h"

void USAddressBuilder::buildLine3() {
    address.addLine(addressData.city + ", " + addressData.region  + " "  + addressData.zip + "\n");
}

USAddressBuilder::USAddressBuilder(const address::AddressData& address_data)
    :AddressBuilder(address_data){
    title_f = "Ms";
    title_m = "Mr";
}