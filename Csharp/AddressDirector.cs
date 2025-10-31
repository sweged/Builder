namespace Builder_C_Sharp;

public class AddressDirector
{
    private AddressBuilder _addressBuilder;

    public AddressDirector(AddressBuilder addressBuilder) {
        _addressBuilder = addressBuilder;
    }

    public void BuildAddress(){
        _addressBuilder.BuildLine1();
        _addressBuilder.BuildLine2();
        _addressBuilder.BuildLine3();
        _addressBuilder.BuildLine4();
        _addressBuilder.BuildLine5();
        _addressBuilder.BuildLine6();
    }
}