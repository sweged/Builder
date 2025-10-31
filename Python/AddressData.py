from dataclasses import dataclass

@dataclass
class AddressData:
    gender:str
    name:str
    surname:str
    street:str
    number:str
    zip:str
    city:str
    region:str
    state:str