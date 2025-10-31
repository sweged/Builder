//
// Created by Nutzer on 22.08.2025.
//

#pragma once

#include <memory>

#include "AddressBuilder.h"


class AddressDirector {
public:
    explicit AddressDirector(std::shared_ptr<AddressBuilder> address_builder);

    void buildAddress();

private:
    std::shared_ptr<AddressBuilder> addressBuilder;
};
