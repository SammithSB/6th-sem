
public class SingletonPatternDemo {
    public static void main(String[] args) {
        // illegal construct
        // SingleObject object = new SingleObject();
        // get the only object available
        SingleObject singleton = SingleObject.getInstance();
        singleton.showMessage();
    }
}
