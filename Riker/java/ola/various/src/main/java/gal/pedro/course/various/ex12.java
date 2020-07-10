// 1-Crea una clase que represente un punto en el espacio.
// Crea tres objetos puntos y posicionalos en el espacio de forma aleatoria.

import java.util.Random;



class ex12 {
    public static void main(String[] s){
        Point3D a = new Point3D();
        Point3D b = new Point3D();
        Point3D c = new Point3D();

        System.out.println(a.toString());
        System.out.println(b.toString());
        System.out.println(c.toString());
    }
}

class Point3D {
    private int x;
    private int y;
    private int z;

    public Point3D(){
        x = new Random().nextInt(1000);
        y = new Random().nextInt(1000);
        z = new Random().nextInt(1000);
    }
    public Point3D(int x, int y, int z) {
        this.x = x;
        this.y = y;
        this.z = z;
    }
    public int getX() { return x; }
    public int getY() { return y; }
    public int getZ() { return z; }
    public String toString() {
        return "("+Integer.toString(x)+","+Integer.toString(y)+","+Integer.toString(z)+")";
            
            
    }
}



