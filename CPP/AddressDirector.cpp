//
// Created by Nutzer on 22.08.2025.
//

#include "AddressDirector.h"

AddressDirector::AddressDirector(std::shared_ptr<AddressBuilder> address_builder):
addressBuilder(std::move(address_builder)){
}

void AddressDirector::buildAddress() {
    addressBuilder->buildLine1();
    addressBuilder->buildLine2();
    addressBuilder->buildLine3();
    addressBuilder->buildLine4();
    addressBuilder->buildLine5();
    addressBuilder->buildLine6();
}
