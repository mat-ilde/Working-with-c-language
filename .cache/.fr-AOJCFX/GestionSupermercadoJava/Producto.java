package gestionsupermercado;

import java.util.ArrayList;
import java.util.List;


/**
 *
 * @author mati
 */
public class Producto {
    //atributos de clase
    private final String nombre;
    private final double precioCompra;
    private final double precioVenta;
    private final List<Proveedor> proveedores = new ArrayList<>();
    private Proveedor proveedor;
    private final List<Pedido> pedidos = new ArrayList<>();
    private Almacen almacen;
    private Supermercado supermecado;
    private double cantidad;
    
    //Un constructor inicializa un objeto cuando se crea.
    public Producto(String nombre, double precioCompra, double precioVenta) {
        this.nombre = nombre;
        this.precioCompra = precioCompra;
        this.precioVenta = precioVenta;
    }
    
    /**
     * Devuelve el nombre del producto
     * @return Un string con el nombre del producto
    */
    String getNombre()
    {
        return this.nombre;
    }
    
    /**
     * Le asigna un almacen al producto
     * @param recibe un almacen de de tipo almacen
    */
    void setAlmacen(Almacen almacen){
        this.almacen = almacen;
    }   
    
    /**
     * Devuelve el almacen al que pertenece
     * @return Retorna Almacen devuelve el almacen donde se encuentra el producto
    */
    Almacen getAlmacen()
    {
        return this.almacen;
    }
    
    /**
     * Devuelve la cantidad del producto
     * @return Retorna double devuelve la cantidad del producto
    */
    double getCantidad()
    {
        return this.cantidad;
    }
    
    /**
     * Devuelve el precio de compra
     * @return Retorna double devuelve precio de compra del producto
    */
    double getprecioCompra()
    {
        return this.precioCompra;
    }
    
    /**
     * Devuelve el precio de Venta
     * @return Retorna double devuelve precio de venta del producto
    */
    double getprecioVenta()
    {
        return this.precioVenta;
    }
    
    /**
     * Añade el proveedor a la lista de proveedores que tiene ese producto
     *@param Recibe un proveedor de la clase Proveedor 
    */
    void addProveedor(Proveedor proveedor)
    {
        this.proveedores.add(proveedor);
    }
    /**
     * Muestra de forma mas visual los datos del producto
     *@see Se puede ver el nombre, el precio de compra y venta
    */
    void muestraProducto()
    {
        System.out.println("Producto: "+this.nombre);
        System.out.println("\tEl precio de compra es: "+this.precioCompra);
        System.out.println("\tEl precio de venta es: " +this.precioVenta);
    }
    


}   

