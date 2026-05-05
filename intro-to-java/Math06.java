public class Math06 {
    public double sqrt(int x, double guess) {
        System.out.println("Calculating sqrt of x " + x + " starting with guess " + guess);
        return 1.0;
    }

    // overloaded method -- for default arguments
    
    public double sqrt(int x) {
        double guess = 1.0;
        return sqrt(x, guess);
    }

    public double sqrt(double x) {
        double guess = 1.0;
        System.out.println("Calculating sqrt of x " + x + " starting with guess " + guess);
        return 1.0;
    }
    
    public static void main(String args[]) {
        Math06 m = new Math06();
        m.sqrt(36,4.3);
        m.sqrt(36);
        m.sqrt(36.0);
    }
}
