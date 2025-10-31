from AddressData import AddressData
from AddressDirector import AddressDirector
from FrenchAddressBuilder import FrenchAddressBuilder
from GBAddressBuilder import GBAddressBuilder
from GermanAddressBuilder import GermanAddressBuilder
from USAddressBuilder import USAddressBuilder


class Main:
    def __init__(self):pass
    def main(self):
        address_data = AddressData(
            "m",
            "Hagel",
            "Georg",
            "Mainstreet",
            "123a",
            "4321",
            "Munich",
            "Bavaria",
            "GERMANY"
        )

        address_builders = [
            GermanAddressBuilder(address_data),
            FrenchAddressBuilder(address_data),
            USAddressBuilder(address_data),
            GBAddressBuilder(address_data)
        ]

        for address_builder in address_builders:
            print()
            address_director = AddressDirector(address_builder)
            address_director.build_address()
            print(address_builder.get_address().formatted_address)

m = Main()
m.main()
