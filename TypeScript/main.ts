import {AddressData} from './AddressData';
import { Gender } from './Gender';
import { AddressBuilder } from './AddressBuilder';
import { GermanAddressBuilder } from './GermanAddressBuilder';
import { AddressDirector } from './AddressDirector';
import { FrenchAddressBuilder } from './FrenchAddressBuilder';
import { USAddressBuilder } from './USAddressBuilder';
import { GBAddressBuilder } from './GBAddressBuilder';

class Main{
  static main():void{

    const addressData : AddressData = new AddressData(
      Gender.MALE,
      'Hagel',
      'Georg',
      "Mainstreet",
      "123a",
      "4321",
      "Munich",
      "Bavaria",
      "GERMANY"
    );

    const addressBuilders : AddressBuilder[] = [
      new GermanAddressBuilder(addressData),
      new FrenchAddressBuilder(addressData),
      new USAddressBuilder(addressData),
      new GBAddressBuilder(addressData)
    ]

    for (const addressBuilder of addressBuilders){
      const addressDirector : AddressDirector = new AddressDirector(addressBuilder);
      addressDirector.buildAddress();
      console.log(addressBuilder.getAddress().getFormattedAddress());
      console.log();
    }
  }
}
Main.main();