public class WholeNumber implements Expression {
    private int number;
 
    public WholeNumber(int number) {
        this.number = number;
    }
 
    public WholeNumber(String str) {
        this.number = Integer.parseInt(str);
    }
 
    @Override
    public int evaluate() {
        return number;
    }
}