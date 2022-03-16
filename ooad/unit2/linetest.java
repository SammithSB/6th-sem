package ooad.unit2;

class Point {
    private int x, y;

    Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    void disp() {
        System.out.println("(" + x + "," + y + ")");
    }

}

class Line {
    private Point first;
    private Point last;

    Line(int x1, int x2, int y1, int y2) {
        first = new Point(x1, y1);
        last = new Point(x2, y2);
    }

    void dispone() {
        first.disp();
    }

    void disptwo() {
        last.disp();
    }
}

public class linetest {
    public static void main(String[] args) {
        Line l1 = new Line(1, 2, 3, 4);
        l1.dispone();
        l1.disptwo();
    }
}
