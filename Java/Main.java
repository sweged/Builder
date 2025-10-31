import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {

        AddressData addressData = new AddressData(
                    "m",
                    "Hagel",
                    "Georg",
                    "Mainstreet",
                    "123a",
                    "4321",
                    "Munich",
                    "Bavaria",
                    "GERMANY"
        );

        // different address formats
        ArrayList<AddressBuilder> addressBuilders = new ArrayList<>();
        addressBuilders.add(new GermanAddressBuilder(addressData));
        addressBuilders.add(new FrenchAddressBuilder(addressData));
        addressBuilders.add(new USAddressBuilder(addressData));
        addressBuilders.add(new GBAddressBuilder(addressData));

        for (AddressBuilder addressBuilder : addressBuilders) {
            System.out.println();
            AddressDirector addressDirector = new AddressDirector(addressBuilder);
            addressDirector.buildAddress();
            System.out.println(addressBuilder.getAddress().getFormattedAddress());
        }
    }
}