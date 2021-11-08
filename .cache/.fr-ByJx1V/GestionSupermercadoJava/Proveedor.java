
package gestionsupermercado;

import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author mati
 */
public class Proveedor {
    
    private final List<Producto> productos = new ArrayList<>();
    private final List<ProductoPedido> productosPedidos = new ArrayList<>();
    private final List<Pedido> pedidos = new ArrayList<>();
    private String nombre;
    
    
    //Un constructor inicializa un objeto cuando se crea.
    Proveedor(String nombre)
    {
        this.nombre=nombre;
    }
    
    /**
     * Devuelve el nombre del proveedor
     * @return Un string con el nombre del proveedor
    */
    String getNombre()
    {
        return this.nombre;
    }
    
    /**
     * Añade pedidos al proveedor y le asigna a la vez el proveedor a ese pedido
     * @param Recibe un pedido de la clase Pedido
    */
    void addPedido(Pedido pedido)
    {
        this.pedidos.add(pedido);
        
        
    }
    
    /**
     * Devuelve la lista de pedidos del proveedor
     * @return Lista devuelve los pedidos que tiene el proveedor
    */
    List<ProductoPedido> getPedidos(){
        return this.productosPedidos;
        
    }
    
    /**
     * Muestra de uns forma mas visual los datos del pedido
     * @see Se puede visualizar el número del pedido, la fecha de la compra
     * la fecha de entrega, el nombre del producto, la cantidad de producto en el pedido
    */
    void muestraPedidos()
    {   
        int longitudPedidos;
        longitudPedidos = this.pedidos.size();
        Pedido pedidoHecho;
        int longitudProductos;
        String nombreProducto="";
        int numeroPedido = 0;
        String fechaCompra="";
        String fechaEntrega="";
        double cantidad;
        
        for(int i=0;i<longitudPedidos;i=i+1)
        {  
           
           pedidoHecho=this.pedidos.get(i);
           
           numeroPedido=pedidoHecho.getNumeroPedido();
           fechaCompra=pedidoHecho.getFechaCompra();
           fechaEntrega=pedidoHecho.getFechaEntrega();
           
           
            //longitud de los productos en el pedido
            longitudProductos=pedidoHecho.getProductos().size();
            
            System.out.println("Este es el número de tu pedido: "+numeroPedido);
            System.out.println("\tEsta es la fecha de compra de tu pedido: "+fechaCompra);
            System.out.println("\tEsta es la fecha de entrega de tu pedido: "+fechaEntrega);
            
           for(int j=0;j<longitudProductos;j=j+1)
           {    
               cantidad=pedidoHecho.getProductos().get(j).getCantidad();
               nombre=pedidoHecho.getProductos().get(j).producto.getNombre();
               System.out.println("\tNombre: "+nombre);
               System.out.println("\tCantidad: "+cantidad);
               
               
           }
        }
    }
    //creo que no hace falta saber la lista de productos que tiene un proveedor.

    




}
