using System.Text;

namespace Builder_C_Sharp;

public class Address
{
    private StringBuilder _formattedAddress = new StringBuilder("");

    public string FormattedAddress => _formattedAddress.ToString();

    public void AddLine(string line){
        _formattedAddress.Append(line);
    }
}