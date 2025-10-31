public class FrenchAddressBuilder extends AddressBuilder {

    public FrenchAddressBuilder(AddressData addressData) {
        super(addressData);
        titleF = "Madame";
        titleM = "Monsieur";
    }

    @Override
    public void buildLine3(){
        address.addLine(addressData.zip() + " " + addressData.city() + "\n");
    }
}
