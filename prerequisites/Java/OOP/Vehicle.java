//package oop;

public class Vehicle{

    public String name = "";
    public String color = "";
    public String model = "";
    public String company = "";

    //constructor doesn't has a return type
    public Vehicle(){}

    public Vehicle(String name, String color, String model, String company){
        this.name = name;
        this.color = color;
        this.model = model;
        this.company = company;
    }

    public void setName(String name){
        this.name = name; 
    }

    public void setColor(String color){
        this.color = color; 
    }

    public void setModel(String model){
        this.model = model; 
    }

    public void setCompany(String company){
        this.company = company; 
    }

    public String getName(){
        return this.name; 
    }

    public String getColor(){
        return this.color; 
    }

    public String getModel(){
        return this.model; 
    }

    public String getCompany(){
        return this.company; 
    }
}