abstract class TransactionProcessor{
    private TransactionProcessor transactionProcessor;
    abstract protected Double getApprovalLimit();
    abstract protected String getDesignation();
    public void setSuccessor(TransactionProcessor transactionProcessor) { 
        this.transactionProcessor = transactionProcessor;
    }
    public void approve(Transaction transaction) {
    	if(transaction.getAmount() <=0.0 ) 
    	{
    		System.out.println("Invalid Amount. Amount should be > 0");
            return;
    	}
    	
    	if(transaction.getAmount() <= getApprovalLimit()) {
            System.out.println("Transaction for amount "+transaction.getAmount()+ " approved by "+getDesignation());
        }else {
            if(transactionProcessor == null){
                System.out.println("Invalid Amount. Amount should not exceed 25lacs!");
                return;
                }
         transactionProcessor.approve(transaction);
           }
}}
class Manager extends TransactionProcessor{

    @Override
    protected Double getApprovalLimit() {
        return 100000.0;
    }

    @Override
    protected String getDesignation() {
        return "manager";
    }
}
class VicePresident extends TransactionProcessor{

    @Override
    protected Double getApprovalLimit() {
        return 1000000.0;
    }

    @Override
    protected String getDesignation() {
        return "vice president";
    }
}
class CEO extends TransactionProcessor{

    @Override
    protected Double getApprovalLimit() {
        return 2500000.0;
    }

    @Override
    protected String getDesignation() {
        return "CEO";
    }
}

class Transaction{
    private Double amount;
    private String purpose;

    Transaction(Double amount, String purpose){
        this.amount = amount;
        this.purpose = purpose;
    }

    public Double getAmount() {
        return amount;
    }

    public String getPurpose() {
        return purpose;
    }
}
public class ChainOfResponsibility {
	public static void main(String[] args) {
		  Manager manager = new Manager(); 
	        VicePresident vicePresident = new VicePresident();
	        CEO ceo = new CEO();
	        manager.setSuccessor(vicePresident); 
	        vicePresident.setSuccessor(ceo);
	        
	        manager.approve(new Transaction(2600000.0, "general"));
	        manager.approve(new Transaction(50000.0, "general")); 
	        manager.approve(new Transaction(120000.0, "general"));
	        manager.approve(new Transaction(1500000.0, "general"));
	        manager.approve(new Transaction(0.0, "general"));
	      	}
}