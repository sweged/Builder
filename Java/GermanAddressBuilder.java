public class GermanAddressBuilder extends AddressBuilder {

    public GermanAddressBuilder(AddressData addressData) {
        super(addressData);
        titleF = "Frau";
        titleM = "Herrn";
    }

    @Override
    public void buildLine2(){
        address.addLine(addressData.street() + " " + addressData.number() + "\n");
    }

    @Override
    public void buildLine3(){
        address.addLine(addressData.zip() + " " + addressData.city() + "\n");
    }
}
