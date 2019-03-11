//package oop;

public class Main{
    public static void main(String[] args){
        Vehicle v1 = new Vehicle();
        Vehicle v2 = new Vehicle("Honda", "Red", "2016", "Honda ");
       // Vehicle v3 = new Vehicle();
       // Vehicle v4 = new Vehicle();

        System.out.println(v1.color);
        System.out.println(v2.color);
        v1.setName("City ");
        System.out.println(v1.name);
        v2.setColor("Black");
        System.out.println(v2.color);
        System.out.println(v1.getName());
        System.out.println(v2.getModel());
    }
}