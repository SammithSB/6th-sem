package ooad.unit2;

public class roomtest {
    public static void main(String[] args) {
        Room r1 = new Room();
        r1.rotatefan();
        Room r2 = new Room(new threebladefan());
        r2.rotatefan();
    }
}

class Room {
    private fan f;

    Room() {
        f = new threebladefan();
    }

    Room(fan f) {
        this.f = f;
    }

    void rotatefan() {
        f.rotate();
    }
}

class fan {
    void rotate() {
        System.out.println("fan rotated");
    }
}

class threebladefan extends fan {
    void rotate() {
        System.out.println("threebladefan rotated");
    }
}
