package ooad.unit2;

public class genericFunction {
    static <T> void genericDisplay(T element) {
        System.out.println(element.getClass().getName() + " = " + element);
    }

    public static void main(String[] args) {
        genericDisplay(11);
        genericDisplay("Virat Kohli");
        genericDisplay(59.8);
    }
}
