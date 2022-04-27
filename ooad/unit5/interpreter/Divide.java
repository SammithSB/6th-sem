public class Divide implements Expression {
    private Expression numerator;
    private Expression denominator;
  
    public Divide(Expression numerator, Expression denominator){
        this.numerator = numerator;
        this.denominator = denominator;
    }
  
    @Override
    public int evaluate(){
        try {
            return numerator.evaluate() / denominator.evaluate();
        } catch (ArithmeticException e) {
            System.out.println("Division by Zero Exception");
            throw e;
        }
    }
}