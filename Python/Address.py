class Address:
    def __init__(self, address: str = ""):
        self._formattedAddress = address

    @property
    def formatted_address(self) -> str:
        return self._formattedAddress

    def add_line(self, line: str) -> None:
        self._formattedAddress += line
