from AddressBuilder import AddressBuilder
from AddressData import AddressData


class USAddressBuilder(AddressBuilder):
    def __init__(self, address_data: AddressData):
        super().__init__(address_data)
        self.title_f = "Ms"
        self.title_m = "Mr"

    def build_line3(self) -> None:
        self.address.add_line(self.address_Data.city + ", " + self.address_Data.region + " " + self.address_Data.zip + "\n")
