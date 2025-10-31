namespace Builder_C_Sharp;

public class USAddressBuilder : AddressBuilder
{
    public USAddressBuilder(AddressData addressData) : base(addressData)
    {
        TitleF = "Ms";
        TitleM = "Mr";
    }

    public override void BuildLine3(){
        Address.AddLine(AddressData.City + ", " + AddressData.Region + " " + AddressData.Zip + Environment.NewLine);
    }
}