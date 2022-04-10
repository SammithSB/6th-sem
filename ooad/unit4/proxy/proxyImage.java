package proxy;

public class proxyImage implements image {
    private realImage realImage;
    private String fileName;

    public proxyImage(String fileName) {
        this.fileName = fileName;
    }

    @Override
    public void display() {
        if (realImage == null) {
            realImage = new realImage(fileName);
        }
        realImage.display();
    }
}
