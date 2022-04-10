package proxy;

public class proxy {
    public static void main(String[] args) {
        // create a real objec
        // create a proxy object
        proxyImage proxy = new proxyImage("test.jpg");
        // display images
        proxy.display();

    }
}
