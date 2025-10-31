public class USAddressBuilder extends AddressBuilder {

    public USAddressBuilder(AddressData addressData) {
        super(addressData);
        titleF = "Ms";
        titleM = "Mr";
    }

        @Override
        public void buildLine3(){
        address.addLine(addressData.city() + ", " + addressData.region() + " " + addressData.zip() + "\n");
    }
}
