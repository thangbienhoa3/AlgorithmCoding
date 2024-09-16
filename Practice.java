import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Scanner;
import java.util.Set;

public class Practice {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List <String> ll = new ArrayList<String>();
        Set <String> se = new HashSet<String>();
        String s = sc.nextLine();
        String[] tmp = s.split(" ",-1);
        for(String a : tmp){
            ll.add(a);
            se.add(a);
        }
        for(int i = 0;i < ll.size();i++){
            System.out.print(ll.get(i) + " ");
        }
        System.out.println();
        for(String a : se){
            System.out.print(a + " ");
        }
        System.out.println();
        System.out.println(se.contains("C++"));
    }
}
