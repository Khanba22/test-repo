package constructors;


class TestConstructor{
    int a,b;
    TestConstructor(){
        a=10;
        b=20;
    }
    TestConstructor(int i,int j){
        this.a=i;
        this.b=j;
        this();
    }
}

public class Contructor {
    public static void main(String[] args) {
        TestConstructor t1=new TestConstructor(100,200);
        // This will print 10 20
        System.out.println(t1.a+" "+t1.b);
    }
}
