package characters17;


public class Characters17 {


    public static void main(String[] args) {
  
        char[]src={'l','a','n','g','u','a','g','e'};
        char []dest=new char[13];
        dest [0]='j';
        dest [1]='a';
        dest [2]='v';
        dest [3]='a';
        dest [4]=' ';
        System.arraycopy(src, 0, dest, 5, 8);
        System.out.println(new String(dest));
    }
    
}
