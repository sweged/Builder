import { AddressBuilder } from './AddressBuilder';
import { AddressData } from './AddressData';

export class USAddressBuilder extends AddressBuilder{

  buildLine3() : void {
    this.address.addLine(this.addressData.city + ", " + this.addressData.region + " " + this.addressData.zip + "\n");
  }

  constructor(addressData: AddressData) {
    super(addressData);
    this.title_f = "Ms";
    this.title_m = "Mr";
  }
}