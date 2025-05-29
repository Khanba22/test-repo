// package constructors;

class TestConstructor {
    int a, b;
    
    TestConstructor() {
        a = 10;
        b = 20;
    }
    
    TestConstructor(int i, int j) {
        this();
        // this.a = i;
        // this.b = j;
    }
}

public class Constructor {
    public static void main(String[] args) {
        TestConstructor t1 = new TestConstructor(100, 200);
        System.out.println(t1.a + " " + t1.b);
    }
}