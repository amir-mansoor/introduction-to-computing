public class Animal05 {
    int legs = 5;

    public int getLegs() { // make this private
        return this.legs;
    }
    
    public void printLegCount(String msg) {
        System.out.println(msg + ":" + getLegs());
    }

    public static void main(String args[]) {
      Animal05 a = new Animal05();
      a.printLegCount("Legs are");

      a.legs += 1;
      a.printLegCount("Legs are");
    }
}
