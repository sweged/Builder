public class Address {
    private StringBuilder formattedAddress = new StringBuilder("");

    public String getFormattedAddress() {
        return formattedAddress.toString();
    }

    public void addLine(String line){
        formattedAddress.append(line);
    }
}
