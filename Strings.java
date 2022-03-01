public class Strings {
    public static void main(String[] args) {
        //strings
      //first method create string
        char str[]={'h','e','l','l','\0'};
        for (int i = 0; i < str.length; i++) {
            System.out.println(str[i]);
        }
        //second
        String name="pranjal";
        System.out.println(name);
        //methods of strings
        System.out.println(name.length());
        System.out.println(name.charAt(3));
        String n=name.substring(0,5);
        System.out.println(n);
    }
}
