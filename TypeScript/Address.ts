export class Address {
  private formattedAddress : string = "";

  getFormattedAddress(): string {
    return this.formattedAddress;
  }

  addLine(line: string): void {
    this.formattedAddress += line;
  }
}