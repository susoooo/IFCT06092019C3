// 2-Crea una clase que represente un ordenador.
// Deberá incluir al menos métodos para enchufarlo, desenchufarlo, encenderlo, y apagarlo
// . Crea un programa que enchufe un portatil, lo encienda, lo cargue, lo apague y lo desenchufe.

// TODO: control when switched on when is unplugged.. etc

public class ex13 {
    public static void main(String[] s){
        Computer c = new Computer();

        c.state();
        c.plug();
        c.state();
        c.switchOn();
        c.state();
        c.load();
        c.state();
        c.switchOff();
        c.state();
        c.unplug();
        c.state();
    }
}

class Computer {
    boolean plugged;
    boolean switchedon;

    public Computer() {
        plugged = false;
        switchedon = false;
    }
    public void plug(){
        if(plugged){
            System.out.println("It's alredy plugged!!");
        } else {
            plugged = true;
        }
    }
    public void unplug(){
        if(!plugged){
            System.out.println("It's alredy unplugged!!");
        } else {
            plugged = false;
        }
    }
    public void switchOn(){
        if(switchedon){
            System.out.println("It's alredy switched on!!");
        } else {
            switchedon = true;
        }
    }
    public void switchOff(){
        if(!switchedon){
            System.out.println("It's alredy switched off!!");
        } else {
            switchedon = false;
        }
    }
    public void load() {
        System.out.println("Loading air into the digital world!");
    }

    public void state() {
        System.out.printf("Plugged: %b\n", plugged);
        System.out.printf("Switchedon: %b\n", switchedon);
    }
}
