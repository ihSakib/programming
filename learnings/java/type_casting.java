public class type_casting {
  public static void main(String[] args) {
    int x = 10;
    double y = x; // Implicit, byte -> short -> char -> int -> long -> float -> double
    System.out.println(y);

    float a = 10.15F;
    byte b = (byte) a; // Explicit, double -> float -> long -> int -> char -> short -> byte
    System.out.println(b);

    // System.out.println((float) 2 / 10);

  }
}
