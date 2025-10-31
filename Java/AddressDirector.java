public class AddressDirector {
    private AddressBuilder addressBuilder;

    public AddressDirector(AddressBuilder addressBuilder) {
        this.addressBuilder = addressBuilder;
    }

    public void buildAddress(){
        addressBuilder.buildLine1();
        addressBuilder.buildLine2();
        addressBuilder.buildLine3();
        addressBuilder.buildLine4();
        addressBuilder.buildLine5();
        addressBuilder.buildLine6();
    }
}
