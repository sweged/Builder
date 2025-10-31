namespace Builder_C_Sharp;

public class FrenchAddressBuilder : AddressBuilder
{
    public FrenchAddressBuilder(AddressData addressData) : base(addressData)
    {
        TitleF = "Madame";
        TitleM = "Monsieur";
    }

    public override void BuildLine3(){
        Address.AddLine(AddressData.Zip + " " + AddressData.City + Environment.NewLine);
    }
}