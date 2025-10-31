import {Gender} from "./Gender";

export class AddressData {

  constructor(public gender: Gender,
              public name: string,
              public surname: string,
              public street: string,
              public number: string,
              public zip: string,
              public city: string,
              public region: string,
              public state: string) {}
}