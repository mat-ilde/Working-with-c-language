
package gestionsupermercado;

import java.util.ArrayList;
import java.util.List;


/**
 *
 * @author mati
 */
public class Pedido {
    
    private final int numeroPedido;
    private final String fechaCompra;
    private final String fechaEntrega;
    private Proveedor proveedor;
    private final List<ProductoPedido> productosPedidos = new ArrayList<>();
    
    //Un constructor inicializa un objeto cuando se crea.
    Pedido(Proveedor proveedor, int numeroPedido, String fechaCompra, String fechaEntrega)
    {
        this.proveedor=proveedor;
        proveedor.addPedido(this);
        this.numeroPedido=numeroPedido;
        this.fechaCompra=fechaCompra;
        this.fechaEntrega=fechaEntrega;
    }
    
    /**
     * Añade un producto al pedido
     * @param Recibe un producto de la clase Producto y la cantidad del producto
     * de tipo double
    */
    void addProductos(Producto producto, double cantidad)
    {
        
        ProductoPedido productoPedido=new ProductoPedido(producto,cantidad);
        this.productosPedidos.add(productoPedido);
    }
    
    /**
     * Devuelve el proveedor que tiene este pedido
     * @return Retorna Proveedor devuelve el proveedor que hará ese pedido
    */
    Proveedor getProveedor()
    {
        return this.proveedor;
    }
    
    /**
     * Devuelve la lista de productos del pedido
     * @return Retorna Lista devuelve los productos que hay en el pedido
    */
    List<ProductoPedido> getProductos()
    {    
        return this.productosPedidos;
    }
    
    /**
     * Añade proveedor al pedido
     * @param Recibe un proveedor de la clase proveedor 
     * 
    */
    void setProveedor(Proveedor proveedor)
    {
        this.proveedor=proveedor;
    }
    
    /**
     * Devuelve el número del pedido
     * @return Entero, devuelve el número del pedido
    */
    int getNumeroPedido()
    {
        return this.numeroPedido;
    }
    
    /**
     * Devuelve la fecha de compra del pedido
     * @return String, devuelve la fecha de compra del pedido
    */
    String getFechaCompra() 
    {
        return this.fechaCompra;
    }
    
    /**
     * Devuelve la fecha de entrega del pedido
     * @return String, devuelve la fecha de entrega del pedido
    */
    String getFechaEntrega() 
    {
        return this.fechaEntrega;
    }
    
    /**
     * Devuelve la cantidad de cada producto del pedido
     * @return Double, devuelve la cantidad de cada producto del pedido
    */
    
}


