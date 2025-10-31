namespace Builder_C_Sharp;

public class Program
{
    static void Main(string[] args)
    {
        var addressData = new AddressData(
            "m",
            "Hagel",
            "Georg",
            "Mainstreet",
            "123a",
            "4321",
            "Munich",
            "Bavaria",
            "GERMANY"
        );
        
        var addressBuilders = new List<AddressBuilder>()
        {
            new GermanAddressBuilder(addressData),
            new FrenchAddressBuilder(addressData),
            new USAddressBuilder(addressData),
            new GBAddressBuilder(addressData)
        };
        
        foreach(var addressBuilder in addressBuilders)
        {
            Console.WriteLine();
            AddressDirector addressDirector = new AddressDirector(addressBuilder);
            addressDirector.BuildAddress();
            Console.WriteLine(addressBuilder.GetAddress().FormattedAddress);
        }
    }
}