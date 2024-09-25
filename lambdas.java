/**
 * lambdas
 */
public class lambdas {

  public static void main(String[] args) {
    String name = "null void";
    Runnable print = () -> {
      System.out.println(name);
    };
    print.run();
  }
}
