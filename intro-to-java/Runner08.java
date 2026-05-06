abstract class Polygon {
    int numSides;
    

    public Polygon(int numSides){
        this.numSides = numSides;
    }

    public abstract double getArea();
}

class Rectangle extends Polygon {
    public Rectangle() {
        super(4);
    }

    double length;
    double width;
    
    public void setSides(double length, double width) {
        this.length = length;
        this.width = width;
    }
    @Override 
    public double getArea() {
        return this.length * this.width;
    }
}

public class Runner08 {
    
    public static void main(String args[]) {
        //Polygon p = new Polygon(3); 
        //System.out.println("area of polygon: " + p.getArea());
        Rectangle r = new Rectangle();
        r.setSides(4,4);
        Polygon r = new Rectangle();
        System.out.println("Area of rect: " + r.getArea());
    }
}
