import { AddressBuilder } from './AddressBuilder';
import { AddressData } from './AddressData';

export class GBAddressBuilder extends AddressBuilder{

  buildLine3() : void {
    this.address.addLine(this.addressData.city + "\n");
  }

  buildLine4() : void {
    this.address.addLine(this.addressData.zip + "\n");
  }

  buildLine5() : void {
    this.address.addLine(this.addressData.state);
  }

  constructor(addressData: AddressData) {
    super(addressData);
    this.title_f = "Ms";
    this.title_m = "Mr";
  }
}