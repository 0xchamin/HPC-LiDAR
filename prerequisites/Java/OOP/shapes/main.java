public class main{
    public static void main(String[] args){
        Shape s1 = new Circle();
        s1.draw();
        IShape s2 = new IRectangle();
        s2.draw();
    }
}