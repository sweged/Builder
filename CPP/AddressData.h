//
// Created by Nutzer on 22.08.2025.
//

#pragma once

namespace address {
    struct AddressData {
        char gender;
        std::string name;
        std::string surname;
        std::string street;
        std::string number;
        std::string zip;
        std::string city;
        std::string region;
        std::string state;

        AddressData() = default;
    };
}
