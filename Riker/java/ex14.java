// 3-Crea una clase que represente a un rectangulo mediante su base y su altura.
// Implementa métodos para cambiar su base y su altura, y otros que calcule su area y su perímetro. 
// área= base * altura y perímetro=2*base + 2*altura).


public class ex14 {
    public static void main(String[] s){
        Rectangle r = new Rectangle(3,4);
        System.out.printf("Area: %f", r.area());
        System.out.printf("Perimeter: %f", r.perimeter());

        r.setBase(10);
        r.setHeight(11);
        System.out.printf("Area: %f", r.area());
        System.out.printf("Perimeter: %f", r.perimeter());
    }
}

class Rectangle {
    private float base;
    private float height;

    public Rectangle(float base, float height) {
        this.base = base;
        this.height = height;
    }
    public void setBase(float new_base) {
        base = new_base;
    }
    public void setHeight(float new_height) {
        height = new_height;
    }
    public float area() {
        return base*height;
    }
    public float perimeter() {
        return base*2+height*2;
    }
}
