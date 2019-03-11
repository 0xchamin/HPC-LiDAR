//package oop;

public class Main{
    public static void main(String[] args){
        /**
        Vehicle v1 = new Vehicle();
        System.out.println(v1.count);
        Vehicle v2 = new Vehicle("Honda", "Red", "2016", "Honda ", "900");
       // Vehicle v3 = new Vehicle();
       // Vehicle v4 = new Vehicle();

        //System.out.println(v1.color);
        //System.out.println(v2.color);
        v1.setName("City ");
        //System.out.println(v1.name);
        v2.setColor("Black");
        //System.out.println(v2.color);
        System.out.println(v1.getName());
        System.out.println(v2.getModel());
        System.out.println(v2.getColor());
        System.out.println(v2.getSpeed());

        System.out.println(v1.count);
        System.out.println(v2.count);
        //System.out.println(Vehicle.count);

        //call static functions
        System.out.println(Vehicle.getVehicle());
        */
        
        Car c1 = new Car("Honda", "Red", "2016", "Honda ", "900", true, false);
        System.out.println(c1.getLedScreen());
        System.out.println(c1.getName());

        //method override 
        //c1.setName()


    }
}