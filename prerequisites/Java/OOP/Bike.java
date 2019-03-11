public class Bike extends Vehicle{
    private boolean fourStroke = true;
    
    public Bike(String name, String color, String model, String company, String engine, boolean fourStroke){
        super(name, color, model, company, engine);
        this.fourStroke = fourStroke;
    }
    public void setFourStroke(boolean fourStroke){
        this.fourStroke = fourStroke;
    }

    public boolean getFourStroke(){
        return this.fourStroke;
    }

     public String getInfo(){
        return "This is getInfo Bike method";
    }
}