package ooad.unit2;

class Test<U, V> {
    U obj1;
    V obj2;

    Test(U obj1, V obj2) {
        this.obj1 = obj1;
        this.obj2 = obj2;
    }

    public void print() {
        System.out.println(obj1 + " " + obj2);
    }
}

public class multiGenericClass {
    public static void main(String[] args) {
        Test<Integer, String> t = new Test<Integer, String>(18, "Virat Kohli");
        t.print();
    }
}
