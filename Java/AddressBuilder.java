public class AddressBuilder {

    protected AddressData addressData;
    protected Address address = new Address();
    protected String titleM = "";
    protected String titleF = "";

    public void buildLine1(){
        // first line often: title surname name
        String title = "";
        switch(addressData.gender()){
            case "m": title = titleM + " "; break;
            case "f": title = titleF + " "; break;
            default: // other cases empty string
        }
        address.addLine(title + addressData.surname() + " " + addressData.name() + "\n");
    }

    public void buildLine2(){
        // second line often: street number
        address.addLine(addressData.number() + " " + addressData.street() + "\n");
    }

    public void buildLine3(){}

    public void buildLine4(){
        // fourth line often: state
        address.addLine(addressData.state());
    }

    public void buildLine5(){}
    public void buildLine6(){}

    public AddressBuilder(AddressData addressData) {
        this.addressData = addressData;
    }

    public Address getAddress() {
        return address;
    }
}
