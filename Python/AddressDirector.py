from AddressBuilder import AddressBuilder


class AddressDirector:
    def __init__(self, address_builder: AddressBuilder):
        self.address_builder = address_builder

    def build_address(self) -> None:
        for method in [
            self.address_builder.build_line1,
            self.address_builder.build_line2,
            self.address_builder.build_line3,
            self.address_builder.build_line4,
            self.address_builder.build_line5,
            self.address_builder.build_line6,
            ]:
            method()



