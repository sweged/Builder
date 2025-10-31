

from AddressBuilder import AddressBuilder
from AddressData import AddressData


class GermanAddressBuilder(AddressBuilder):
    def __init__(self, address_data: AddressData):
        super().__init__(address_data)
        self.title_f = "Frau"
        self.title_m = "Herrn"

    def build_line2(self) -> None:
        self.address.add_line(self.address_Data.street + " " + self.address_Data.number + "\n")

    def build_line3(self) -> None:
        self.address.add_line(self.address_Data.zip + " " + self.address_Data.city + "\n")
