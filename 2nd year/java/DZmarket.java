/*

Name Tito Hailu
ID 14,159/19

 */

//Question Number 1
class House{

    private int houseNumber;
    private String City;
    private String Owner;

    int getHouNum(){
        return houseNumber;
    }
    String getCity(){
        return City;
    }

    String getOwner(){
        return Owner;
    }

    House(int HN, String C ){
        this.houseNumber = HN;
        this.City = C;
    }

    House(int HN, String C, String O){
        this.houseNumber = HN;
        this.City = C;
        this.Owner = O;
    }

}

//Question Number 2
class VilaHouse extends House{
    VilaHouse(int VHN, String VC, String VO){
    super(VHN, VC, VO);
    }
}

//Question Number 3
class GoverHouse extends House{
    String Gowner;
    
    String getGowner(){
    
    return Gowner;
    }
    
    GoverHouse(int GHN, String GC){
    super(GHN, GC);
    }
}

//Question Number 4
class Market{
    double Price = 5.5;
    String Product;
    int Quantity;

    Market(String Prod, int Quan){
    this.Product = Prod;
    this.Quantity = Quan;
    }

    double getprice(){
        return this.Price;
    }

    String getProd(){
        return this.Product;
    }

    int getQual(){
        return this.Quantity;
    }

    double calcTotal(){
        this.Price = this.Price * this.Quantity;
        return this.Price;
    }
  }

public class DZmarket{

    public static void main(String [] args){
        Market DZ = new Market("Orange", 12);
        double total = DZ.calcTotal();
        System.out.println(total);
    }
}
