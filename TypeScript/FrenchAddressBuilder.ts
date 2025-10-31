import { AddressBuilder } from './AddressBuilder';
import { AddressData } from './AddressData';

export class FrenchAddressBuilder extends AddressBuilder{

  buildLine3() : void {
    this.address.addLine(this.addressData.zip + " " + this.addressData.city + "\n");
  }

    constructor(addressData: AddressData) {
    super(addressData);
    this.title_f = "Madame";
    this.title_m = "Monsieur";
  }
}