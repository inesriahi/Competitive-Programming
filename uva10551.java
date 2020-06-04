import java.math.BigInteger; 
import java.util.Scanner; 

public class Main{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int b;
        String s; 
        BigInteger p,m;
        while (true){
            b = in.nextInt();
            if (b==0) break;
            s = in.next();
            p = new BigInteger(s,b);
            s = in.next();
            m = new BigInteger(s,b);
            System.out.println(p.mod(m).toString(b));
        }
        
    }
}
