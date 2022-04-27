public class Multiply implements Expression {
    private Expression leftOperand;
    private Expression rightOperand;
  
    public Multiply(Expression leftOp, Expression rightOp){
        this.leftOperand = leftOp;
        this.rightOperand = rightOp;
    }
  
    @Override
    public int evaluate(){
        return leftOperand.evaluate() * rightOperand.evaluate();
    }
}