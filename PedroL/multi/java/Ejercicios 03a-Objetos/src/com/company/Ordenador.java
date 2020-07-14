package com.company;

public class Ordenador {
    String Nombre = "Ordenador";
    float Bateria = 10.0f;
    boolean Enchufado = false, Encendido = false, Cargando = false;

    Thread CargarThread = new Thread() {
        public void run() {
            Cargando = (Bateria < 100.0f);

            if(!Cargando) { System.out.println("Bateria llena"); }
            while (Enchufado && Cargando) {
                try { sleep(10); }
                catch (InterruptedException e) { e.printStackTrace();}

                if(Bateria < 100.0f) {
                    Bateria += 1.0f;
                    if(Bateria % 10.0f == 0) { System.out.println(Bateria); }
                } else {
                    Cargando = false;
                }
            }
            System.out.println("Carga finalizada");
            interrupt();
        }
    };

    Ordenador(String Nombre, float Bateria) {
        this.Nombre = Nombre;
        this.Bateria = Bateria;
    }

    Ordenador(String Nombre) {
        this.Nombre = Nombre;
        CargarThread.start();
    }

    void ToggleEnchufado() throws InterruptedException {
        this.Enchufado = !this.Enchufado;
        if (this.Enchufado) {
            CargarThread.start();
            System.out.println("Bateria cargando");

        } else {
            System.out.println("Bateria desconectada");
        }
    }

    void ToggleEncendido() { //TODO: Encender podria consumir bateria
        Encendido = !Encendido;
        if (this.Encendido) {
            System.out.println(Nombre + " encendido");
        } else {
            System.out.println(Nombre + " apagado");
        }
    }
}

