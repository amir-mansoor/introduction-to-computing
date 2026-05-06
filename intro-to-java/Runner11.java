import java.util.Vector; // import vector class from java.util package

public class Runner11 {

    public void intVectorTest() {

        Vector vi = new Vector();
        vi.add(4);
        vi.add(5);
        vi.add("Something");

        printVector(vi);
   
        System.out.println(vi);
    }

    void printVector(Vector v) {
        for(int i = 0; i < v.size(); i++) {
            System.out.println(v.get(i));
        }
    }


    // comment the first function intVectorTest to get rid of the warning
    public void stringVectorTest() {
        Vector<String> vs = new Vector<String>();
        vs.add("Helloworld");
        vs.add("first");
        vs.add("second");

        System.out.println(vs);
    }

    public static void main(String args[]) {
        Runner11 r = new Runner11();
        //r.intVectorTest();
        r.stringVectorTest();
    }
}
