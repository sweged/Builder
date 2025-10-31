import { AddressBuilder } from './AddressBuilder';
import { AddressData } from './AddressData';

export class GermanAddressBuilder extends AddressBuilder{

  buildLine2() : void {
    this.address.addLine(this.addressData.street + " " + this.addressData.number + "\n");
  }

  buildLine3() : void {
    this.address.addLine(this.addressData.zip + " " + this.addressData.city + "\n");
  }

  constructor(addressData: AddressData) {
    super(addressData);
    this.title_f = "Frau";
    this.title_m = "Herrn";
  }
}