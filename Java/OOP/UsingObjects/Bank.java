package Java.OOP.UsingObjects;

public class Bank {

    private static final float min_open_acc_amount = 100.00f;
    private static final float min_deposit_amount = 20.00f;
    
    static float get_min_start_amount(){    
        return min_open_acc_amount;
    }

    static float get_min_deposit_amount(){
        return min_deposit_amount;
    }
    
}
