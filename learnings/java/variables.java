public class variables {
  public static void main(String[] args) {
    byte x = 127; // -128 to 127
    short y = 32767; // -32768 to 32767
    int z = 2147483647; // -2147483648 to 2147483647
    long w = 9223372036854775807L; // -9223372036854775808 to 9223372036854775807
    try {
      long n = Math.addExact(w, 1);
    } catch (ArithmeticException e) {
      System.out.println("ArithmeticException: " + e.getMessage());
    }

    System.out.println(Character.BYTES);
  }
}