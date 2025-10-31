public class GBAddressBuilder extends AddressBuilder {

    public GBAddressBuilder(AddressData addressData) {
        super(addressData);
        titleF = "Ms";
        titleM = "Mr";
    }

    @Override
    public void buildLine3(){
        address.addLine(addressData.city() + "\n");
    }

    @Override
    public void buildLine4(){
        address.addLine(addressData.zip() + "\n");
    }

    @Override
    public void buildLine5(){
        address.addLine(addressData.state());
    }
}
