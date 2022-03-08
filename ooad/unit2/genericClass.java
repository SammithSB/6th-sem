package ooad.unit2;

class Test<T> {
    T obj;

    Test(T obj) {
        this.obj = obj;
    }

    T getObj() {
        return obj;
    }
}

public class genericClass {
    public static void main(String[] args) {
        Test<Integer> iobj = new Test<Integer>(18);
        System.out.println(iobj.getObj());
        Test<String> sobj = new Test<String>("Virat Kohli");
        System.out.println(sobj.getObj());
    }

}
