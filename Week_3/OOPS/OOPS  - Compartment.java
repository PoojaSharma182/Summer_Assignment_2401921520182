import java.util.Random;


abstract class Compartment {
    public abstract String notice();
}


class FirstClass extends Compartment {
    public String notice() {
        return "First Class";
    }
}


class Ladies extends Compartment {
    public String notice() {
        return "Ladies";
    }
}


class General extends Compartment {
    public String notice() {
        return "General";
    }
}

class Luggage extends Compartment {
    public String notice() {
        return "Luggage";
    }
}

public class Main {
    public static void main(String[] args) {
        Compartment[] c = new Compartment[10];
        Random r = new Random();

        for (int i = 0; i < 10; i++) {
            int x = r.nextInt(4); // generates 0,1,2,3

            switch (x) {
                case 0:
                    c[i] = new FirstClass();
                    break;
                case 1:
                    c[i] = new Ladies();
                    break;
                case 2:
                    c[i] = new General();
                    break;
                case 3:
                    c[i] = new Luggage();
                    break;
            }
        }

        
        for (int i = 0; i < 10; i++) {
            System.out.println("Compartment " + (i + 1) + ": " + c[i].notice());
        }
    }
}