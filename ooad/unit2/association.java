package ooad.unit2;

// Cricket Association class
class CricketAssociation {
    // attributes
    private String name;

    // constructor of class
    CricketAssociation(String name) {
        this.name = name;
    }

    // method of CA class
    public String getName() {
        return this.name;
    }
}

// Employee class
class Employee {
    // attributes
    private String name;

    // constructor of class
    Employee(String name) {
        this.name = name;
    }

    // method of Employee class
    public String getName() {
        return this.name;
    }
}

class Association {
    public static void main(String[] args) {
        // creating objects of classes
        CricketAssociation ca = new CricketAssociation("BCCI");
        Employee e1 = new Employee("Ganduly");
        // print name and association of employee
        System.out.println(e1.getName() + " is employee of " + ca.getName());
    }
}