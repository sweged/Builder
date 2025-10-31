import {AddressData} from './AddressData';
import {Address} from './Address';
import { Gender } from './Gender';

export class AddressBuilder {
  protected addressData: AddressData;
  protected address: Address = new Address();
  protected title_f: string = "";
  protected title_m: string = "";

  buildLine1(): void {
    let title : string = '';
    switch (this.addressData.gender) {
      case Gender.MALE:
        title = this.title_m;
        break;
      case Gender.FEMALE:
        title = this.title_f;
        break;
      // other cases empty string
    }
    this.address.addLine(title + ' ' + this.addressData.surname + ' ' + this.addressData.name + '\n');
  }
  buildLine2(): void {
    this.address.addLine(this.addressData.number + " " + this.addressData.street + "\n");
  }
  buildLine3(): void {}
  buildLine4(): void {
    this.address.addLine(this.addressData.state);
  }
  buildLine5(): void {}
  buildLine6(): void {}
  buildLine7(): void {}
  buildLine8(): void {}

  constructor(addressData: AddressData) {
    this.addressData = addressData;
  }

  getAddress(): Address {
    return this.address;
  }
}