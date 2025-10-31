namespace Builder_C_Sharp;

public class GBAddressBuilder : AddressBuilder
{
    public GBAddressBuilder(AddressData addressData) : base(addressData)
    {
        TitleF = "Ms";
        TitleM = "Mr";
    }

    public override void BuildLine3(){
        Address.AddLine(AddressData.City + Environment.NewLine);
    }

    public override void BuildLine4(){
        Address.AddLine(AddressData.Zip + Environment.NewLine);
    }
    
    public override void BuildLine5(){
        Address.AddLine(AddressData.State);
    }
}