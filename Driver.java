interface Fly {
    void fly();

    void makeSound();
}

abstract class Bird implements Fly {
    int size = 0;
    int height;
    int weight;

    @Override
    public void makeSound() {
        System.out.println("Quack Quack");
    }

    public int getHeight() {
        return height;
    }

    public int getSize() {
        return size;
    }

    public int getWeight() {
        return weight;
    }

    public void setHeight(int height) {
        this.height = height;
    }

    public void setSize(int size) {
        this.size = size;
    }

    @Override
    public void fly() {
        System.out.println("Bird Is Flying");
    }

}

class Sparrow extends Bird {
    @Override
    public void fly() {
        System.out.println("Sparrow Is Flying");
    }
}

public class Driver {
    public static void main(String[] args) {
        Bird b = new Sparrow();
        b.fly();
    }
}
