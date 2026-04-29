package Java.OOP.UsingObjects;


public class Account {    

    private String bearer;
    private float amount;


    Account(String bearer, float initial_amount){
        if(initial_amount < Bank.get_min_start_amount()){
            System.out.println("Cannot create account with less than $" + Bank.get_min_start_amount() + " as initial deposit.");
            return;
        }
        this.bearer = bearer;
        this.amount = initial_amount;
    }   

    boolean changeBearer(String new_bearer){
        if(this.bearer.equals(new_bearer)){
            System.out.println("Cannot set new bearer to old bearer's name.");
            return false;
        }
        this.bearer = new_bearer;
        return true;
    }

    boolean deposit(float amount){
        if(amount <= Bank.get_min_deposit_amount()){
            System.out.println("Cannot deposit less than $" + Bank.get_min_deposit_amount() + " .");
            return false;
        }
        this.amount += amount;
        return true;
    }

    boolean withdraw(float amount){
        if(amount <= 0){
            System.out.println("Cannot withdraw negative value or zero.");
            return false;
        }
        else if(amount > this.amount){
            System.out.println("Cannot withdraw more than account current balance.");
            return false;
        }
        this.amount -= amount;
        return true;
    }

    // every object has a default toString method which returns a string representation of the object
    // we can customize it like so
    @Override
    public String toString(){
        return "Name : " + this.bearer + "\nAmount : $" + String.valueOf(this.amount);
    }

}
