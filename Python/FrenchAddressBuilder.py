from AddressBuilder import AddressBuilder
from AddressData import AddressData


class FrenchAddressBuilder(AddressBuilder):
    def __init__(self, address_data: AddressData):
        super().__init__(address_data)
        self.title_f = "Madame"
        self.title_m = "Monsieur"

    def build_line3(self) -> None:
        self.address.add_line(self.address_Data.zip + " " + self.address_Data.city + "\n")
