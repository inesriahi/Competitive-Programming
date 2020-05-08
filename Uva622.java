import java.util.*;

import javax.script.ScriptEngine;
import javax.script.ScriptEngineManager;

class uva622 {
    public static void main(String[] args) throws Exception{
        Scanner sc = new Scanner(System.in);
        ScriptEngineManager mgr = new ScriptEngineManager();

        ScriptEngine engine = mgr.getEngineByName("JavaScript");

        int tc = sc.nextInt();
        while(tc-- >= 0){
            try{
                Object res = engine.eval(sc.nextLine());
                if (res != null)
                    System.out.println(res);
            } catch (Exception e) {
                System.out.println("ERROR");
            }
            
        }
    }
     
}
