#include <iostream>
#include <vector>

#include "AddressBuilder.h"
#include "AddressData.h"
#include "AddressDirector.h"
#include "FrenchAddressBuilder.h"
#include "GBAddressBuilder.h"
#include "GermanAddressBuilder.h"
#include "USAddressBuilder.h"

int main() {

    address::AddressData address_data;
    address_data.gender = 'm';
    address_data.name = "Hagel";
    address_data.surname = "Georg";
    address_data.street = "Mainstreet";
    address_data.number = "123a";
    address_data.zip = "4321";
    address_data.city = "Munich";
    address_data.region = "Bavaria";
    address_data.state = "GERMANY";

    std::vector<std::shared_ptr<AddressBuilder>> address_builders;
    address_builders.emplace_back(std::make_shared<GermanAddressBuilder>(address_data));
    address_builders.emplace_back(std::make_shared<FrenchAddressBuilder>(address_data));
    address_builders.emplace_back(std::make_shared<USAddressBuilder>(address_data));
    address_builders.emplace_back(std::make_shared<GBAddressBuilder>(address_data));

    for (const auto address_builder : address_builders) {
        std::cout << std::endl;
        AddressDirector address_director(address_builder);
        address_director.buildAddress();
        std::cout << address_builder->getAddress().getFormattedAddress() << std::endl;
    }

    return 0;
}

/*int main() {

    address::AddressData address_data;
    address_data.gender = 'm';
    address_data.name = "Hagel";
    address_data.surname = "Georg";
    address_data.street = "Mainstreet";
    address_data.number = "123a";
    address_data.zip = "4321";
    address_data.city = "Munich";
    address_data.region = "Bavaria";
    address_data.state = "GERMANY";

    std::shared_ptr<GermanAddressBuilder> germanAddressBuilder = std::make_shared<GermanAddressBuilder>(address_data);

    AddressDirector address_director(germanAddressBuilder);

    address_director.buildAddress();

    std::cout << germanAddressBuilder->getAddress().getFormattedAddress() << std::endl;

    return 0;
}*/