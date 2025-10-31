from Address import Address
from AddressData import AddressData


class AddressBuilder:
    def __init__(self, address_data: AddressData):
        self.address_Data = address_data
        self.address = Address("")
        self.title_f = ""
        self.title_m = ""

    def get_address(self) -> Address:
        return self.address

    def build_line1(self) -> None:
        title = ""
        if self.address_Data.gender == "m":
            title = self.title_m
        elif self.address_Data.gender == "f":
            title = self.title_f
        # other cases empty string
        self.address.add_line(title + " " + self.address_Data.surname + " " + self.address_Data.name + "\n")

    def build_line2(self) -> None:
        self.address.add_line(self.address_Data.number + " " + self.address_Data.street + "\n")

    def build_line3(self) -> None:
        pass
    def build_line4(self) -> None:
        self.address.add_line(self.address_Data.state)

    def build_line5(self) -> None:
        pass
    def build_line6(self) -> None:
        pass

