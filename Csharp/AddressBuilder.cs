namespace Builder_C_Sharp;

public class AddressBuilder
{
    protected AddressData AddressData;
    protected Address Address = new Address();
    protected string TitleM = "";
    protected string TitleF = "";
        

    public virtual void BuildLine1()
    {
        // first line often: title surname name
        var title = "";
        switch(AddressData.Gender){
            case "m": title = TitleM + " "; break;
            case "f": title = TitleF + " "; break;
            default: title = ""; break;
            // other cases empty string
        }
        Address.AddLine(title + AddressData.Surname + " " + AddressData.Name + Environment.NewLine);
    }

    public virtual void BuildLine2()
    {
        // second line often: street number
        Address.AddLine(AddressData.Number + " " + AddressData.Street + Environment.NewLine);
    }
    public virtual void BuildLine3(){}

    public virtual void BuildLine4()
    {
        // fourth line often: state
        Address.AddLine(AddressData.State);
    }
    public virtual void BuildLine5(){}
    public virtual void BuildLine6(){}
    

    public AddressBuilder(AddressData addressData) {
        this.AddressData = addressData;
    }

    public Address GetAddress() {
        return Address;
    }
}