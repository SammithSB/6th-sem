
public class SingleObject {
    // create a single onject
    private static SingleObject instance = new SingleObject();

    // make construtor private wo this class cannot be instantiated
    private SingleObject() {
    }

    // get the only object available
    public static SingleObject getInstance() {
        return instance;
    }

    public void showMessage() {
        System.out.println("Hello World");
    }

}