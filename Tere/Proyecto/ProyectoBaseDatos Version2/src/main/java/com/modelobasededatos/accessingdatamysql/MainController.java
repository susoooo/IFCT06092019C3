//CREACION DEL CONTROLADOR @Controller:

package com.modelobasededatos.accessingdatamysql;


import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.ResponseBody;

@Controller // This means that this class is a Controller
@RequestMapping(path="/demo") // This means URL's start with /demo (after Application path)

public class MainController {
  @Autowired // This means to get the bean called userRepository
         // Which is auto-generated by Spring, we will use it to handle the data
  private UserRepository userRepository;
 
  

  @PostMapping(path="/add") // Map ONLY POST Requests
  public @ResponseBody String addNewBDClientes (
          
           @RequestParam Integer IdCliente
          , @RequestParam(value = "nombrecomercial", defaultValue = "") String nombrecomercial 
          , @RequestParam(value = "nombrefiscal", defaultValue = "") String nombrefiscal 
          , @RequestParam(value = "DNI", defaultValue = "") String DNI
          , @RequestParam(value = "Direccion", defaultValue = "") String Direccion
          , @RequestParam(value = "CP", defaultValue = "") String CP
          , @RequestParam(value = "Ciudad", defaultValue = "") String Ciudad
          , @RequestParam(value = "Provincia", defaultValue = "") String Provincia
          , @RequestParam(value = "Pais", defaultValue = "") String Pais
          , @RequestParam(value = "Telefono", defaultValue = "") String Telefono
          , @RequestParam(value = "movil", defaultValue = "") String movil
          , @RequestParam(value = "fax", defaultValue = "") String fax
          , @RequestParam(value = "web", defaultValue = "") String web                 
          , @RequestParam(value = "email", defaultValue = "") String email
          , @RequestParam(value = "pago", defaultValue = "") String pago
          
          , @RequestParam(value = "Banco", defaultValue = "") String Banco
          , @RequestParam(value = "descuento", defaultValue = "") Float descuento
          , @RequestParam(value = "IBAN", defaultValue = "") Integer IBAN
          , @RequestParam(value = "BIC", defaultValue = "") Integer BIC
          
          , @RequestParam(value = "sinIVA", defaultValue = "") String sinIVA
          , @RequestParam(value = "RE", defaultValue = "") String RE
          
          , @RequestParam(value = "contacto", defaultValue = "") String contacto) {
    // @ResponseBody means the returned String is the response, not a view name
    // @RequestParam means it is a parameter from the GET or POST request

 
    
    BDClientes n = new BDClientes();
    n.setIdCliente(IdCliente);
    n.setNombrecomercial(nombrecomercial);
    n.setNombrefiscal(nombrefiscal);
    n.setDNI(DNI);
    n.setDireccion(Direccion);
    n.setCP(CP);
    n.setCiudad(Ciudad);
    n.setProvincia(Provincia);
    n.setPais(Pais);
    n.setTelefono(Telefono);
    n.setmovil(movil);
    n.setfax(fax);
    n.setweb(web);
    n.setcontacto(contacto);
    n.setProvincia(Provincia);
    n.setEmail(email);
    n.setpago(pago);
    n.setBanco(Banco);
    n.setIBAN(IBAN);
    n.setBIC(BIC);
    n.setsinIVA(sinIVA);
    n.setRE(RE);
    n.setdescuento(descuento);    
    
    
    
    userRepository.save(n);
    
    return "Saved";
    
  }
  


  @GetMapping(path="/all")
  public @ResponseBody Iterable<BDClientes> getAllBDClientes() {
    // This returns a JSON or XML with the users
    return userRepository.findAll();
  }




 /* @PostMapping(path="/add") // Map ONLY POST Requests
  public @ResponseBody String addNewBDProductos (
          
           @RequestParam Integer IdProducto
          , @RequestParam(value = "nombreproducto", defaultValue = "") String nombreproducto 
          , @RequestParam(value = "precio", defaultValue = "") Float precio 
          , @RequestParam(value = "IVA", defaultValue = "") Float IVA
          , @RequestParam(value = "PVP", defaultValue = "") Float PVP
          , @RequestParam(value = "Descuento", defaultValue = "") Float Descuento
          , @RequestParam(value = "Descripcion", defaultValue = "") String Descripcion) {
    // @ResponseBody means the returned String is the response, not a view name
    // @RequestParam means it is a parameter from the GET or POST request

 
    
    BDProductos n = new BDProductos();
    n.setIdProducto(IdProducto);
    n.setnombreproducto(nombreproducto);
    n.setprecio(precio);
    n.setIVA(IVA);
    n.setPVP(PVP);
    n.setDescuento(Descuento);
    n.setDescripcion(Descripcion);
     
    
    
    ProductosRepository.save(n);
    
    return "Saved";
    
  }


 @GetMapping(path="/all")
  public @ResponseBody Iterable<BDProductos> getAllBDProductos() {
    // This returns a JSON or XML with the users
    return ProductosRepository.findAll();
  }
*/
}