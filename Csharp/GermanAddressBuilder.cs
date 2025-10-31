namespace Builder_C_Sharp;

public class GermanAddressBuilder : AddressBuilder
{
    public GermanAddressBuilder(AddressData addressData) : base(addressData)
    {
        TitleF = "Frau";
        TitleM = "Herrn";
    }

    public override void BuildLine2(){
        Address.AddLine(AddressData.Street + " " + AddressData.Number + Environment.NewLine);
    }

    public override void BuildLine3(){
        Address.AddLine(AddressData.Zip + " " + AddressData.City + Environment.NewLine);
    }
}