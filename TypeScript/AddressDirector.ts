import { AddressBuilder } from './AddressBuilder';

export class AddressDirector {

  constructor(private readonly addressBuilder : AddressBuilder) {}

  buildAddress() : void {
    this.addressBuilder.buildLine1();
    this.addressBuilder.buildLine2();
    this.addressBuilder.buildLine3();
    this.addressBuilder.buildLine4();
    this.addressBuilder.buildLine5();
    this.addressBuilder.buildLine6();
    this.addressBuilder.buildLine7();
    this.addressBuilder.buildLine8();
  }
}