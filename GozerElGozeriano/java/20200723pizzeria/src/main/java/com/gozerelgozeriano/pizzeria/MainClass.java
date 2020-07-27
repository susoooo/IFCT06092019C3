//<editor-fold defaultstate="collapsed" desc=" Enunciado ">
/* 1-Crea una aplicación para la venta de pizzas de la cadena de pizzas
telesuperpizzaqueloflipas. Dicha aplicación debe permitir escoger al menos, la
base elegida (hiperextramegafina, hipermegafina, extrahiperfina, megaextrafina,
extrafina, megafina, hiperfina, fina) los ingredientes seleccionados (chourizo,
jamón, queso, morcilla, champiñon, lubrigante, grelos, piña, maracuya, chistorra,
polbo), un descuento (0%, 10%, 20% y 25%) y la forma de entrega (a domicilio, en
local). Tambien debe permitir incluir los datos de la persona que hace el pedido
en el cado de pedidos a domicilio. Cada ingrediente tiene un precio diferente a
la vez que los ingredientes.

La aplicación deberá generar un listado en un cuadro de texto donde aparezca el
pedido con lo que se ha pedido, y el precio del pedido, y si es el caso, los datos
de la persona que hace el pedido para las entregas a domicilio.*/// </editor-fold>
package com.gozerelgozeriano.pizzeria;

/**
 *
 * @author gozerelgozeriano
 */
public class MainClass {
    
    public static void main(String[] args){
        Pizzainfo info = new Pizzainfo();
        info.Load();
        PizzaGrid pizza = new PizzaGrid(info);
        pizza.setVisible(true);
    }
}
