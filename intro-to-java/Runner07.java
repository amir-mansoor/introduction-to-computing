class Polygon {
    int numSides;

    public Polygon() {
        this.numSides = 0;
    }

    public Polygon(int numSides) {
        this.numSides = numSides;
    }

    public double getArea() {
        return 0.0; // No idea how to calculate this
    }
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
    

    // overriding
    @Override
    public double getArea() { // change the name to get error
        return this.length * this.width;
    }
}

public class Runner07 {
    public static void main(String args[]) {
        Polygon p = new Polygon(4);
        System.out.println("Area of polygon: " + p.getArea());
    
        Rectangle r = new Rectangle();
        System.out.println("numSides in rectangle: " + r.numSides);
        r.setSides(4,4);

        System.out.println("Area of rectangle: " + r.getArea());
    }
}
